#include "string.h"
#include "math.h"
#include "windows.h"
#include "api/risk/public/FtdcRiskUserApi.h"
#include "risk/riskspi.h"
#include "win_event.h"

#include <iostream>
#include <vector>
using namespace std;

extern TShfeFtdcBrokerIDType appId;		// ���͹�˾����
extern TShfeFtdcUserIDType userId;		// ����Ա

extern int requestId;
extern HANDLE g_hEvent;

vector<CShfeFtdcSequencialPositionField*> posList;
vector<CShfeFtdcRiskSyncAccountField* > capList;
//���ӳɹ�
void CtpRiskSpi::OnFrontConnected()
{
	cerr<<" ���ӽ���ǰ��...�ɹ�"<<endl;
  SetEvent(g_hEvent);
}

//�����¼
void CtpRiskSpi::ReqUserLogin(  TShfeFtdcBrokerIDType	vAppId,
      TShfeFtdcUserIDType	vUserId,  TShfeFtdcPasswordType	vPasswd)
{
	CShfeFtdcReqRiskUserLoginField req;
  memset(&req, 0, sizeof(req));
	strcpy(req.BrokerID, vAppId); strcpy(appId, vAppId); 
	strcpy(req.UserID,   vUserId);strcpy(userId,vUserId);	
	strcpy(req.Password, vPasswd);
	req.Version=2;  
	int ret=pUserApi->ReqRiskUserLogin(&req,++requestId);	
  cerr<<" ���� | ���͵�¼..."<<((ret == 0) ? "�ɹ�" :"ʧ��") << endl;	
}

///�����¼��Ӧ
void CtpRiskSpi:: OnRspRiskUserLogin(
      CShfeFtdcRspRiskUserLoginField *pRspRiskUserLogin, 
      CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) 
{	 
  if( !IsErrorRspInfo(pRspInfo) && pRspRiskUserLogin){
    cerr<<" ��Ӧ | ��¼�ɹ�...��ǰ������:"
      <<pRspRiskUserLogin->TradingDay<<endl;
  }
  if(bIsLast) SetEvent(g_hEvent);
}

///�ͻ��˽���������ͬ����ʼ
//��ͬ��: ʱ��,��Ʒ��Ϣ,��Լ��Ϣ,Ͷ������, ����Զ�����
void CtpRiskSpi:: OnRtnClientSGDataSyncStart(
       CShfeFtdcSettlementSessionField *pSettlementSession) {	}
///ʱ��ͬ��
void CtpRiskSpi::OnRtnTimeSync(CShfeFtdcCurrentTimeField *pCurrentTime){}
///��������Ϣ
void CtpRiskSpi::OnRtnExchange(CShfeFtdcExchangeField *pExchange){ }
///��Ʒ��Ϣ
void CtpRiskSpi::OnRtnProduct(CShfeFtdcProductField *pProduct) { }
///��Լ��Ϣ
void CtpRiskSpi::OnRtnInstrument(CShfeFtdcInstrumentField *pInstrument){}
///Ͷ������
void CtpRiskSpi::OnRtnInvestorGroup(
            CShfeFtdcInvestorGroupField *pInvestorGroup){ }
//��֯�ܹ�����
void CtpRiskSpi::OnRtnDepartment(CShfeFtdcDepartmentField *pDepartment){}
///�ͻ��˽���������ͬ������
void CtpRiskSpi:: OnRtnClientSGDataSyncEnd(
         CShfeFtdcSettlementSessionField *pSettlementSession) 
{
  cerr<<" �ر� | �ն�ͬ������...���"<<endl;  
	ReqUserData();	
  SetEvent(g_hEvent);
}

