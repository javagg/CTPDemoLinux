/////////////////////////////////////////////////////////////////////////
///@system ��һ��������ϵͳ���ռ��ϵͳ
///@company �Ϻ��ڻ���Ϣ�������޹�˾
///@file FtdcRiskUserApi.h
///@brief �����˿ͻ��˽ӿ�
///@history 
///@version v{main:6,max:7,server:v5.5.2}
///20070227	zhangjie		�������ļ�
/////////////////////////////////////////////////////////////////////////

#if !defined(_FTDCRISKUSERAPI_H)
#define _FTDCRISKUSERAPI_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "FtdcRiskUserApiStruct.h"
#define  ISLIB
#if defined(ISLIB) && defined(WIN32)
#ifdef LIB_RISKUSER_API_EXPORT
#define RISKUSER_API_EXPORT __declspec(dllexport)
#else
#define RISKUSER_API_EXPORT __declspec(dllimport)
//#pragma comment(lib, "riskuserapi.lib")
#endif
#else
#define RISKUSER_API_EXPORT 
#endif

class CShfeFtdcRiskUserSpi
{
public:
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	virtual void OnFrontConnected(){};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	virtual void OnFrontDisconnected(int nReason){};
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	virtual void OnHeartBeatWarning(int nTimeLapse){};
	

