// RCUserSpiImpl.h : interface of the CRiskSpi class
//

#ifndef RISK_RISKSPI_H_
#define RISK_RISKSPI_H_
#pragma once
#include "api/risk/public/FtdcRiskUserApi.h"

class CtpRiskSpi : public CShfeFtdcRiskUserSpi
{
public:

  CtpRiskSpi(CShfeFtdcRiskUserApi *p):pUserApi(p){};
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void OnFrontConnected();
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void OnFrontDisconnected(int nReason);
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void OnHeartBeatWarning(int nTimeLapse);	

	///����Ӧ��
	virtual void OnRspError(CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;
	
	///�ͻ��˽���������ͬ����ʼ
	virtual void OnRtnClientSGDataSyncStart(CShfeFtdcSettlementSessionField *pSettlementSession) ;	

	///��¼������Ӧ
	virtual void OnRspRiskUserLogin(CShfeFtdcRspRiskUserLoginField *pRspRiskUserLogin, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) ;
	
	///ʱ��ͬ��
	virtual void OnRtnTimeSync(CShfeFtdcCurrentTimeField *pCurrentTime);

	///��������Ϣ
	virtual void OnRtnExchange(CShfeFtdcExchangeField *pExchange);
	
	///��Ʒ��Ϣ
	virtual void OnRtnProduct(CShfeFtdcProductField *pProduct);

	///��Լ��Ϣ
	virtual void OnRtnInstrument(CShfeFtdcInstrumentField *pInstrument);

	///Ͷ������
	virtual void OnRtnInvestorGroup(CShfeFtdcInvestorGroupField *pInvestorGroup);

	///��֯�ܹ�����
	virtual void OnRtnDepartment(CShfeFtdcDepartmentField *pDepartment);

	///�ͻ��˽���������ͬ������
	virtual void OnRtnClientSGDataSyncEnd(CShfeFtdcSettlementSessionField *pSettlementSession) ;

	///��ѯͶ������ϢӦ��
	virtual void OnRspQryInvestorLinkMan(CShfeFtdcInvestorLinkManField *pInvestorLinkMan, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	///��ѯͶ������֯�ܹ�Ӧ��
	virtual void OnRspQryInvestorDepartment(CShfeFtdcInvestorDepartmentFlatField *pInvestorDepartmentFlat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	///����ı����ر�
	virtual void OnRtnSequencialOrder(CShfeFtdcSequencialOrderField *pSequencialOrder);

	///����ĳɽ��ر�
	virtual void OnRtnSequencialTrade(CShfeFtdcSequencialTradeField *pSequencialTrade);

	///����ĳֲֻر�
	virtual void OnRtnSequencialPosition(CShfeFtdcSequencialPositionField *pSequencialPosition);

	///����ľ��͹�˾�û��¼��ر�
	virtual void OnRtnSequencialBrokerUserEvent(CShfeFtdcSequencialBrokerUserEventField *pSequencialBrokerUserEvent);

	///����������ʽ�ر�
	virtual void OnRtnSeqPreRiskAccount(CShfeFtdcSeqPreRiskAccountField *pSeqPreRiskAccount);
	
	///Ͷ���ߵ����ʽ�ر�
	virtual void OnRtnRiskSyncAccount(CShfeFtdcRiskSyncAccountField *pRiskSyncAccount);

	///����ĳ����ر�
	virtual void OnRtnSeqDeposit(CShfeFtdcSeqDepositField *pSeqDeposit);

	///����Ľ��ױ���ر�
	virtual void OnRtnSeqTradingCode(CShfeFtdcSeqTradingCodeField *pSeqTradingCode);

	///����ķ���֪ͨ�ر�
	virtual void OnRtnSeqRiskNotifyB(CShfeFtdcSeqRiskNotifyBField *pSeqRiskNotifyB);

	///�����ҵ��֪ͨ�ر�
	virtual void OnRtnSeqBizNotice(CShfeFtdcSeqBizNoticeField *pSeqBizNotice);

	///����������֪ͨ
	virtual void OnRtnRiskDepthMarketData(CShfeFtdcDepthMarketDataField *pDepthMarketData);

	///��ѯ��������Ӧ��
	virtual void OnRspQryOrderStat(CShfeFtdcOrderStatField *pOrderStat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��ѯ�ɽ�����Ӧ��
	virtual void OnRspQryTradeStat(CShfeFtdcTradeStatField *pTradeStat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	///��ѯ�ֲ�����Ӧ��
	virtual void OnRspQryPositionStat(CShfeFtdcPositionStatField *pPositionStat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	///��Լ�ֱֲ���Ӧ��
	virtual void OnRspInstPositionRate(CShfeFtdcRspInstPositionRateField *pRspInstPositionRate, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��Ʒ�ֱֲ���Ӧ��
	virtual void OnRspProductPositionRate(CShfeFtdcRspProductPositionRateField *pRspProductPositionRate, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	
	///���͹�˾��Լ��֤����
	virtual void OnRtnInstrumentMarginRate(CShfeFtdcInstrumentMarginRateField *pInstrumentMarginRate);

	///���͹�˾��Լ��֤���ʵ���
	virtual void OnRtnInstrumentMarginRateAdjust(CShfeFtdcInstrumentMarginRateAdjustField *pInstrumentMarginRateAdjust);

	///��������֤����
	virtual void OnRtnExchangeMarginRate(CShfeFtdcExchangeMarginRateField *pExchangeMarginRate);

	///��������֤���ʵ���
	virtual void OnRtnExchangeMarginRateAdjust(CShfeFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust);

	///ɾ�����͹�˾��Լ��֤����
	virtual void OnRtnDelInstrumentMarginRate(CShfeFtdcInstrumentMarginRateField *pInstrumentMarginRate);	

	///ɾ�����͹�˾��Լ��֤���ʵ���
	virtual void OnRtnDelInstrumentMarginRateAdjust(CShfeFtdcInstrumentMarginRateAdjustField *pInstrumentMarginRateAdjust);
	
	///ɾ����������֤����
	virtual void OnRtnDelExchangeMarginRate(CShfeFtdcExchangeMarginRateField *pExchangeMarginRate);

	///ɾ����������֤���ʵ���
	virtual void OnRtnDelExchangeMarginRateAdjust(CShfeFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust);

	///��ǿƽ��������Ӧ
	virtual void OnRspRiskOrderInsert(CShfeFtdcInputOrderField *pInputOrder, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	//��Ԥ��������Ӧ
	virtual void OnRspRiskParkedOrderInsert(CShfeFtdcRiskParkedOrderField *pRiskParkedOrder, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	
	///������Ӧ
	virtual void OnRspRiskOrderAction(CShfeFtdcInputOrderActionField *pInputOrderAction, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		
	///��Ԥ����Ӧ
	virtual void OnRspRemoveRiskParkedOrder(CShfeFtdcRemoveRiskParkedOrderField *pRemoveRiskParkedOrder, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///��ѯϯλ�ʽ�Ӧ��
	virtual void OnRspRiskQryBrokerDeposit(CShfeFtdcQueryBrokerDepositField *pQueryBrokerDeposit, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

	///ϯλ�ʽ�ر�
	virtual void OnRtnBrokerDeposit(CShfeFtdcBrokerDepositField *pBrokerDeposit);

public:	
	//�����¼
	void ReqUserLogin( TShfeFtdcBrokerIDType	appId,
      TShfeFtdcUserIDType	userId,  TShfeFtdcPasswordType	passwd);
	//��������
	void ReqUserData();
	//��ǿƽ��
	void ReqRiskOrderInsert(TShfeFtdcSequenceNoType seqNo,
              TShfeFtdcPriceType price);
	//��ǿƽԤ��
	void ReqRiskParkedOrderInsert(CShfeFtdcSequencialPositionField *pData);
	//����
	void ReqRiskOrderAction(CShfeFtdcSequencialOrderField *pData);
	//��Ԥ��
	void ReqRemoveRiskParkedOrder(CShfeFtdcRemoveRiskParkedOrderField* pData);
	//ϯλ�ʽ��ѯ
	void ReqRiskQryBrokerDeposit(TShfeFtdcExchangeIDType	ExchangeID);
	//�Ƿ��յ��ɹ���Ӧ
	bool IsErrorRspInfo(CShfeFtdcRspInfoField *pRspInfo);
    
  void PrintAcounts();
  void PrintPositions();

private:
  CShfeFtdcRiskUserApi *pUserApi;
};



#endif