//��ѯ�����Լ�����Ҫ������
void CtpRiskSpi::ReqUserData()
{
  //��ѯͶ������Ϣ
	CShfeFtdcInvestorIDRangeField reqField={0};
	pUserApi->ReqQryInvestorLinkMan(&reqField,1,++requestId);	

	//��ѯͶ������֯�ܹ���Ϣ	
	pUserApi->ReqQryInvestorLinkMan(&reqField,1,++requestId);	

	//���ı�����Ϣ	 
  //ע:
  //   ����Լ������յ������ݽ������ļ�����,���ٴε�½ʱ,
  //    pNotifySequence.SequenceNo��������յ���
  //    CShfeFtdcSequencialOrderField::UniqSequenceNo+1;
  //   �Լ������ݴ�����;�������
	CShfeFtdcNotifySequenceField pNotifySequence={0};			
	pNotifySequence.SequenceNo=0;							   
	pUserApi->ReqSubscribeOrder(&pNotifySequence,++requestId);
															   
	//���ĳɽ���Ϣ	
	pNotifySequence.SequenceNo=0;
	pUserApi->ReqSubscribeTrade(&pNotifySequence,++requestId);

	//���ĳֲ���Ϣ	
	pNotifySequence.SequenceNo=0;
	pUserApi->ReqSubscribePosition(&pNotifySequence,++requestId);

	//�����û��¼�	
	pNotifySequence.SequenceNo=0;
	pUserApi->ReqSubBrokerUserEvent(&pNotifySequence,++requestId);

	//����Ԥ��
	pNotifySequence.SequenceNo=0;
	pUserApi->ReqSubRiskParkedOrder(&pNotifySequence,++requestId);


	//�������ʽ�
	CShfeFtdcRiskNtfSequenceField pNotifySequence1={0};		
	pNotifySequence1.SequenceNo=0;
	pUserApi->ReqSubPreRiskAccount(&pNotifySequence1,++requestId);

	//���ĳ����
	pNotifySequence1.SequenceNo=0;
	pUserApi->ReqSubSeqDeposit(&pNotifySequence1,++requestId);

	//���Ľ��ױ��� 	
	pNotifySequence1.SequenceNo=0;
	pUserApi->ReqSubSeqTradingCode(&pNotifySequence1,++requestId);

	//���ķ���֪ͨ��Ϣ
	pNotifySequence1.SequenceNo=0;
	pUserApi->ReqSubSeqRiskNotifyB(&pNotifySequence1,++requestId);

	//����ҵ��֪ͨ
	pNotifySequence1.SequenceNo=0;
	strcpy(pNotifySequence1.DataType,"BizNotice");
	pUserApi->ReqSubSeqData(&pNotifySequence1,++requestId);


}
///��ѯͶ������ϢӦ��,��ӦReqQryInvestorLinkMan����
void CtpRiskSpi::OnRspQryInvestorLinkMan(
    CShfeFtdcInvestorLinkManField *pInvestorLinkMan, 
    CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){ }

///��ѯͶ������֯�ܹ�Ӧ��,��ӦReqQryInvestorLinkMan����
void CtpRiskSpi::OnRspQryInvestorDepartment(
    CShfeFtdcInvestorDepartmentFlatField *pInvestorDepartmentFlat, 
    CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){ }

///����ı����ر�,��ӦReqSubscribeOrder����
void CtpRiskSpi::OnRtnSequencialOrder(
    CShfeFtdcSequencialOrderField *pSequencialOrder){}

///����ĳɽ��ر�,��ӦReqSubscribeTrade����
void CtpRiskSpi::OnRtnSequencialTrade(
    CShfeFtdcSequencialTradeField *pSequencialTrade){}

///����ĳֲֻر�,��ӦReqSubscribePosition����
void CtpRiskSpi::OnRtnSequencialPosition(
    CShfeFtdcSequencialPositionField *pSequencialPosition)
{
  CShfeFtdcSequencialPositionField* pos= new CShfeFtdcSequencialPositionField();
  memcpy(pos,pSequencialPosition,sizeof(CShfeFtdcSequencialPositionField));
  bool founded=false;    unsigned int i=0;
  for(i=0; i<posList.size(); i++){
    if(strcmp(posList[i]->InstrumentID, pos->InstrumentID)==0
      && strcmp(posList[i]->InvestorID, pos->InvestorID)==0
      && posList[i]->PosiDirection == pos->PosiDirection
      && posList[i]->HedgeFlag == pos->HedgeFlag) {
      founded=true;    break;
    }
  }
  if(founded) posList[i]= pos;   
  else  posList.push_back(pos);
  //cerr<<" �ر� | �ֲֻر�����...���:"<<pos->UniqSequenceNo<<endl;
  //SetEvent(g_hEvent);	
}

///����ľ��͹�˾�û��¼��ر�,��ӦReqSubBrokerUserEvent����
void CtpRiskSpi::OnRtnSequencialBrokerUserEvent(
    CShfeFtdcSequencialBrokerUserEventField *pSequencialBrokerUserEvent){}