	///����Ӧ��
	virtual void OnRspError(CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ϯλ�ʽ�ر�
	virtual void OnRtnBrokerDeposit(CShfeFtdcBrokerDepositField *pBrokerDeposit) {};

	///�ͻ��˽���������ͬ����ʼ
	virtual void OnRtnClientSGDataSyncStart(CShfeFtdcSettlementSessionField *pSettlementSession) {};

	///�ͻ��˽���������ͬ������
	virtual void OnRtnClientSGDataSyncEnd(CShfeFtdcSettlementSessionField *pSettlementSession) {};

	///��¼������Ӧ
	virtual void OnRspRiskUserLogin(CShfeFtdcRspRiskUserLoginField *pRspRiskUserLogin, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Ʒ��Ϣ
	virtual void OnRtnProduct(CShfeFtdcProductField *pProduct) {};

	///��Լ��Ϣ
	virtual void OnRtnInstrument(CShfeFtdcInstrumentField *pInstrument) {};

	///��ѯ��������Ӧ��
	virtual void OnRspQryOrderStat(CShfeFtdcOrderStatField *pOrderStat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///�������Ļ�����Ϣ
	virtual void OnRtnExchange(CShfeFtdcExchangeField *pExchange) {};

	///����������֪ͨ
	virtual void OnRtnRiskDepthMarketData(CShfeFtdcDepthMarketDataField *pDepthMarketData) {};

	///ʱ��ͬ��
	virtual void OnRtnTimeSync(CShfeFtdcCurrentTimeField *pCurrentTime) {};

	///��Լ�ֱֲ���Ӧ��
	virtual void OnRspInstPositionRate(CShfeFtdcRspInstPositionRateField *pRspInstPositionRate, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��Ʒ�ֱֲ���Ӧ��
	virtual void OnRspProductPositionRate(CShfeFtdcRspProductPositionRateField *pRspProductPositionRate, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ������
	virtual void OnRtnInvestorGroup(CShfeFtdcInvestorGroupField *pInvestorGroup) {};

	///���͹�˾��Լ��֤���ʣ�ɾ������RtnDelInstrumentMarginRate
	virtual void OnRtnInstrumentMarginRate(CShfeFtdcInstrumentMarginRateField *pInstrumentMarginRate) {};

	///���͹�˾��Լ��֤���ʵ�����ɾ������RtnDelInstrumentMarginRateAdjust
	virtual void OnRtnInstrumentMarginRateAdjust(CShfeFtdcInstrumentMarginRateAdjustField *pInstrumentMarginRateAdjust) {};

	///��������֤���ʣ�ɾ������RtnDelRtnExchangeMarginRate
	virtual void OnRtnExchangeMarginRate(CShfeFtdcExchangeMarginRateField *pExchangeMarginRate) {};

	///��������֤���ʵ�����ɾ������RtnDelRtnExchangeMarginRateAdjust
	virtual void OnRtnExchangeMarginRateAdjust(CShfeFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust) {};

	///����ľ��͹�˾�û��¼��ر�����Ӧ��������ReqSubBrokerUserEvent
	virtual void OnRtnSequencialBrokerUserEvent(CShfeFtdcSequencialBrokerUserEventField *pSequencialBrokerUserEvent) {};

	///����ĳɽ��ر�����Ӧ��������ReqSubscribeTrade
	virtual void OnRtnSequencialTrade(CShfeFtdcSequencialTradeField *pSequencialTrade) {};

	///����ı����ر�����Ӧ��������ReqSubscribeOrder
	virtual void OnRtnSequencialOrder(CShfeFtdcSequencialOrderField *pSequencialOrder) {};

	///��ر���¼��������Ӧ
	virtual void OnRspRiskOrderInsert(CShfeFtdcInputOrderField *pInputOrder, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ر�������������Ӧ
	virtual void OnRspRiskOrderAction(CShfeFtdcInputOrderActionField *pInputOrderAction, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����ĳֲֻر�����Ӧ��������ReqSubscribePosition
	virtual void OnRtnSequencialPosition(CShfeFtdcSequencialPositionField *pSequencialPosition) {};

	///��֯�ܹ�
	virtual void OnRtnDepartment(CShfeFtdcDepartmentField *pDepartment) {};

	///���Ԥ��¼��Ӧ��
	virtual void OnRspRiskParkedOrderInsert(CShfeFtdcRiskParkedOrderField *pRiskParkedOrder, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ɾ��Ԥ����Ӧ
	virtual void OnRspRemoveRiskParkedOrder(CShfeFtdcRemoveRiskParkedOrderField *pRemoveRiskParkedOrder, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����ķ��Ԥ�񵥻ر�
	virtual void OnRtnSeqRiskParkedOrder(CShfeFtdcSeqRiskParkedOrderField *pSeqRiskParkedOrder) {};

	///����û������޸�Ӧ��
	virtual void OnRspRiskUserPasswordUpd(CShfeFtdcUserPasswordUpdateField *pUserPasswordUpdate, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����ĳ����ر�����Ӧ��������ReqSubSeqDeposit
	virtual void OnRtnSeqDeposit(CShfeFtdcSeqDepositField *pSeqDeposit) {};

	///����Ľ��ױ���ر�����Ӧ��������ReqSubSeqTradingCode
	virtual void OnRtnSeqTradingCode(CShfeFtdcSeqTradingCodeField *pSeqTradingCode) {};

	///Ͷ���߻�����Ϣ�ر���ֻͬ�����б仯���ݣ��������{ReqQryInvestorLinkMan,RspQryInvestorLinkMan}ʹ��
	virtual void OnRtnRiskInvestor(CShfeFtdcRiskSyncInvestorField *pRiskSyncInvestor) {};

	///��ѯͶ���ߺ���ϵ����ϢӦ��
	virtual void OnRspQryInvestorLinkMan(CShfeFtdcInvestorLinkManField *pInvestorLinkMan, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///ɾ�����͹�˾��Լ��֤����
	virtual void OnRtnDelInstrumentMarginRate(CShfeFtdcInstrumentMarginRateField *pInstrumentMarginRate) {};

	///ɾ�����͹�˾��Լ��֤���ʵ���
	virtual void OnRtnDelInstrumentMarginRateAdjust(CShfeFtdcInstrumentMarginRateAdjustField *pInstrumentMarginRateAdjust) {};

	///ɾ����������֤����
	virtual void OnRtnDelExchangeMarginRate(CShfeFtdcExchangeMarginRateField *pExchangeMarginRate) {};

	///ɾ����������֤���ʵ���
	virtual void OnRtnDelExchangeMarginRateAdjust(CShfeFtdcExchangeMarginRateAdjustField *pExchangeMarginRateAdjust) {};

	///��ѯ��֯�ܹ�Ͷ���߶�Ӧ��ϵӦ��
	virtual void OnRspQryInvestorDepartment(CShfeFtdcInvestorDepartmentFlatField *pInvestorDepartmentFlat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����Ͷ������֯�ܹ�Hashֵ
	virtual void OnRtnInvestorDepartmentHash(CShfeFtdcInvestorLinkManHashField *pInvestorLinkManHash) {};

	///Ͷ���ߵ����ʽ�ر��������ʽ�ʹ��{ReqSubPreRiskAccount,RtnSeqPreRiskAccount}
	virtual void OnRtnRiskSyncAccount(CShfeFtdcRiskSyncAccountField *pRiskSyncAccount) {};

	///����������ʽ�ر�����Ӧ��������ReqSubPreRiskAccount
	virtual void OnRtnSeqPreRiskAccount(CShfeFtdcSeqPreRiskAccountField *pSeqPreRiskAccount) {};

	///�����ҵ��֪ͨ�ر�
	virtual void OnRtnSeqBizNotice(CShfeFtdcSeqBizNoticeField *pSeqBizNotice) {};

	///��ѯϯλ�ʽ�Ӧ��
	virtual void OnRspRiskQryBrokerDeposit(CShfeFtdcQueryBrokerDepositField *pQueryBrokerDeposit, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///����ķ���֪ͨ�ر��汾B����Ӧ��������ReqSubSeqRiskNotifyB
	virtual void OnRtnSeqRiskNotifyB(CShfeFtdcSeqRiskNotifyBField *pSeqRiskNotifyB) {};

	///��ѯ�ֲ�����Ӧ��
	virtual void OnRspQryPositionStat(CShfeFtdcPositionStatField *pPositionStat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///��ѯ�ɽ�����Ӧ��
	virtual void OnRspQryTradeStat(CShfeFtdcTradeStatField *pTradeStat, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};

	///Ͷ���߼���ϵ����Ϣ��ϣֵ��ѯӦ��
	virtual void OnRspInvestorLinkManHash(CShfeFtdcInvestorLinkManHashField *pInvestorLinkManHash, CShfeFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {};
};

class RISKUSER_API_EXPORT CShfeFtdcRiskUserApi
{
public:
	///����RiskUserApi
	///@param pszFlowPath ����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	///@return ��������UserApi
	static CShfeFtdcRiskUserApi *CreateFtdcRiskUserApi(const char *pszFlowPath = "");
	
	///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	virtual void Release() = 0;
	
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	virtual void Init() = 0;
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	virtual int Join() = 0;
	
	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	virtual const char *GetTradingDay() = 0;
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	virtual void RegisterFront(char *pszFrontAddress) = 0;
	
	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	virtual void RegisterSpi(CShfeFtdcRiskUserSpi *pSpi) = 0;
	
	///�����г����顣
	///@param nTopicID �г���������  
	///@param nResumeType �г������ش���ʽ  
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:�ȴ��͵�ǰ�������,�ٴ��͵�¼���г����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	//virtual void SubscribeMarketDataTopic(int nTopicID, TE_RESUME_TYPE nResumeType) = 0;
	
	///��¼����
		// changelog
		// v4.3֮ǰ ReqRiskUserLogin.Version=0
		//	Ͷ������Ϣ�ӿ�: RtnInvestorSumInfo,ReqInvestorRangeSumInfo,RspInvestorRangeSumInfo,ReqInvestorRangeInfo,RspInvestorRangeInfo,RtnRiskInvestorInfo
		//	Ͷ������֯�ܹ��ӿ�: RtnInvestorDepartment
		//	�ʽ�ӿ�: RtnInvestorAccount
		//
		// v4.3	ReqRiskUserLogin.Version=1
		//	Ͷ������Ϣ�ӿ�: RtnInvestorLinkManHash,ReqQryInvestorLinkMan,RspQryInvestorLinkMan
		//	Ͷ������֯�ܹ��ӿ�: RtnInvestorDepartmentHash,ReqQryInvestorDepartment,RspQryInvestorDepartment
		//
		// v5.0 ReqRiskUserLogin.Version=2
		//	�ʽ�ӿ�: �����ʽ�(ReqSubPreRiskAccount,RtnSeqPreRiskAccount),�����ʽ�RtnRiskSyncAccount
		//
		// v5.4.0.1 ����ʹ���ֶ�ReqRiskUserLogin.Version�����κ�ֵ�Գ���û��Ӱ��
		//	��¼�ɹ����Զ�����RtnInvestorLinkManHash��InvestorLinkMan��MD5ֵͨ���ӿ�ReqInvestorLinkManHash��ѯ
	virtual int ReqRiskUserLogin(CShfeFtdcReqRiskUserLoginField *pReqRiskUserLogin, int nRequestID) = 0;

	///��ѯ������������
	virtual int ReqQryOrderStat(CShfeFtdcQryStatField *pQryStat, int nRequestID) = 0;

	///���ķ��ʵʱ����
	virtual int ReqSubRiskMarketData(CShfeFtdcSubMarketDataField *pSubMarketData, int SubMarketDataCnt, 
		int nRequestID) = 0;

	///�˶����ʵʱ����
	virtual int ReqUnSubRiskMarketData(CShfeFtdcSubMarketDataField *pSubMarketData, int nRequestID) = 0;

	///��Լ�ֱֲ�����ѯ
	virtual int ReqQryInstPositionRate(CShfeFtdcQryInstPositionRateField *pQryInstPositionRate, int QryInstPositionRateCnt, 
		int nRequestID) = 0;

	///��Ʒ�ֱֲ�����ѯ
	virtual int ReqQryProductPositionRate(CShfeFtdcQryProductPositionRateField *pQryProductPositionRate, int nRequestID) = 0;

	///��������ĳɽ����ɸ����ѽ��յ�RtnSequencialTrade������UniqSequenceNo��ʵ������
	virtual int ReqSubscribeTrade(CShfeFtdcNotifySequenceField *pNotifySequence, int nRequestID) = 0;

	///��������ĳɽ����ɸ����ѽ��յ�RtnSequencialOrder������UniqSequenceNo��ʵ������
	virtual int ReqSubscribeOrder(CShfeFtdcNotifySequenceField *pNotifySequence, int nRequestID) = 0;

	///��������ľ��͹�˾�û��¼����ɸ����ѽ��յ�RtnSequencialBrokerUserEvent������UniqSequenceNo��ʵ������
	virtual int ReqSubBrokerUserEvent(CShfeFtdcNotifySequenceField *pNotifySequence, int nRequestID) = 0;

	///��ر���¼������
	virtual int ReqRiskOrderInsert(CShfeFtdcRiskForceCloseOrderField *pRiskForceCloseOrder, int nRequestID) = 0;

	///��ر�����������
	virtual int ReqRiskOrderAction(CShfeFtdcInputOrderActionField *pInputOrderAction, int nRequestID) = 0;

	///��������ĳֲ֣��ɸ����ѽ��յ�RtnSequencialPosition������UniqSequenceNo��ʵ������
	virtual int ReqSubscribePosition(CShfeFtdcNotifySequenceField *pNotifySequence, int nRequestID) = 0;

	///���Ԥ��¼������
	virtual int ReqRiskParkedOrderInsert(CShfeFtdcRiskParkedOrderField *pRiskParkedOrder, int nRequestID) = 0;

	///����ɾ��Ԥ��
	virtual int ReqRemoveRiskParkedOrder(CShfeFtdcRemoveRiskParkedOrderField *pRemoveRiskParkedOrder, int nRequestID) = 0;

	///��������ķ��Ԥ��
	virtual int ReqSubRiskParkedOrder(CShfeFtdcNotifySequenceField *pNotifySequence, int nRequestID) = 0;

	///����û������޸�����
	virtual int ReqRiskUserPasswordUpd(CShfeFtdcUserPasswordUpdateField *pUserPasswordUpdate, int nRequestID) = 0;

	///��������ĳ���𣬿ɸ����ѽ��յ�RtnSeqDeposit������UniqSequenceNo��ʵ������
	virtual int ReqSubSeqDeposit(CShfeFtdcRiskNtfSequenceField *pRiskNtfSequence, int nRequestID) = 0;

	///��������Ľ��ױ��룬�ɸ����ѽ��յ�RtnSeqTradingCode������UniqSequenceNo��ʵ������
	virtual int ReqSubSeqTradingCode(CShfeFtdcRiskNtfSequenceField *pRiskNtfSequence, int nRequestID) = 0;

	///��ѯͶ���ߺ���ϵ����Ϣ����
		// Ͷ������Ϣ�������ܴ��뾡������һ�β�ѯ����Ͷ���ߵ�Ͷ������Ϣ��
		// ��ȷʵ��Ҫ����Ͷ������Ϣ���ݣ���ǿ�ҽ����ڱ��ر������ݣ�Ȼ��ÿ��ֻ��ѯ�б仯��Ͷ������Ϣ���������£�
		// ��¼�ɹ���������ReqInvestorLinkManHash(���������ע��)��RspInvestorLinkManHash�ὫͶ������Ϣ��MD5ֵ�ֶ��Ͷ��������[InvestorIDBeg,InvestorIDEnd]���أ�
		// ��ÿ�����䣬�뱾����ͬ�����Ͷ������Ϣ��MD5ֵ���бȽϣ������һ�£�������������Ͷ������Ϣ��
		// ���齫������Ҫ�����Ͷ�����������һ�������͡�
		// ��һ��Ͷ������Ϣfield���µ�md5��˳��
		// md5.update((const char *)field.Address, strlen((const char *)field.Address));
		// md5.update((const char *)field.BrokerID, strlen((const char *)field.BrokerID));
		// md5.update((const char *)field.IdentifiedCardNo, strlen((const char *)field.IdentifiedCardNo));
		// md5.update((const char *)field.InvestorGroupID, strlen((const char *)field.InvestorGroupID));
		// md5.update((const char *)field.InvestorID, strlen((const char *)field.InvestorID));
		// md5.update((const char *)field.InvestorName, strlen((const char *)field.InvestorName));
		// md5.update((const char *)field.Telephone, strlen((const char *)field.Telephone));
		// md5.update((const char *)field.OrderManIdentifiedCardNo, strlen((const char *)field.OrderManIdentifiedCardNo));
		// md5.update((const char *)field.OrderManPersonName, strlen((const char *)field.OrderManPersonName));
		// md5.update((const char *)field.OrderManTelephone, strlen((const char *)field.OrderManTelephone));
		// md5.update((const char *)field.OrderManAddress, strlen((const char *)field.OrderManAddress));
		// md5.update((const char *)field.OrderManZipCode, strlen((const char *)field.OrderManZipCode));
		// md5.update((const char *)field.FundManIdentifiedCardNo, strlen((const char *)field.FundManIdentifiedCardNo));
		// md5.update((const char *)field.FundManPersonName, strlen((const char *)field.FundManPersonName));
		// md5.update((const char *)field.FundManTelephone, strlen((const char *)field.FundManTelephone));
		// md5.update((const char *)field.FundManAddress, strlen((const char *)field.FundManAddress));
		// md5.update((const char *)field.FundManZipCode, strlen((const char *)field.FundManZipCode));
		// md5.update((const char *)field.OpenManIdentifiedCardNo, strlen((const char *)field.OpenManIdentifiedCardNo));
		// md5.update((const char *)field.OpenManPersonName, strlen((const char *)field.OpenManPersonName));
		// md5.update((const char *)field.OpenManTelephone, strlen((const char *)field.OpenManTelephone));
		// md5.update((const char *)field.OpenManAddress, strlen((const char *)field.OpenManAddress));
		// md5.update((const char *)field.OpenManZipCode, strlen((const char *)field.OpenManZipCode));
		// md5.update((const char *)field.SettlementManIdentifiedCardNo, strlen((const char *)field.SettlementManIdentifiedCardNo));
		// md5.update((const char *)field.SettlementManPersonName, strlen((const char *)field.SettlementManPersonName));
		// md5.update((const char *)field.SettlementManTelephone, strlen((const char *)field.SettlementManTelephone));
		// md5.update((const char *)field.SettlementManAddress, strlen((const char *)field.SettlementManAddress));
		// md5.update((const char *)field.SettlementManZipCode, strlen((const char *)field.SettlementManZipCode));
		// md5.update((const char *)field.OpenDate, strlen((const char *)field.OpenDate));
		// md5.update((const char *)field.Mobile, strlen((const char *)field.Mobile));
		// md5.update((const char *)field.EMail, strlen((const char *)field.EMail));
		// if (field.IsActive == 0) md5.update(�ַ�0);
		// else md5.update(�ַ�1);
		// md5.update((const char *)field.PhoneCountryCode, strlen((const char *)field.PhoneCountryCode));
		// md5.update((const char *)field.PhoneAreaCode, strlen((const char *)field.PhoneAreaCode));
		// md5.update((const char *)field.OpenPhoneCountryCode, strlen((const char *)field.OpenPhoneCountryCode));
		// md5.update((const char *)field.OpenPhoneAreaCode, strlen((const char *)field.OpenPhoneAreaCode));
		// md5.update((const char *)field.OrderPhoneCountryCode, strlen((const char *)field.OrderPhoneCountryCode));
		// md5.update((const char *)field.OrderPhoneAreaCode, strlen((const char *)field.OrderPhoneAreaCode));
		// md5.update((const char *)field.FundPhoneCountryCode, strlen((const char *)field.FundPhoneCountryCode));
		// md5.update((const char *)field.FundPhoneAreaCode, strlen((const char *)field.FundPhoneAreaCode));
		// md5.update((const char *)field.SettlePhoneCountryCode, strlen((const char *)field.SettlePhoneCountryCode));
		// md5.update((const char *)field.SettlePhoneAreaCode, strlen((const char *)field.SettlePhoneAreaCode));
	virtual int ReqQryInvestorLinkMan(CShfeFtdcInvestorIDRangeField *pInvestorIDRange, int InvestorIDRangeCnt, 
		int nRequestID) = 0;
	
	///��ѯ��֯�ܹ�Ͷ���߶�Ӧ��ϵ����ʹ�÷�������ReqQryInvestorLinkMan
	virtual int ReqQryInvestorDepartment(CShfeFtdcInvestorIDRangeField *pInvestorIDRange, int InvestorIDRangeCnt, 
		int nRequestID) = 0;

	///��������������ʽ𣬿ɸ����ѽ��յ�RtnSeqPreRiskAccount������UniqSequenceNo��ʵ�������������ʽ�ʹ��RtnRiskSyncAccount
	virtual int ReqSubPreRiskAccount(CShfeFtdcRiskNtfSequenceField *pRiskNtfSequence, int nRequestID) = 0;

	///����������������
	virtual int ReqSubSeqData(CShfeFtdcRiskNtfSequenceField *pRiskNtfSequence, int nRequestID) = 0;

	///��ѯϯλ�ʽ�����
	virtual int ReqRiskQryBrokerDeposit(CShfeFtdcQueryBrokerDepositField *pQueryBrokerDeposit, int nRequestID) = 0;

	///��������ķ���֪ͨ�汾B���ɸ����ѽ��յ�RtnSeqRiskNotifyB������UniqSequenceNo��ʵ������
	virtual int ReqSubSeqRiskNotifyB(CShfeFtdcRiskNtfSequenceField *pRiskNtfSequence, int nRequestID) = 0;

	///��ѯ�ֲ���������
	virtual int ReqQryPositionStat(CShfeFtdcQryStatField *pQryStat, int nRequestID) = 0;

	///��ѯ�ɽ���������
	virtual int ReqQryTradeStat(CShfeFtdcQryStatField *pQryStat, int nRequestID) = 0;

	///Ͷ���߼���ϵ����Ϣ��ϣֵ��ѯ����
		// InvestorIDBeg    ��ʼͶ���ߴ��룬Ϊ�ձ�ʾ�û�Ȩ���µ���СͶ���ߴ���
		// InvestorIdEnd    ����Ͷ���ߴ��룬Ϊ�ձ�ʾ�û�Ȩ���µ����Ͷ���ߴ���
		// ���InvestorIDBeg��InvestorIDEnd��Ϊ�գ�����������Զ��ֶ�����䷵�ع�ϣֵ������ֻ������������һ����ϣֵ
	virtual int ReqInvestorLinkManHash(CShfeFtdcInvestorIDRangeField *pInvestorIDRange, int nRequestID) = 0;

protected:
	~CShfeFtdcRiskUserApi(){};
};

#endif