///����������ʽ�ر�����Ӧ��������ReqSubPreRiskAccount
void CtpRiskSpi::OnRtnSeqPreRiskAccount(
    CShfeFtdcSeqPreRiskAccountField *pSeqPreRiskAccount){}

///Ͷ���ߵ����ʽ�ر�,����Ҫ���ľ��Զ�����
void CtpRiskSpi::OnRtnRiskSyncAccount(
    CShfeFtdcRiskSyncAccountField *pRiskSyncAccount){
  CShfeFtdcRiskSyncAccountField* cap= new CShfeFtdcRiskSyncAccountField();
  memcpy(cap, pRiskSyncAccount,sizeof(CShfeFtdcRiskSyncAccountField));
  bool founded=false;    unsigned int i=0;
  for(i=0; i<capList.size(); i++){
    if(capList[i]->InvestorID == cap->InvestorID) {
      founded=true;    break;
    }
  }
  if(founded) capList[i]= cap;   
  else  capList.push_back(cap);
  //cerr<<" �ر� | �ʽ�ر�����...Ͷ����:"<<cap->InvestorID<<endl;
  //SetEvent(g_hEvent);
}

///����ĳ����ر�����Ӧ��������ReqSubSeqDeposit
void CtpRiskSpi::OnRtnSeqDeposit(CShfeFtdcSeqDepositField *pSeqDeposit){}

///����Ľ��ױ���ر�,��Ӧ��������ReqSubSeqTradingCode
void CtpRiskSpi::OnRtnSeqTradingCode(
    CShfeFtdcSeqTradingCodeField *pSeqTradingCode){}

///����ķ���֪ͨ�ر�,��Ӧ��������ReqSubSeqRiskNotifyB
void CtpRiskSpi::OnRtnSeqRiskNotifyB(
   CShfeFtdcSeqRiskNotifyBField *pSeqRiskNotifyB){ }

///�����ҵ��֪ͨ�ر�,��Ӧ��������ReqSubSeqData
void CtpRiskSpi::OnRtnSeqBizNotice(CShfeFtdcSeqBizNoticeField *pSeqBizNotice){}

///����������֪ͨ,��Ӧ��������ReqSubRiskMarketData
void CtpRiskSpi::OnRtnRiskDepthMarketData(
  CShfeFtdcDepthMarketDataField *pDepthMarketData){}

///��ѯ��������Ӧ��,��ӦReqQryOrderStat��ѯ
void CtpRiskSpi::OnRspQryOrderStat(CShfeFtdcOrderStatField *pOrderStat,
  CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){}

///��ѯ�ɽ�����Ӧ��,��ӦReqQryTradeStat��ѯ
void CtpRiskSpi::OnRspQryTradeStat(CShfeFtdcTradeStatField *pTradeStat, 
  CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){}

///��ѯ�ֲ�����Ӧ��,��ӦReqQryPositionStat��ѯ
void CtpRiskSpi::OnRspQryPositionStat(CShfeFtdcPositionStatField *pPositionStat, 
           CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){}

///��Լ�ֱֲ���Ӧ��,��ӦReqQryInstPositionRate��ѯ
void CtpRiskSpi::OnRspInstPositionRate(
  CShfeFtdcRspInstPositionRateField *pRspInstPositionRate, 
  CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){}

///��Ʒ�ֱֲ���Ӧ��,��ӦReqQryProductPositionRate��ѯ
void CtpRiskSpi::OnRspProductPositionRate(
  CShfeFtdcRspProductPositionRateField *pRspProductPositionRate,
  CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){}

///���°˸����ڱ�֤���ʵĺ������Զ��ص�,����Ҫ����
///���͹�˾��Լ��֤����
void CtpRiskSpi::OnRtnInstrumentMarginRate(
  CShfeFtdcInstrumentMarginRateField *pInstrumentMarginRate){}

///���͹�˾��Լ��֤���ʵ���
void CtpRiskSpi::OnRtnInstrumentMarginRateAdjust(
  CShfeFtdcInstrumentMarginRateAdjustField *pInstrumentMarginRateAdjust){}

///��������֤����
void CtpRiskSpi::OnRtnExchangeMarginRate(
  CShfeFtdcExchangeMarginRateField *pExchangeMarginRate){}

///��������֤���ʵ���
void CtpRiskSpi::OnRtnExchangeMarginRateAdjust(
  CShfeFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust){}

///ɾ�����͹�˾��Լ��֤����
void CtpRiskSpi::OnRtnDelInstrumentMarginRate(
  CShfeFtdcInstrumentMarginRateField *pInstrumentMarginRate){}

///ɾ�����͹�˾��Լ��֤���ʵ���
void CtpRiskSpi::OnRtnDelInstrumentMarginRateAdjust(
  CShfeFtdcInstrumentMarginRateAdjustField *pInstrumentMarginRateAdjust){}

///ɾ����������֤����
void CtpRiskSpi::OnRtnDelExchangeMarginRate(
    CShfeFtdcExchangeMarginRateField *pExchangeMarginRate){}

///ɾ����������֤���ʵ���
void CtpRiskSpi::OnRtnDelExchangeMarginRateAdjust(
    CShfeFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust){}

///��ǿƽ��
void CtpRiskSpi::ReqRiskOrderInsert(TShfeFtdcSequenceNoType seqNo,
    TShfeFtdcPriceType price)
{
  bool found=false; unsigned int i=0;
  for(i=0;i<posList.size();i++){
    if(posList[i]->UniqSequenceNo == seqNo){ found = true; break;}
  }
  if(!found){cerr<<" ���� | �ֲֲ�����."<<endl; return;} 

	CShfeFtdcRiskForceCloseOrderField field;
  memset(&field,0,sizeof(field));
	strcpy(field.BrokerID,  appId);
	strcpy(field.UserID,  userId);
	strcpy(field.InvestorID,posList[i]->InvestorID);
	strcpy(field.InstrumentID,posList[i]->InstrumentID);	
	
	field.FCType = SHFE_FTDC_FCT_Manual;///���ǿƽ����
	field.CombHedgeFlag[0]=posList[i]->HedgeFlag;	
	field.Direction= (posList[i]->PosiDirection==SHFE_FTDC_PD_Long) ? 
                        SHFE_FTDC_D_Sell : SHFE_FTDC_D_Buy;
	field.CombOffsetFlag[0]=SHFE_FTDC_OF_Close;//ƽ��; ����������ԼҲ��ƽ��
	field.UserForceClose=1;//����Ϊ1
	field.LimitPrice= price;
	field.VolumeTotalOriginal=1;	
	field.ContingentCondition=SHFE_FTDC_CC_Immediately;	
	field.OrderPriceType=SHFE_FTDC_OPT_LimitPrice;//�޼۵���������Ҳ֧���м۵�
	field.TimeCondition=SHFE_FTDC_TC_GFD;
	field.VolumeCondition=SHFE_FTDC_VC_AV;
	field.ForceCloseReason=SHFE_FTDC_FCC_NotForceClose;
	
	int ret=pUserApi->ReqRiskOrderInsert(&field,++requestId);	
  cerr<< " ���� | ����ǿƽ��..." <<((ret == 0)?"�ɹ�":"ʧ��") << endl;
}

///��ǿƽ��������Ӧ
void CtpRiskSpi::OnRspRiskOrderInsert(CShfeFtdcInputOrderField *pInputOrder, 
   CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if ( !IsErrorRspInfo(pRspInfo) && pInputOrder){
		cerr <<" ��Ӧ | ��ǿƽ���ɹ�..."<<endl;
	}
  if(bIsLast) SetEvent(g_hEvent);
}
//��ǿƽԤ��
void CtpRiskSpi::ReqRiskParkedOrderInsert(
  CShfeFtdcSequencialPositionField *pData)
{
  CShfeFtdcRiskParkedOrderField field={0};	
	field.UserType=SHFE_FTDC_RUT_SuperUser;
	field.TriggerType=SHFE_FTDC_OTT_Customize;//ָ����ʱ�䴥��;Ҳ�ɰ����׽׶δ���
	field.TradeSegment=0;
	strcpy(field.Time2,"14:30:00");
	strcpy(field.ExchangeID,"SHFE");//��ʵ������Ӧ�ôӺ�Լ��Ϣ��ȡ�ø��ֶ�
	
	strcpy(field.BrokerID,appId);
	strcpy(field.UserID,userId);
	strcpy(field.InvestorID,  pData->InvestorID);
	strcpy(field.InstrumentID,  pData->InstrumentID);
	
	field.FCType = SHFE_FTDC_FCT_Manual;///���ǿƽ����
	field.CombHedgeFlag[0] = pData->HedgeFlag;	
	field.Direction= (pData->PosiDirection==SHFE_FTDC_PD_Long ) ?
                      SHFE_FTDC_D_Sell : SHFE_FTDC_D_Buy;
	field.CombOffsetFlag[0]=SHFE_FTDC_OF_Close;//ƽ��; ����������ԼҲ��ƽ��
	field.UserForceClose=1; //����Ϊ1
	field.LimitPrice=  1000;
	field.VolumeTotalOriginal=1;	
	field.ContingentCondition=SHFE_FTDC_CC_Immediately;	
	field.OrderPriceType=SHFE_FTDC_OPT_LimitPrice;//�޼۵���������Ҳ֧���м۵�
	field.TimeCondition=SHFE_FTDC_TC_GFD;
	field.VolumeCondition=SHFE_FTDC_VC_AV;
	field.ForceCloseReason=SHFE_FTDC_FCC_NotForceClose;
	field.ForceCloseRelease=SHFE_FTDC_FCR_RealTime;
	int ret=pUserApi->ReqRiskParkedOrderInsert(&field,++requestId);
  cerr<< " ���� | ����Ԥ��ǿƽ��..." <<((ret == 0)?"�ɹ�":"ʧ��") << endl;
}

//��Ԥ��������Ӧ
void CtpRiskSpi::OnRspRiskParkedOrderInsert(
  CShfeFtdcRiskParkedOrderField *pRiskParkedOrder, 
  CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if ( !IsErrorRspInfo(pRspInfo) && pRiskParkedOrder)	{
		cerr <<" ��Ӧ | Ԥ��ǿƽ��...�ɹ�"<<endl;
	}
  if (bIsLast) SetEvent(g_hEvent);
}
//����
void CtpRiskSpi::ReqRiskOrderAction(CShfeFtdcSequencialOrderField *pData)
{
	CShfeFtdcInputOrderActionField req={0};
	strcpy(req.BrokerID,pData->BrokerID);
	strcpy(req.InvestorID,pData->InvestorID);
	req.OrderActionRef=0;
	strcpy(req.OrderRef,pData->OrderRef);
	req.RequestID=pData->RequestID;
	req.FrontID=pData->FrontID;
	req.SessionID=pData->SessionID;
	strcpy(req.ExchangeID,pData->ExchangeID);
	strcpy(req.OrderSysID,pData->OrderSysID);
	req.ActionFlag=SHFE_FTDC_AF_Delete;//��ʱ��֧�ָĵ�
	req.LimitPrice=pData->LimitPrice;
	req.VolumeChange=0;
	strcpy(req.UserID,userId);
	strcpy(req.InstrumentID,pData->InstrumentID);
  
  int ret=	pUserApi->ReqRiskOrderAction(&req,++requestId);
  cerr<< " ���� | ���ͳ���..." <<((ret == 0)?"�ɹ�":"ʧ��") << endl;
}

///������Ӧ
void CtpRiskSpi::OnRspRiskOrderAction(
    CShfeFtdcInputOrderActionField *pInputOrderAction, 
    CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{
	if ( !IsErrorRspInfo(pRspInfo) && pInputOrderAction){
    cerr <<" ��Ӧ | �����ɹ�...������:"
      <<pInputOrderAction->ExchangeID
      <<" �������:"<<pInputOrderAction->OrderSysID<<endl;
	}
  if (bIsLast) SetEvent(g_hEvent);
}
//��Ԥ��
void CtpRiskSpi::ReqRemoveRiskParkedOrder(
    CShfeFtdcRemoveRiskParkedOrderField* pData){ }

///��Ԥ����Ӧ
void CtpRiskSpi::OnRspRemoveRiskParkedOrder(
    CShfeFtdcRemoveRiskParkedOrderField *pRemoveRiskParkedOrder, 
    CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){}

//ϯλ�ʽ��ѯ
void CtpRiskSpi::ReqRiskQryBrokerDeposit(TShfeFtdcExchangeIDType	exchangeId)
{
	CShfeFtdcQueryBrokerDepositField field={0};
	strcpy(field.BrokerID,appId);
	strcpy(field.ExchangeID,exchangeId);
	int ret = pUserApi->ReqRiskQryBrokerDeposit(&field,++requestId);
  cerr<<" ���� | ���ͻ�Ա�ʽ��ѯ..."<<((ret == 0) ? "�ɹ�" :"ʧ��")<<endl;	
}

///��ѯϯλ�ʽ�Ӧ��
void CtpRiskSpi::OnRspRiskQryBrokerDeposit(
    CShfeFtdcQueryBrokerDepositField *pQueryBrokerDeposit, 
    CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast)
{	
	if (!IsErrorRspInfo(pRspInfo) && pQueryBrokerDeposit)	{
		cerr<<" ��Ӧ | ��ѯϯλ�ʽ�...�ɹ�"<<endl;
	}
  if (bIsLast) SetEvent(g_hEvent);
}

///ϯλ�ʽ�ر�,��ReqRiskQryBrokerDeposit����
void CtpRiskSpi::OnRtnBrokerDeposit(CShfeFtdcBrokerDepositField *pBrokerDeposit)
{
  cerr<<" �ر� | ��Ա:"<<pBrokerDeposit->ParticipantID
    <<" ����׼����:"<<pBrokerDeposit->Balance
    <<" ��ǰ��֤��:"<<pBrokerDeposit->CurrMargin
    <<" �����ʽ�:"<<pBrokerDeposit->Available
    <<" ƽ��ӯ��:"<<pBrokerDeposit->CloseProfit<<endl;
  SetEvent(g_hEvent);	
}

bool CtpRiskSpi::IsErrorRspInfo(CShfeFtdcRspInfoField *pRspInfo)
{
  bool ret = ((pRspInfo) && (pRspInfo->ErrorID != 0));
  if (ret){
    cerr<<" ��Ӧ | "<<pRspInfo->ErrorMsg<<endl;
  }
  return ret;
}

///���ӶϿ�
void CtpRiskSpi::OnFrontDisconnected(int nReason)
{
  cerr<<" ��Ӧ | �����ж�..." 
    << " reason=" << nReason << endl;
}

///����
void CtpRiskSpi::OnHeartBeatWarning(int nTimeLapse)
{
  cerr<<" ��Ӧ | ������ʱ����..." 
    << " TimerLapse = " << nTimeLapse << endl;
}

///����Ӧ��	(response to wrong/invalid quest)
void CtpRiskSpi:: OnRspError(CShfeFtdcRspInfoField *pRspInfo, 
    int nRequestID, bool bIsLast)
{
	IsErrorRspInfo(pRspInfo);
}
void CtpRiskSpi::PrintAcounts(){
  CShfeFtdcRiskSyncAccountField* cap; 
  for(unsigned int i=0; i<capList.size(); i++){
    cap = capList[i];
    cerr<<" �ʽ� | Ͷ����:"<<cap->InvestorID
      <<" Ȩ��:"<< cap->Balance
      <<" ����:"<<cap->Available
      <<" ��ǰ��֤��:"<< cap->CurrMargin 
      <<" ���ᱣ֤��:"<< cap->FrozenMargin      
      <<" ����������:"<< cap->FrozenCommission
      <<" ƽ��ӯ��:"<<cap->CloseProfit 
      <<" �ֲ�ӯ��:"<<cap->PositionProfit<<endl;
  }
  SetEvent(g_hEvent);
}
void CtpRiskSpi::PrintPositions(){
  CShfeFtdcSequencialPositionField* pos; 
  for(unsigned int i=0; i<posList.size(); i++){
    pos = posList[i];
    cerr<<" �ֲ� | ���:"<<pos->UniqSequenceNo
      <<" Ͷ����:"<<pos->InvestorID 
      <<" ��Լ:"<< pos->InstrumentID
      <<" ����:"<< pos->PosiDirection 
      <<" �ֲܳ�:"<<pos->Position
      <<" ���:"<< pos->TodayPosition
      <<" �ֲ�ӯ��:"<<pos->PositionProfit
      <<" ռ�ñ�֤��:"<<pos->UseMargin<<endl;
  }
  SetEvent(g_hEvent);
}
