
/////////////////////////////////////////////////////////////////////////
///@system ��һ��������ϵͳ
///@company �Ϻ��ڻ���Ϣ�������޹�˾
///@file FtdcStruct.h
///@brief �����˿ͻ��˽ӿ�ʹ�õ�ҵ�����ݽṹ
///@history 
///20070227	zhangjie		�������ļ�
/////////////////////////////////////////////////////////////////////////

#if !defined(_FTDCRISKSTRUCT_H)
#define _FTDCRISKSTRUCT_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "string.h"
#include "math.h"
#include "FtdcRiskUserApiDataType.h"

#ifndef SMALL_DOUBLE
#define SMALL_DOUBLE	0.0000001
#endif

#ifndef EQUALDOUBLE
#define EQUALDOUBLE(x,y)	(fabs((x)-(y)) < SMALL_DOUBLE)
#endif


///��Ϣ�ַ�
struct CShfeFtdcDisseminationField
{
  ///����ϵ�к�
  TShfeFtdcSequenceSeriesType	SequenceSeries;
  ///���к�
  TShfeFtdcSequenceNoType	SequenceNo;

  bool operator==(const CShfeFtdcDisseminationField &ct) const
  {
    bool ret = true;
    ret = ret && (SequenceSeries == ct.SequenceSeries);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;

    return ret;
  }
};

///�û���¼����
struct CShfeFtdcReqUserLoginField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����
  TShfeFtdcPasswordType	Password;
  ///�û��˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	UserProductInfo;
  ///�ӿڶ˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	InterfaceProductInfo;
  ///Э����Ϣ
  TShfeFtdcProtocolInfoType	ProtocolInfo;

  bool operator==(const CShfeFtdcReqUserLoginField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserProductInfo, ct.UserProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InterfaceProductInfo, ct.InterfaceProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProtocolInfo, ct.ProtocolInfo) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�û���¼Ӧ��
struct CShfeFtdcRspUserLoginField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///��¼�ɹ�ʱ��
  TShfeFtdcTimeType	LoginTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����ϵͳ����
  TShfeFtdcSystemNameType	SystemName;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///��󱨵�����
  TShfeFtdcOrderRefType	MaxOrderRef;
  ///������ʱ��
  TShfeFtdcTimeType	SHFETime;
  ///������ʱ��
  TShfeFtdcTimeType	DCETime;
  ///֣����ʱ��
  TShfeFtdcTimeType	CZCETime;
  ///�н���ʱ��
  TShfeFtdcTimeType	FFEXTime;

  bool operator==(const CShfeFtdcRspUserLoginField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LoginTime, ct.LoginTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SystemName, ct.SystemName) == 0);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(MaxOrderRef, ct.MaxOrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SHFETime, ct.SHFETime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DCETime, ct.DCETime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CZCETime, ct.CZCETime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FFEXTime, ct.FFEXTime) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�û��ǳ�����
struct CShfeFtdcUserLogoutField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcUserLogoutField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ǿ�ƽ���Ա�˳�
struct CShfeFtdcForceUserLogoutField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcForceUserLogoutField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ת�ʱ���ͷ
struct CShfeFtdcTransferHeaderField
{
  ///�汾�ţ�������1.0
  TShfeFtdcVersionType	Version;
  ///���״��룬����
  TShfeFtdcTradeCodeType	TradeCode;
  ///�������ڣ������ʽ��yyyymmdd
  TShfeFtdcTradeDateType	TradeDate;
  ///����ʱ�䣬�����ʽ��hhmmss
  TShfeFtdcTradeTimeType	TradeTime;
  ///������ˮ�ţ�N/A
  TShfeFtdcTradeSerialType	TradeSerial;
  ///�ڻ���˾���룬����
  TShfeFtdcFutureIDType	FutureID;
  ///���д��룬���ݲ�ѯ���еõ�������
  TShfeFtdcBankIDType	BankID;
  ///���з����Ĵ��룬���ݲ�ѯ���еõ�������
  TShfeFtdcBankBrchIDType	BankBrchID;
  ///����Ա��N/A
  TShfeFtdcOperNoType	OperNo;
  ///�����豸���ͣ�N/A
  TShfeFtdcDeviceIDType	DeviceID;
  ///��¼����N/A
  TShfeFtdcRecordNumType	RecordNum;
  ///�Ự��ţ�N/A
  TShfeFtdcSessionIDType	SessionID;
  ///�����ţ�N/A
  TShfeFtdcRequestIDType	RequestID;

  bool operator==(const CShfeFtdcTransferHeaderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(Version, ct.Version) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeCode, ct.TradeCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeDate, ct.TradeDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTime, ct.TradeTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeSerial, ct.TradeSerial) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureID, ct.FutureID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankID, ct.BankID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankBrchID, ct.BankBrchID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OperNo, ct.OperNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DeviceID, ct.DeviceID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(RecordNum, ct.RecordNum) == 0);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;

    return ret;
  }
};

///�����ʽ�ת�ڻ�����TradeCode=202001
struct CShfeFtdcTransferBankToFutureReqField
{
  ///�ڻ��ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;
  ///�����־
  TShfeFtdcFuturePwdFlagType	FuturePwdFlag;
  ///����
  TShfeFtdcFutureAccPwdType	FutureAccPwd;
  ///ת�˽��
  TShfeFtdcMoneyType	TradeAmt;
  ///�ͻ�������
  TShfeFtdcMoneyType	CustFee;
  ///���֣�RMB-����� USD-��Բ HKD-��Ԫ
  TShfeFtdcCurrencyCodeType	CurrencyCode;

  bool operator==(const CShfeFtdcTransferBankToFutureReqField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (FuturePwdFlag == ct.FuturePwdFlag);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccPwd, ct.FutureAccPwd) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TradeAmt, ct.TradeAmt));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CustFee, ct.CustFee));
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�����ʽ�ת�ڻ�������Ӧ
struct CShfeFtdcTransferBankToFutureRspField
{
  ///��Ӧ����
  TShfeFtdcRetCodeType	RetCode;
  ///��Ӧ��Ϣ
  TShfeFtdcRetInfoType	RetInfo;
  ///�ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;
  ///ת�ʽ��
  TShfeFtdcMoneyType	TradeAmt;
  ///Ӧ�տͻ�������
  TShfeFtdcMoneyType	CustFee;
  ///����
  TShfeFtdcCurrencyCodeType	CurrencyCode;

  bool operator==(const CShfeFtdcTransferBankToFutureRspField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(RetCode, ct.RetCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(RetInfo, ct.RetInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TradeAmt, ct.TradeAmt));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CustFee, ct.CustFee));
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ڻ��ʽ�ת��������TradeCode=202002
struct CShfeFtdcTransferFutureToBankReqField
{
  ///�ڻ��ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;
  ///�����־
  TShfeFtdcFuturePwdFlagType	FuturePwdFlag;
  ///����
  TShfeFtdcFutureAccPwdType	FutureAccPwd;
  ///ת�˽��
  TShfeFtdcMoneyType	TradeAmt;
  ///�ͻ�������
  TShfeFtdcMoneyType	CustFee;
  ///���֣�RMB-����� USD-��Բ HKD-��Ԫ
  TShfeFtdcCurrencyCodeType	CurrencyCode;

  bool operator==(const CShfeFtdcTransferFutureToBankReqField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (FuturePwdFlag == ct.FuturePwdFlag);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccPwd, ct.FutureAccPwd) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TradeAmt, ct.TradeAmt));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CustFee, ct.CustFee));
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ڻ��ʽ�ת����������Ӧ
struct CShfeFtdcTransferFutureToBankRspField
{
  ///��Ӧ����
  TShfeFtdcRetCodeType	RetCode;
  ///��Ӧ��Ϣ
  TShfeFtdcRetInfoType	RetInfo;
  ///�ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;
  ///ת�ʽ��
  TShfeFtdcMoneyType	TradeAmt;
  ///Ӧ�տͻ�������
  TShfeFtdcMoneyType	CustFee;
  ///����
  TShfeFtdcCurrencyCodeType	CurrencyCode;

  bool operator==(const CShfeFtdcTransferFutureToBankRspField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(RetCode, ct.RetCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(RetInfo, ct.RetInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TradeAmt, ct.TradeAmt));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CustFee, ct.CustFee));
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�����ʽ�����TradeCode=204002
struct CShfeFtdcTransferQryBankReqField
{
  ///�ڻ��ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;
  ///�����־
  TShfeFtdcFuturePwdFlagType	FuturePwdFlag;
  ///����
  TShfeFtdcFutureAccPwdType	FutureAccPwd;
  ///���֣�RMB-����� USD-��Բ HKD-��Ԫ
  TShfeFtdcCurrencyCodeType	CurrencyCode;

  bool operator==(const CShfeFtdcTransferQryBankReqField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (FuturePwdFlag == ct.FuturePwdFlag);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccPwd, ct.FutureAccPwd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�����ʽ�������Ӧ
struct CShfeFtdcTransferQryBankRspField
{
  ///��Ӧ����
  TShfeFtdcRetCodeType	RetCode;
  ///��Ӧ��Ϣ
  TShfeFtdcRetInfoType	RetInfo;
  ///�ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;
  ///�������
  TShfeFtdcMoneyType	TradeAmt;
  ///���п������
  TShfeFtdcMoneyType	UseAmt;
  ///���п�ȡ���
  TShfeFtdcMoneyType	FetchAmt;
  ///����
  TShfeFtdcCurrencyCodeType	CurrencyCode;

  bool operator==(const CShfeFtdcTransferQryBankRspField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(RetCode, ct.RetCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(RetInfo, ct.RetInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TradeAmt, ct.TradeAmt));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UseAmt, ct.UseAmt));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FetchAmt, ct.FetchAmt));
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���н�����ϸ����TradeCode=204999
struct CShfeFtdcTransferQryDetailReqField
{
  ///�ڻ��ʽ��˻�
  TShfeFtdcAccountIDType	FutureAccount;

  bool operator==(const CShfeFtdcTransferQryDetailReqField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���н�����ϸ������Ӧ
struct CShfeFtdcTransferQryDetailRspField
{
  ///��������
  TShfeFtdcDateType	TradeDate;
  ///����ʱ��
  TShfeFtdcTradeTimeType	TradeTime;
  ///���״���
  TShfeFtdcTradeCodeType	TradeCode;
  ///�ڻ���ˮ��
  TShfeFtdcTradeSerialNoType	FutureSerial;
  ///�ڻ���˾����
  TShfeFtdcFutureIDType	FutureID;
  ///�ʽ��ʺ�
  TShfeFtdcFutureAccountType	FutureAccount;
  ///������ˮ��
  TShfeFtdcTradeSerialNoType	BankSerial;
  ///���д���
  TShfeFtdcBankIDType	BankID;
  ///���з����Ĵ���
  TShfeFtdcBankBrchIDType	BankBrchID;
  ///�����˺�
  TShfeFtdcBankAccountType	BankAccount;
  ///֤������
  TShfeFtdcCertCodeType	CertCode;
  ///���Ҵ���
  TShfeFtdcCurrencyCodeType	CurrencyCode;
  ///�������
  TShfeFtdcMoneyType	TxAmount;
  ///��Ч��־
  TShfeFtdcTransferValidFlagType	Flag;

  bool operator==(const CShfeFtdcTransferQryDetailRspField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradeDate, ct.TradeDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTime, ct.TradeTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeCode, ct.TradeCode) == 0);
    if (!ret) return ret;
    ret = ret && (FutureSerial == ct.FutureSerial);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureID, ct.FutureID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FutureAccount, ct.FutureAccount) == 0);
    if (!ret) return ret;
    ret = ret && (BankSerial == ct.BankSerial);
    if (!ret) return ret;
    ret = ret && (strcmp(BankID, ct.BankID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankBrchID, ct.BankBrchID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankAccount, ct.BankAccount) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CertCode, ct.CertCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CurrencyCode, ct.CurrencyCode) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TxAmount, ct.TxAmount));
    if (!ret) return ret;
    ret = ret && (Flag == ct.Flag);
    if (!ret) return ret;

    return ret;
  }
};

///��Ӧ��Ϣ
struct CShfeFtdcRspInfoField
{
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcRspInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///������
struct CShfeFtdcExchangeField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///����������
  TShfeFtdcExchangeNameType	ExchangeName;
  ///����������
  TShfeFtdcExchangePropertyType	ExchangeProperty;

  bool operator==(const CShfeFtdcExchangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeName, ct.ExchangeName) == 0);
    if (!ret) return ret;
    ret = ret && (ExchangeProperty == ct.ExchangeProperty);
    if (!ret) return ret;

    return ret;
  }
};

///��Ʒ
struct CShfeFtdcProductField
{
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///��Ʒ����
  TShfeFtdcProductNameType	ProductName;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ʒ����
  TShfeFtdcProductClassType	ProductClass;
  ///��Լ��������
  TShfeFtdcVolumeMultipleType	VolumeMultiple;
  ///��С�䶯��λ
  TShfeFtdcPriceType	PriceTick;
  ///�м۵�����µ���
  TShfeFtdcVolumeType	MaxMarketOrderVolume;
  ///�м۵���С�µ���
  TShfeFtdcVolumeType	MinMarketOrderVolume;
  ///�޼۵�����µ���
  TShfeFtdcVolumeType	MaxLimitOrderVolume;
  ///�޼۵���С�µ���
  TShfeFtdcVolumeType	MinLimitOrderVolume;
  ///�ֲ�����
  TShfeFtdcPositionTypeType	PositionType;
  ///�ֲ���������
  TShfeFtdcPositionDateTypeType	PositionDateType;

  bool operator==(const CShfeFtdcProductField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductName, ct.ProductName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (ProductClass == ct.ProductClass);
    if (!ret) return ret;
    ret = ret && (VolumeMultiple == ct.VolumeMultiple);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PriceTick, ct.PriceTick));
    if (!ret) return ret;
    ret = ret && (MaxMarketOrderVolume == ct.MaxMarketOrderVolume);
    if (!ret) return ret;
    ret = ret && (MinMarketOrderVolume == ct.MinMarketOrderVolume);
    if (!ret) return ret;
    ret = ret && (MaxLimitOrderVolume == ct.MaxLimitOrderVolume);
    if (!ret) return ret;
    ret = ret && (MinLimitOrderVolume == ct.MinLimitOrderVolume);
    if (!ret) return ret;
    ret = ret && (PositionType == ct.PositionType);
    if (!ret) return ret;
    ret = ret && (PositionDateType == ct.PositionDateType);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ
struct CShfeFtdcInstrumentField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Լ����
  TShfeFtdcInstrumentNameType	InstrumentName;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///��Ʒ����
  TShfeFtdcProductClassType	ProductClass;
  ///�������
  TShfeFtdcYearType	DeliveryYear;
  ///������
  TShfeFtdcMonthType	DeliveryMonth;
  ///�м۵�����µ���
  TShfeFtdcVolumeType	MaxMarketOrderVolume;
  ///�м۵���С�µ���
  TShfeFtdcVolumeType	MinMarketOrderVolume;
  ///�޼۵�����µ���
  TShfeFtdcVolumeType	MaxLimitOrderVolume;
  ///�޼۵���С�µ���
  TShfeFtdcVolumeType	MinLimitOrderVolume;
  ///��Լ��������
  TShfeFtdcVolumeMultipleType	VolumeMultiple;
  ///��С�䶯��λ
  TShfeFtdcPriceType	PriceTick;
  ///������
  TShfeFtdcDateType	CreateDate;
  ///������
  TShfeFtdcDateType	OpenDate;
  ///������
  TShfeFtdcDateType	ExpireDate;
  ///��ʼ������
  TShfeFtdcDateType	StartDelivDate;
  ///����������
  TShfeFtdcDateType	EndDelivDate;
  ///��Լ��������״̬
  TShfeFtdcInstLifePhaseType	InstLifePhase;
  ///��ǰ�Ƿ���
  TShfeFtdcBoolType	IsTrading;
  ///�ֲ�����
  TShfeFtdcPositionTypeType	PositionType;
  ///�ֲ���������
  TShfeFtdcPositionDateTypeType	PositionDateType;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatio;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatio;

  bool operator==(const CShfeFtdcInstrumentField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentName, ct.InstrumentName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (ProductClass == ct.ProductClass);
    if (!ret) return ret;
    ret = ret && (DeliveryYear == ct.DeliveryYear);
    if (!ret) return ret;
    ret = ret && (DeliveryMonth == ct.DeliveryMonth);
    if (!ret) return ret;
    ret = ret && (MaxMarketOrderVolume == ct.MaxMarketOrderVolume);
    if (!ret) return ret;
    ret = ret && (MinMarketOrderVolume == ct.MinMarketOrderVolume);
    if (!ret) return ret;
    ret = ret && (MaxLimitOrderVolume == ct.MaxLimitOrderVolume);
    if (!ret) return ret;
    ret = ret && (MinLimitOrderVolume == ct.MinLimitOrderVolume);
    if (!ret) return ret;
    ret = ret && (VolumeMultiple == ct.VolumeMultiple);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PriceTick, ct.PriceTick));
    if (!ret) return ret;
    ret = ret && (strcmp(CreateDate, ct.CreateDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExpireDate, ct.ExpireDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StartDelivDate, ct.StartDelivDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EndDelivDate, ct.EndDelivDate) == 0);
    if (!ret) return ret;
    ret = ret && (InstLifePhase == ct.InstLifePhase);
    if (!ret) return ret;
    ret = ret && (IsTrading == ct.IsTrading);
    if (!ret) return ret;
    ret = ret && (PositionType == ct.PositionType);
    if (!ret) return ret;
    ret = ret && (PositionDateType == ct.PositionDateType);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatio, ct.LongMarginRatio));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatio, ct.ShortMarginRatio));
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾
struct CShfeFtdcBrokerField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///���͹�˾���
  TShfeFtdcBrokerAbbrType	BrokerAbbr;
  ///���͹�˾����
  TShfeFtdcBrokerNameType	BrokerName;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;

  bool operator==(const CShfeFtdcBrokerField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerAbbr, ct.BrokerAbbr) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerName, ct.BrokerName) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;

    return ret;
  }
};

///����������Ա
struct CShfeFtdcTraderField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����
  TShfeFtdcPasswordType	Password;
  ///��װ����
  TShfeFtdcInstallCountType	InstallCount;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcTraderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (InstallCount == ct.InstallCount);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ����
struct CShfeFtdcInvestorField
{
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ��������
  TShfeFtdcPartyNameType	InvestorName;
  ///֤������
  TShfeFtdcIdCardTypeType	IdentifiedCardType;
  ///֤������
  TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///��ϵ�绰
  TShfeFtdcTelephoneType	Telephone;
  ///ͨѶ��ַ
  TShfeFtdcAddressType	Address;
  ///��������
  TShfeFtdcDateType	OpenDate;
  ///�ֻ�
  TShfeFtdcMobileType	Mobile;
  ///��������ģ�����
  TShfeFtdcInvestorIDType	CommModelID;

  bool operator==(const CShfeFtdcInvestorField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorName, ct.InvestorName) == 0);
    if (!ret) return ret;
    ret = ret && (IdentifiedCardType == ct.IdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(IdentifiedCardNo, ct.IdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (strcmp(Telephone, ct.Telephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Address, ct.Address) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Mobile, ct.Mobile) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CommModelID, ct.CommModelID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���ױ���
struct CShfeFtdcTradingCodeField
{
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///���ױ�������
  TShfeFtdcClientIDTypeType	ClientIDType;

  bool operator==(const CShfeFtdcTradingCodeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (ClientIDType == ct.ClientIDType);
    if (!ret) return ret;

    return ret;
  }
};

///��Ա����;��͹�˾������ձ�
struct CShfeFtdcPartBrokerField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;

  bool operator==(const CShfeFtdcPartBrokerField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;

    return ret;
  }
};

///�����û�
struct CShfeFtdcSuperUserField
{
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�û�����
  TShfeFtdcUserNameType	UserName;
  ///����
  TShfeFtdcPasswordType	Password;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;

  bool operator==(const CShfeFtdcSuperUserField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserName, ct.UserName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;

    return ret;
  }
};

///�����û�����Ȩ��
struct CShfeFtdcSuperUserFunctionField
{
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///���ܴ���
  TShfeFtdcFunctionCodeType	FunctionCode;

  bool operator==(const CShfeFtdcSuperUserFunctionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (FunctionCode == ct.FunctionCode);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ������
struct CShfeFtdcInvestorGroupField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ���߷�������
  TShfeFtdcInvestorGroupNameType	InvestorGroupName;

  bool operator==(const CShfeFtdcInvestorGroupField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupName, ct.InvestorGroupName) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ʽ��˻�
struct CShfeFtdcTradingAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///�ϴ���Ѻ���
  TShfeFtdcMoneyType	PreMortgage;
  ///�ϴ����ö��
  TShfeFtdcMoneyType	PreCredit;
  ///�ϴδ���
  TShfeFtdcMoneyType	PreDeposit;
  ///�ϴν���׼����
  TShfeFtdcMoneyType	PreBalance;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///��Ϣ����
  TShfeFtdcMoneyType	InterestBase;
  ///��Ϣ����
  TShfeFtdcMoneyType	Interest;
  ///�����
  TShfeFtdcMoneyType	Deposit;
  ///������
  TShfeFtdcMoneyType	Withdraw;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;
  ///������ʽ�
  TShfeFtdcMoneyType	FrozenCash;
  ///�����������
  TShfeFtdcMoneyType	FrozenCommission;
  ///��ǰ��֤���ܶ�
  TShfeFtdcMoneyType	CurrMargin;
  ///�ʽ���
  TShfeFtdcMoneyType	CashIn;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///�ڻ�����׼����
  TShfeFtdcMoneyType	Balance;
  ///�����ʽ�
  TShfeFtdcMoneyType	Available;
  ///��ȡ�ʽ�
  TShfeFtdcMoneyType	WithdrawQuota;
  ///����׼����
  TShfeFtdcMoneyType	Reserve;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���ö��
  TShfeFtdcMoneyType	Credit;
  ///��Ѻ���
  TShfeFtdcMoneyType	Mortgage;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///Ͷ���߽��֤��
  TShfeFtdcMoneyType	DeliveryMargin;
  ///���������֤��
  TShfeFtdcMoneyType	ExchangeDeliveryMargin;

  bool operator==(const CShfeFtdcTradingAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMortgage, ct.PreMortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreCredit, ct.PreCredit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDeposit, ct.PreDeposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreBalance, ct.PreBalance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(InterestBase, ct.InterestBase));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Interest, ct.Interest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Deposit, ct.Deposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Withdraw, ct.Withdraw));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCash, ct.FrozenCash));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrMargin, ct.CurrMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CashIn, ct.CashIn));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance, ct.Balance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Available, ct.Available));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(WithdrawQuota, ct.WithdrawQuota));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Reserve, ct.Reserve));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Credit, ct.Credit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Mortgage, ct.Mortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(DeliveryMargin, ct.DeliveryMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeDeliveryMargin, ct.ExchangeDeliveryMargin));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ֲ߳�
struct CShfeFtdcInvestorPositionField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֲֶ�շ���
  TShfeFtdcPosiDirectionType	PosiDirection;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�ֲ�����
  TShfeFtdcPositionDateType	PositionDate;
  ///���ճֲ�
  TShfeFtdcVolumeType	YdPosition;
  ///���ճֲ�
  TShfeFtdcVolumeType	Position;
  ///��ͷ����
  TShfeFtdcVolumeType	LongFrozen;
  ///��ͷ����
  TShfeFtdcVolumeType	ShortFrozen;
  ///���ֶ�����
  TShfeFtdcMoneyType	LongFrozenAmount;
  ///���ֶ�����
  TShfeFtdcMoneyType	ShortFrozenAmount;
  ///������
  TShfeFtdcVolumeType	OpenVolume;
  ///ƽ����
  TShfeFtdcVolumeType	CloseVolume;
  ///���ֽ��
  TShfeFtdcMoneyType	OpenAmount;
  ///ƽ�ֽ��
  TShfeFtdcMoneyType	CloseAmount;
  ///�ֲֳɱ�
  TShfeFtdcMoneyType	PositionCost;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///ռ�õı�֤��
  TShfeFtdcMoneyType	UseMargin;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;
  ///������ʽ�
  TShfeFtdcMoneyType	FrozenCash;
  ///�����������
  TShfeFtdcMoneyType	FrozenCommission;
  ///�ʽ���
  TShfeFtdcMoneyType	CashIn;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���ֳɱ�
  TShfeFtdcMoneyType	OpenCost;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///��ϳɽ��γɵĳֲ�
  TShfeFtdcVolumeType	CombPosition;
  ///��϶�ͷ����
  TShfeFtdcVolumeType	CombLongFrozen;
  ///��Ͽ�ͷ����
  TShfeFtdcVolumeType	CombShortFrozen;
  ///���ն���ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByDate;
  ///��ʶԳ�ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByTrade;
  ///���ճֲ�
  TShfeFtdcVolumeType	TodayPosition;
  ///��֤����
  TShfeFtdcRatioType	MarginRateByMoney;
  ///��֤����(������)
  TShfeFtdcRatioType	MarginRateByVolume;

  bool operator==(const CShfeFtdcInvestorPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PosiDirection == ct.PosiDirection);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (PositionDate == ct.PositionDate);
    if (!ret) return ret;
    ret = ret && (YdPosition == ct.YdPosition);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (LongFrozen == ct.LongFrozen);
    if (!ret) return ret;
    ret = ret && (ShortFrozen == ct.ShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongFrozenAmount, ct.LongFrozenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortFrozenAmount, ct.ShortFrozenAmount));
    if (!ret) return ret;
    ret = ret && (OpenVolume == ct.OpenVolume);
    if (!ret) return ret;
    ret = ret && (CloseVolume == ct.CloseVolume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenAmount, ct.OpenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseAmount, ct.CloseAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionCost, ct.PositionCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UseMargin, ct.UseMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCash, ct.FrozenCash));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CashIn, ct.CashIn));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenCost, ct.OpenCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (CombPosition == ct.CombPosition);
    if (!ret) return ret;
    ret = ret && (CombLongFrozen == ct.CombLongFrozen);
    if (!ret) return ret;
    ret = ret && (CombShortFrozen == ct.CombShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByDate, ct.CloseProfitByDate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByTrade, ct.CloseProfitByTrade));
    if (!ret) return ret;
    ret = ret && (TodayPosition == ct.TodayPosition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByMoney, ct.MarginRateByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByVolume, ct.MarginRateByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///��Լ��֤����
struct CShfeFtdcInstrumentMarginRateField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///�Ƿ���Խ�������ȡ
  TShfeFtdcBoolType	IsRelative;

  bool operator==(const CShfeFtdcInstrumentMarginRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (IsRelative == ct.IsRelative);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ��������
struct CShfeFtdcInstrumentCommissionRateField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������������
  TShfeFtdcRatioType	OpenRatioByMoney;
  ///����������
  TShfeFtdcRatioType	OpenRatioByVolume;
  ///ƽ����������
  TShfeFtdcRatioType	CloseRatioByMoney;
  ///ƽ��������
  TShfeFtdcRatioType	CloseRatioByVolume;
  ///ƽ����������
  TShfeFtdcRatioType	CloseTodayRatioByMoney;
  ///ƽ��������
  TShfeFtdcRatioType	CloseTodayRatioByVolume;

  bool operator==(const CShfeFtdcInstrumentCommissionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenRatioByMoney, ct.OpenRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenRatioByVolume, ct.OpenRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseRatioByMoney, ct.CloseRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseRatioByVolume, ct.CloseRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseTodayRatioByMoney, ct.CloseTodayRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseTodayRatioByVolume, ct.CloseTodayRatioByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///�������
struct CShfeFtdcDepthMarketDataField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///���¼�
  TShfeFtdcPriceType	LastPrice;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///������
  TShfeFtdcPriceType	PreClosePrice;
  ///��ֲ���
  TShfeFtdcLargeVolumeType	PreOpenInterest;
  ///����
  TShfeFtdcPriceType	OpenPrice;
  ///��߼�
  TShfeFtdcPriceType	HighestPrice;
  ///��ͼ�
  TShfeFtdcPriceType	LowestPrice;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ����
  TShfeFtdcMoneyType	Turnover;
  ///�ֲ���
  TShfeFtdcLargeVolumeType	OpenInterest;
  ///������
  TShfeFtdcPriceType	ClosePrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///��ͣ���
  TShfeFtdcPriceType	UpperLimitPrice;
  ///��ͣ���
  TShfeFtdcPriceType	LowerLimitPrice;
  ///����ʵ��
  TShfeFtdcRatioType	PreDelta;
  ///����ʵ��
  TShfeFtdcRatioType	CurrDelta;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����޸ĺ���
  TShfeFtdcMillisecType	UpdateMillisec;
  ///�����һ
  TShfeFtdcPriceType	BidPrice1;
  ///������һ
  TShfeFtdcVolumeType	BidVolume1;
  ///������һ
  TShfeFtdcPriceType	AskPrice1;
  ///������һ
  TShfeFtdcVolumeType	AskVolume1;
  ///����۶�
  TShfeFtdcPriceType	BidPrice2;
  ///��������
  TShfeFtdcVolumeType	BidVolume2;
  ///�����۶�
  TShfeFtdcPriceType	AskPrice2;
  ///��������
  TShfeFtdcVolumeType	AskVolume2;
  ///�������
  TShfeFtdcPriceType	BidPrice3;
  ///��������
  TShfeFtdcVolumeType	BidVolume3;
  ///��������
  TShfeFtdcPriceType	AskPrice3;
  ///��������
  TShfeFtdcVolumeType	AskVolume3;
  ///�������
  TShfeFtdcPriceType	BidPrice4;
  ///��������
  TShfeFtdcVolumeType	BidVolume4;
  ///��������
  TShfeFtdcPriceType	AskPrice4;
  ///��������
  TShfeFtdcVolumeType	AskVolume4;
  ///�������
  TShfeFtdcPriceType	BidPrice5;
  ///��������
  TShfeFtdcVolumeType	BidVolume5;
  ///��������
  TShfeFtdcPriceType	AskPrice5;
  ///��������
  TShfeFtdcVolumeType	AskVolume5;
  ///���վ���
  TShfeFtdcPriceType	AveragePrice;

  bool operator==(const CShfeFtdcDepthMarketDataField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LastPrice, ct.LastPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreClosePrice, ct.PreClosePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreOpenInterest, ct.PreOpenInterest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenPrice, ct.OpenPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(HighestPrice, ct.HighestPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LowestPrice, ct.LowestPrice));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Turnover, ct.Turnover));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenInterest, ct.OpenInterest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ClosePrice, ct.ClosePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UpperLimitPrice, ct.UpperLimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LowerLimitPrice, ct.LowerLimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDelta, ct.PreDelta));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrDelta, ct.CurrDelta));
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (UpdateMillisec == ct.UpdateMillisec);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice1, ct.BidPrice1));
    if (!ret) return ret;
    ret = ret && (BidVolume1 == ct.BidVolume1);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice1, ct.AskPrice1));
    if (!ret) return ret;
    ret = ret && (AskVolume1 == ct.AskVolume1);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice2, ct.BidPrice2));
    if (!ret) return ret;
    ret = ret && (BidVolume2 == ct.BidVolume2);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice2, ct.AskPrice2));
    if (!ret) return ret;
    ret = ret && (AskVolume2 == ct.AskVolume2);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice3, ct.BidPrice3));
    if (!ret) return ret;
    ret = ret && (BidVolume3 == ct.BidVolume3);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice3, ct.AskPrice3));
    if (!ret) return ret;
    ret = ret && (AskVolume3 == ct.AskVolume3);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice4, ct.BidPrice4));
    if (!ret) return ret;
    ret = ret && (BidVolume4 == ct.BidVolume4);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice4, ct.AskPrice4));
    if (!ret) return ret;
    ret = ret && (AskVolume4 == ct.AskVolume4);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice5, ct.BidPrice5));
    if (!ret) return ret;
    ret = ret && (BidVolume5 == ct.BidVolume5);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice5, ct.AskPrice5));
    if (!ret) return ret;
    ret = ret && (AskVolume5 == ct.AskVolume5);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AveragePrice, ct.AveragePrice));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ߺ�Լ����Ȩ��
struct CShfeFtdcInstrumentTradingRightField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����Ȩ��
  TShfeFtdcTradingRightType	TradingRight;

  bool operator==(const CShfeFtdcInstrumentTradingRightField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (TradingRight == ct.TradingRight);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾�û�
struct CShfeFtdcBrokerUserField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�û�����
  TShfeFtdcUserNameType	UserName;
  ///�û�����
  TShfeFtdcUserTypeType	UserType;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///�Ƿ�ʹ������
  TShfeFtdcBoolType	IsUsingOTP;

  bool operator==(const CShfeFtdcBrokerUserField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserName, ct.UserName) == 0);
    if (!ret) return ret;
    ret = ret && (UserType == ct.UserType);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (IsUsingOTP == ct.IsUsingOTP);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾�û�����
struct CShfeFtdcBrokerUserPasswordField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����
  TShfeFtdcPasswordType	Password;

  bool operator==(const CShfeFtdcBrokerUserPasswordField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾�û�����Ȩ��
struct CShfeFtdcBrokerUserFunctionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///���͹�˾���ܴ���
  TShfeFtdcBrokerFunctionCodeType	BrokerFunctionCode;

  bool operator==(const CShfeFtdcBrokerUserFunctionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (BrokerFunctionCode == ct.BrokerFunctionCode);
    if (!ret) return ret;

    return ret;
  }
};

///����������Ա���̻�
struct CShfeFtdcTraderOfferField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����
  TShfeFtdcPasswordType	Password;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///����������Ա����״̬
  TShfeFtdcTraderConnectStatusType	TraderConnectStatus;
  ///�����������������
  TShfeFtdcDateType	ConnectRequestDate;
  ///�������������ʱ��
  TShfeFtdcTimeType	ConnectRequestTime;
  ///�ϴα�������
  TShfeFtdcDateType	LastReportDate;
  ///�ϴα���ʱ��
  TShfeFtdcTimeType	LastReportTime;
  ///�����������
  TShfeFtdcDateType	ConnectDate;
  ///�������ʱ��
  TShfeFtdcTimeType	ConnectTime;
  ///��������
  TShfeFtdcDateType	StartDate;
  ///����ʱ��
  TShfeFtdcTimeType	StartTime;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��ϯλ���ɽ����
  TShfeFtdcTradeIDType	MaxTradeID;
  ///��ϯλ��󱨵�����
  TShfeFtdcReturnCodeType	MaxOrderMessageReference;

  bool operator==(const CShfeFtdcTraderOfferField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (TraderConnectStatus == ct.TraderConnectStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectRequestDate, ct.ConnectRequestDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectRequestTime, ct.ConnectRequestTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LastReportDate, ct.LastReportDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LastReportTime, ct.LastReportTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectDate, ct.ConnectDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectTime, ct.ConnectTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StartDate, ct.StartDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StartTime, ct.StartTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MaxTradeID, ct.MaxTradeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MaxOrderMessageReference, ct.MaxOrderMessageReference) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߽�����
struct CShfeFtdcSettlementInfoField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///��Ϣ����
  TShfeFtdcContentType	Content;

  bool operator==(const CShfeFtdcSettlementInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(Content, ct.Content) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ��֤���ʵ���
struct CShfeFtdcInstrumentMarginRateAdjustField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///�Ƿ���Խ�������ȡ
  TShfeFtdcBoolType	IsRelative;

  bool operator==(const CShfeFtdcInstrumentMarginRateAdjustField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (IsRelative == ct.IsRelative);
    if (!ret) return ret;

    return ret;
  }
};

///��������֤����
struct CShfeFtdcExchangeMarginRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;

  bool operator==(const CShfeFtdcExchangeMarginRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///��������֤���ʵ���
struct CShfeFtdcExchangeMarginRateAdjustField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///���潻����Ͷ���߶�ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///���潻����Ͷ���߶�ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///���潻����Ͷ���߿�ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///���潻����Ͷ���߿�ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///��������ͷ��֤����
  TShfeFtdcRatioType	ExchLongMarginRatioByMoney;
  ///��������ͷ��֤���
  TShfeFtdcMoneyType	ExchLongMarginRatioByVolume;
  ///��������ͷ��֤����
  TShfeFtdcRatioType	ExchShortMarginRatioByMoney;
  ///��������ͷ��֤���
  TShfeFtdcMoneyType	ExchShortMarginRatioByVolume;
  ///�����潻����Ͷ���߶�ͷ��֤����
  TShfeFtdcRatioType	NoLongMarginRatioByMoney;
  ///�����潻����Ͷ���߶�ͷ��֤���
  TShfeFtdcMoneyType	NoLongMarginRatioByVolume;
  ///�����潻����Ͷ���߿�ͷ��֤����
  TShfeFtdcRatioType	NoShortMarginRatioByMoney;
  ///�����潻����Ͷ���߿�ͷ��֤���
  TShfeFtdcMoneyType	NoShortMarginRatioByVolume;

  bool operator==(const CShfeFtdcExchangeMarginRateAdjustField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchLongMarginRatioByMoney, ct.ExchLongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchLongMarginRatioByVolume, ct.ExchLongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchShortMarginRatioByMoney, ct.ExchShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchShortMarginRatioByVolume, ct.ExchShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoLongMarginRatioByMoney, ct.NoLongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoLongMarginRatioByVolume, ct.NoLongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoShortMarginRatioByMoney, ct.NoShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoShortMarginRatioByVolume, ct.NoShortMarginRatioByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///��������
struct CShfeFtdcSettlementRefField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;

  bool operator==(const CShfeFtdcSettlementRefField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;

    return ret;
  }
};

///��ǰʱ��
struct CShfeFtdcCurrentTimeField
{
  ///��ǰ����
  TShfeFtdcDateType	CurrDate;
  ///��ǰʱ��
  TShfeFtdcTimeType	CurrTime;
  ///��ǰʱ�䣨���룩
  TShfeFtdcMillisecType	CurrMillisec;

  bool operator==(const CShfeFtdcCurrentTimeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(CurrDate, ct.CurrDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CurrTime, ct.CurrTime) == 0);
    if (!ret) return ret;
    ret = ret && (CurrMillisec == ct.CurrMillisec);
    if (!ret) return ret;

    return ret;
  }
};

///ͨѶ�׶�
struct CShfeFtdcCommPhaseField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///ͨѶʱ�α��
  TShfeFtdcCommPhaseNoType	CommPhaseNo;

  bool operator==(const CShfeFtdcCommPhaseField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (CommPhaseNo == ct.CommPhaseNo);
    if (!ret) return ret;

    return ret;
  }
};

///��¼��Ϣ
struct CShfeFtdcLoginInfoField
{
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///��¼����
  TShfeFtdcDateType	LoginDate;
  ///��¼ʱ��
  TShfeFtdcTimeType	LoginTime;
  ///IP��ַ
  TShfeFtdcIPAddressType	IPAddress;
  ///�û��˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	UserProductInfo;
  ///�ӿڶ˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	InterfaceProductInfo;
  ///Э����Ϣ
  TShfeFtdcProtocolInfoType	ProtocolInfo;
  ///ϵͳ����
  TShfeFtdcSystemNameType	SystemName;
  ///����
  TShfeFtdcPasswordType	Password;
  ///��󱨵�����
  TShfeFtdcOrderRefType	MaxOrderRef;
  ///������ʱ��
  TShfeFtdcTimeType	SHFETime;
  ///������ʱ��
  TShfeFtdcTimeType	DCETime;
  ///֣����ʱ��
  TShfeFtdcTimeType	CZCETime;
  ///�н���ʱ��
  TShfeFtdcTimeType	FFEXTime;
  ///Mac��ַ
  TShfeFtdcMacAddressType	MacAddress;
  ///��̬����
  TShfeFtdcPasswordType	OneTimePassword;

  bool operator==(const CShfeFtdcLoginInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LoginDate, ct.LoginDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LoginTime, ct.LoginTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(IPAddress, ct.IPAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserProductInfo, ct.UserProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InterfaceProductInfo, ct.InterfaceProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProtocolInfo, ct.ProtocolInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SystemName, ct.SystemName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MaxOrderRef, ct.MaxOrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SHFETime, ct.SHFETime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DCETime, ct.DCETime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CZCETime, ct.CZCETime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FFEXTime, ct.FFEXTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MacAddress, ct.MacAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OneTimePassword, ct.OneTimePassword) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��¼��Ϣ
struct CShfeFtdcLogoutAllField
{
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///ϵͳ����
  TShfeFtdcSystemNameType	SystemName;

  bool operator==(const CShfeFtdcLogoutAllField &ct) const
  {
    bool ret = true;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(SystemName, ct.SystemName) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ǰ��״̬
struct CShfeFtdcFrontStatusField
{
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�ϴα�������
  TShfeFtdcDateType	LastReportDate;
  ///�ϴα���ʱ��
  TShfeFtdcTimeType	LastReportTime;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;

  bool operator==(const CShfeFtdcFrontStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (strcmp(LastReportDate, ct.LastReportDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LastReportTime, ct.LastReportTime) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;

    return ret;
  }
};

///�û�������
struct CShfeFtdcUserPasswordUpdateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///ԭ���Ŀ���
  TShfeFtdcPasswordType	OldPassword;
  ///�µĿ���
  TShfeFtdcPasswordType	NewPassword;

  bool operator==(const CShfeFtdcUserPasswordUpdateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OldPassword, ct.OldPassword) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(NewPassword, ct.NewPassword) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���뱨��
struct CShfeFtdcInputOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;

  bool operator==(const CShfeFtdcInputOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;

    return ret;
  }
};

///����
struct CShfeFtdcOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///�����ύ״̬
  TShfeFtdcOrderSubmitStatusType	OrderSubmitStatus;
  ///������ʾ���
  TShfeFtdcSequenceNoType	NotifySequence;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������Դ
  TShfeFtdcOrderSourceType	OrderSource;
  ///����״̬
  TShfeFtdcOrderStatusType	OrderStatus;
  ///��������
  TShfeFtdcOrderTypeType	OrderType;
  ///��ɽ�����
  TShfeFtdcVolumeType	VolumeTraded;
  ///ʣ������
  TShfeFtdcVolumeType	VolumeTotal;
  ///��������
  TShfeFtdcDateType	InsertDate;
  ///ί��ʱ��
  TShfeFtdcTimeType	InsertTime;
  ///����ʱ��
  TShfeFtdcTimeType	ActiveTime;
  ///����ʱ��
  TShfeFtdcTimeType	SuspendTime;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����ʱ��
  TShfeFtdcTimeType	CancelTime;
  ///����޸Ľ���������Ա����
  TShfeFtdcTraderIDType	ActiveTraderID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///�û��˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	UserProductInfo;
  ///״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///�����û�����
  TShfeFtdcUserIDType	ActiveUserID;
  ///���͹�˾�������
  TShfeFtdcSequenceNoType	BrokerOrderSeq;
  ///��ر���
  TShfeFtdcOrderSysIDType	RelativeOrderSysID;
  ///֣�����ɽ�����
  TShfeFtdcVolumeType	ZCETotalTradedVolume;

  bool operator==(const CShfeFtdcOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (OrderSubmitStatus == ct.OrderSubmitStatus);
    if (!ret) return ret;
    ret = ret && (NotifySequence == ct.NotifySequence);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderSource == ct.OrderSource);
    if (!ret) return ret;
    ret = ret && (OrderStatus == ct.OrderStatus);
    if (!ret) return ret;
    ret = ret && (OrderType == ct.OrderType);
    if (!ret) return ret;
    ret = ret && (VolumeTraded == ct.VolumeTraded);
    if (!ret) return ret;
    ret = ret && (VolumeTotal == ct.VolumeTotal);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertDate, ct.InsertDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTime, ct.InsertTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTime, ct.ActiveTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SuspendTime, ct.SuspendTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CancelTime, ct.CancelTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTraderID, ct.ActiveTraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(UserProductInfo, ct.UserProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveUserID, ct.ActiveUserID) == 0);
    if (!ret) return ret;
    ret = ret && (BrokerOrderSeq == ct.BrokerOrderSeq);
    if (!ret) return ret;
    ret = ret && (strcmp(RelativeOrderSysID, ct.RelativeOrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ZCETotalTradedVolume == ct.ZCETotalTradedVolume);
    if (!ret) return ret;

    return ret;
  }
};

///����������
struct CShfeFtdcExchangeOrderField
{
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///�����ύ״̬
  TShfeFtdcOrderSubmitStatusType	OrderSubmitStatus;
  ///������ʾ���
  TShfeFtdcSequenceNoType	NotifySequence;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������Դ
  TShfeFtdcOrderSourceType	OrderSource;
  ///����״̬
  TShfeFtdcOrderStatusType	OrderStatus;
  ///��������
  TShfeFtdcOrderTypeType	OrderType;
  ///��ɽ�����
  TShfeFtdcVolumeType	VolumeTraded;
  ///ʣ������
  TShfeFtdcVolumeType	VolumeTotal;
  ///��������
  TShfeFtdcDateType	InsertDate;
  ///ί��ʱ��
  TShfeFtdcTimeType	InsertTime;
  ///����ʱ��
  TShfeFtdcTimeType	ActiveTime;
  ///����ʱ��
  TShfeFtdcTimeType	SuspendTime;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����ʱ��
  TShfeFtdcTimeType	CancelTime;
  ///����޸Ľ���������Ա����
  TShfeFtdcTraderIDType	ActiveTraderID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;

  bool operator==(const CShfeFtdcExchangeOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (OrderSubmitStatus == ct.OrderSubmitStatus);
    if (!ret) return ret;
    ret = ret && (NotifySequence == ct.NotifySequence);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderSource == ct.OrderSource);
    if (!ret) return ret;
    ret = ret && (OrderStatus == ct.OrderStatus);
    if (!ret) return ret;
    ret = ret && (OrderType == ct.OrderType);
    if (!ret) return ret;
    ret = ret && (VolumeTraded == ct.VolumeTraded);
    if (!ret) return ret;
    ret = ret && (VolumeTotal == ct.VolumeTotal);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertDate, ct.InsertDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTime, ct.InsertTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTime, ct.ActiveTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SuspendTime, ct.SuspendTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CancelTime, ct.CancelTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTraderID, ct.ActiveTraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;

    return ret;
  }
};

///��������������ʧ��
struct CShfeFtdcExchangeOrderInsertErrorField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcExchangeOrderInsertErrorField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���뱨������
struct CShfeFtdcInputOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������������
  TShfeFtdcOrderActionRefType	OrderActionRef;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������־
  TShfeFtdcActionFlagType	ActionFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///�����仯
  TShfeFtdcVolumeType	VolumeChange;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcInputOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionRef == ct.OrderActionRef);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ActionFlag == ct.ActionFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeChange == ct.VolumeChange);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��������
struct CShfeFtdcOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������������
  TShfeFtdcOrderActionRefType	OrderActionRef;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������־
  TShfeFtdcActionFlagType	ActionFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///�����仯
  TShfeFtdcVolumeType	VolumeChange;
  ///��������
  TShfeFtdcDateType	ActionDate;
  ///����ʱ��
  TShfeFtdcTimeType	ActionTime;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�������ر��
  TShfeFtdcOrderLocalIDType	ActionLocalID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///��������״̬
  TShfeFtdcOrderActionStatusType	OrderActionStatus;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionRef == ct.OrderActionRef);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ActionFlag == ct.ActionFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeChange == ct.VolumeChange);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionDate, ct.ActionDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionTime, ct.ActionTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionLocalID, ct.ActionLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionStatus == ct.OrderActionStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��������������
struct CShfeFtdcExchangeOrderActionField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������־
  TShfeFtdcActionFlagType	ActionFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///�����仯
  TShfeFtdcVolumeType	VolumeChange;
  ///��������
  TShfeFtdcDateType	ActionDate;
  ///����ʱ��
  TShfeFtdcTimeType	ActionTime;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�������ر��
  TShfeFtdcOrderLocalIDType	ActionLocalID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///��������״̬
  TShfeFtdcOrderActionStatusType	OrderActionStatus;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcExchangeOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ActionFlag == ct.ActionFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeChange == ct.VolumeChange);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionDate, ct.ActionDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionTime, ct.ActionTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionLocalID, ct.ActionLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionStatus == ct.OrderActionStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��������������ʧ��
struct CShfeFtdcExchangeOrderActionErrorField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�������ر��
  TShfeFtdcOrderLocalIDType	ActionLocalID;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcExchangeOrderActionErrorField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionLocalID, ct.ActionLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�������ɽ�
struct CShfeFtdcExchangeTradeField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ɽ����
  TShfeFtdcTradeIDType	TradeID;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///���׽�ɫ
  TShfeFtdcTradingRoleType	TradingRole;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///��ƽ��־
  TShfeFtdcOffsetFlagType	OffsetFlag;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	Price;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ�ʱ��
  TShfeFtdcDateType	TradeDate;
  ///�ɽ�ʱ��
  TShfeFtdcTimeType	TradeTime;
  ///�ɽ�����
  TShfeFtdcTradeTypeType	TradeType;
  ///�ɽ�����Դ
  TShfeFtdcPriceSourceType	PriceSource;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�ɽ���Դ
  TShfeFtdcTradeSourceType	TradeSource;

  bool operator==(const CShfeFtdcExchangeTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (TradingRole == ct.TradingRole);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (OffsetFlag == ct.OffsetFlag);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeDate, ct.TradeDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTime, ct.TradeTime) == 0);
    if (!ret) return ret;
    ret = ret && (TradeType == ct.TradeType);
    if (!ret) return ret;
    ret = ret && (PriceSource == ct.PriceSource);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (TradeSource == ct.TradeSource);
    if (!ret) return ret;

    return ret;
  }
};

///�ɽ�
struct CShfeFtdcTradeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ɽ����
  TShfeFtdcTradeIDType	TradeID;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///���׽�ɫ
  TShfeFtdcTradingRoleType	TradingRole;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///��ƽ��־
  TShfeFtdcOffsetFlagType	OffsetFlag;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	Price;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ�ʱ��
  TShfeFtdcDateType	TradeDate;
  ///�ɽ�ʱ��
  TShfeFtdcTimeType	TradeTime;
  ///�ɽ�����
  TShfeFtdcTradeTypeType	TradeType;
  ///�ɽ�����Դ
  TShfeFtdcPriceSourceType	PriceSource;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���͹�˾�������
  TShfeFtdcSequenceNoType	BrokerOrderSeq;
  ///�ɽ���Դ
  TShfeFtdcTradeSourceType	TradeSource;

  bool operator==(const CShfeFtdcTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (TradingRole == ct.TradingRole);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (OffsetFlag == ct.OffsetFlag);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeDate, ct.TradeDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTime, ct.TradeTime) == 0);
    if (!ret) return ret;
    ret = ret && (TradeType == ct.TradeType);
    if (!ret) return ret;
    ret = ret && (PriceSource == ct.PriceSource);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (BrokerOrderSeq == ct.BrokerOrderSeq);
    if (!ret) return ret;
    ret = ret && (TradeSource == ct.TradeSource);
    if (!ret) return ret;

    return ret;
  }
};

///�û��Ự
struct CShfeFtdcUserSessionField
{
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///��¼����
  TShfeFtdcDateType	LoginDate;
  ///��¼ʱ��
  TShfeFtdcTimeType	LoginTime;
  ///IP��ַ
  TShfeFtdcIPAddressType	IPAddress;
  ///�û��˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	UserProductInfo;
  ///�ӿڶ˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	InterfaceProductInfo;
  ///Э����Ϣ
  TShfeFtdcProtocolInfoType	ProtocolInfo;
  ///Mac��ַ
  TShfeFtdcMacAddressType	MacAddress;

  bool operator==(const CShfeFtdcUserSessionField &ct) const
  {
    bool ret = true;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LoginDate, ct.LoginDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LoginTime, ct.LoginTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(IPAddress, ct.IPAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserProductInfo, ct.UserProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InterfaceProductInfo, ct.InterfaceProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProtocolInfo, ct.ProtocolInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MacAddress, ct.MacAddress) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��󱨵�����
struct CShfeFtdcQueryMaxOrderVolumeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��ƽ��־
  TShfeFtdcOffsetFlagType	OffsetFlag;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�������������
  TShfeFtdcVolumeType	MaxVolume;

  bool operator==(const CShfeFtdcQueryMaxOrderVolumeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (OffsetFlag == ct.OffsetFlag);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (MaxVolume == ct.MaxVolume);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߽�����ȷ����Ϣ
struct CShfeFtdcSettlementInfoConfirmField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///ȷ������
  TShfeFtdcDateType	ConfirmDate;
  ///ȷ��ʱ��
  TShfeFtdcTimeType	ConfirmTime;

  bool operator==(const CShfeFtdcSettlementInfoConfirmField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConfirmDate, ct.ConfirmDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConfirmTime, ct.ConfirmTime) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�����ͬ��
struct CShfeFtdcSyncDepositField
{
  ///�������ˮ��
  TShfeFtdcDepositSeqNoType	DepositSeqNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�����
  TShfeFtdcMoneyType	Deposit;
  ///�Ƿ�ǿ�ƽ���
  TShfeFtdcBoolType	IsForce;

  bool operator==(const CShfeFtdcSyncDepositField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(DepositSeqNo, ct.DepositSeqNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Deposit, ct.Deposit));
    if (!ret) return ret;
    ret = ret && (IsForce == ct.IsForce);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾ͬ��
struct CShfeFtdcBrokerSyncField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcBrokerSyncField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���е�Ͷ����
struct CShfeFtdcSyncingInvestorField
{
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ��������
  TShfeFtdcPartyNameType	InvestorName;
  ///֤������
  TShfeFtdcIdCardTypeType	IdentifiedCardType;
  ///֤������
  TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///��ϵ�绰
  TShfeFtdcTelephoneType	Telephone;
  ///ͨѶ��ַ
  TShfeFtdcAddressType	Address;
  ///��������
  TShfeFtdcDateType	OpenDate;
  ///�ֻ�
  TShfeFtdcMobileType	Mobile;
  ///��������ģ�����
  TShfeFtdcInvestorIDType	CommModelID;

  bool operator==(const CShfeFtdcSyncingInvestorField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorName, ct.InvestorName) == 0);
    if (!ret) return ret;
    ret = ret && (IdentifiedCardType == ct.IdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(IdentifiedCardNo, ct.IdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (strcmp(Telephone, ct.Telephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Address, ct.Address) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Mobile, ct.Mobile) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CommModelID, ct.CommModelID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���еĽ��״���
struct CShfeFtdcSyncingTradingCodeField
{
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///���ױ�������
  TShfeFtdcClientIDTypeType	ClientIDType;

  bool operator==(const CShfeFtdcSyncingTradingCodeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (ClientIDType == ct.ClientIDType);
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���е�Ͷ���߷���
struct CShfeFtdcSyncingInvestorGroupField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ���߷�������
  TShfeFtdcInvestorGroupNameType	InvestorGroupName;

  bool operator==(const CShfeFtdcSyncingInvestorGroupField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupName, ct.InvestorGroupName) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���еĽ����˺�
struct CShfeFtdcSyncingTradingAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///�ϴ���Ѻ���
  TShfeFtdcMoneyType	PreMortgage;
  ///�ϴ����ö��
  TShfeFtdcMoneyType	PreCredit;
  ///�ϴδ���
  TShfeFtdcMoneyType	PreDeposit;
  ///�ϴν���׼����
  TShfeFtdcMoneyType	PreBalance;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///��Ϣ����
  TShfeFtdcMoneyType	InterestBase;
  ///��Ϣ����
  TShfeFtdcMoneyType	Interest;
  ///�����
  TShfeFtdcMoneyType	Deposit;
  ///������
  TShfeFtdcMoneyType	Withdraw;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;
  ///������ʽ�
  TShfeFtdcMoneyType	FrozenCash;
  ///�����������
  TShfeFtdcMoneyType	FrozenCommission;
  ///��ǰ��֤���ܶ�
  TShfeFtdcMoneyType	CurrMargin;
  ///�ʽ���
  TShfeFtdcMoneyType	CashIn;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///�ڻ�����׼����
  TShfeFtdcMoneyType	Balance;
  ///�����ʽ�
  TShfeFtdcMoneyType	Available;
  ///��ȡ�ʽ�
  TShfeFtdcMoneyType	WithdrawQuota;
  ///����׼����
  TShfeFtdcMoneyType	Reserve;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���ö��
  TShfeFtdcMoneyType	Credit;
  ///��Ѻ���
  TShfeFtdcMoneyType	Mortgage;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///Ͷ���߽��֤��
  TShfeFtdcMoneyType	DeliveryMargin;
  ///���������֤��
  TShfeFtdcMoneyType	ExchangeDeliveryMargin;

  bool operator==(const CShfeFtdcSyncingTradingAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMortgage, ct.PreMortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreCredit, ct.PreCredit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDeposit, ct.PreDeposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreBalance, ct.PreBalance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(InterestBase, ct.InterestBase));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Interest, ct.Interest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Deposit, ct.Deposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Withdraw, ct.Withdraw));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCash, ct.FrozenCash));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrMargin, ct.CurrMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CashIn, ct.CashIn));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance, ct.Balance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Available, ct.Available));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(WithdrawQuota, ct.WithdrawQuota));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Reserve, ct.Reserve));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Credit, ct.Credit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Mortgage, ct.Mortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(DeliveryMargin, ct.DeliveryMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeDeliveryMargin, ct.ExchangeDeliveryMargin));
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���е�Ͷ���ֲ߳�
struct CShfeFtdcSyncingInvestorPositionField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֲֶ�շ���
  TShfeFtdcPosiDirectionType	PosiDirection;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�ֲ�����
  TShfeFtdcPositionDateType	PositionDate;
  ///���ճֲ�
  TShfeFtdcVolumeType	YdPosition;
  ///���ճֲ�
  TShfeFtdcVolumeType	Position;
  ///��ͷ����
  TShfeFtdcVolumeType	LongFrozen;
  ///��ͷ����
  TShfeFtdcVolumeType	ShortFrozen;
  ///���ֶ�����
  TShfeFtdcMoneyType	LongFrozenAmount;
  ///���ֶ�����
  TShfeFtdcMoneyType	ShortFrozenAmount;
  ///������
  TShfeFtdcVolumeType	OpenVolume;
  ///ƽ����
  TShfeFtdcVolumeType	CloseVolume;
  ///���ֽ��
  TShfeFtdcMoneyType	OpenAmount;
  ///ƽ�ֽ��
  TShfeFtdcMoneyType	CloseAmount;
  ///�ֲֳɱ�
  TShfeFtdcMoneyType	PositionCost;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///ռ�õı�֤��
  TShfeFtdcMoneyType	UseMargin;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;
  ///������ʽ�
  TShfeFtdcMoneyType	FrozenCash;
  ///�����������
  TShfeFtdcMoneyType	FrozenCommission;
  ///�ʽ���
  TShfeFtdcMoneyType	CashIn;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���ֳɱ�
  TShfeFtdcMoneyType	OpenCost;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///��ϳɽ��γɵĳֲ�
  TShfeFtdcVolumeType	CombPosition;
  ///��϶�ͷ����
  TShfeFtdcVolumeType	CombLongFrozen;
  ///��Ͽ�ͷ����
  TShfeFtdcVolumeType	CombShortFrozen;
  ///���ն���ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByDate;
  ///��ʶԳ�ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByTrade;
  ///���ճֲ�
  TShfeFtdcVolumeType	TodayPosition;
  ///��֤����
  TShfeFtdcRatioType	MarginRateByMoney;
  ///��֤����(������)
  TShfeFtdcRatioType	MarginRateByVolume;

  bool operator==(const CShfeFtdcSyncingInvestorPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PosiDirection == ct.PosiDirection);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (PositionDate == ct.PositionDate);
    if (!ret) return ret;
    ret = ret && (YdPosition == ct.YdPosition);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (LongFrozen == ct.LongFrozen);
    if (!ret) return ret;
    ret = ret && (ShortFrozen == ct.ShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongFrozenAmount, ct.LongFrozenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortFrozenAmount, ct.ShortFrozenAmount));
    if (!ret) return ret;
    ret = ret && (OpenVolume == ct.OpenVolume);
    if (!ret) return ret;
    ret = ret && (CloseVolume == ct.CloseVolume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenAmount, ct.OpenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseAmount, ct.CloseAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionCost, ct.PositionCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UseMargin, ct.UseMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCash, ct.FrozenCash));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CashIn, ct.CashIn));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenCost, ct.OpenCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (CombPosition == ct.CombPosition);
    if (!ret) return ret;
    ret = ret && (CombLongFrozen == ct.CombLongFrozen);
    if (!ret) return ret;
    ret = ret && (CombShortFrozen == ct.CombShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByDate, ct.CloseProfitByDate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByTrade, ct.CloseProfitByTrade));
    if (!ret) return ret;
    ret = ret && (TodayPosition == ct.TodayPosition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByMoney, ct.MarginRateByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByVolume, ct.MarginRateByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���еĺ�Լ��֤����
struct CShfeFtdcSyncingInstrumentMarginRateField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///�Ƿ���Խ�������ȡ
  TShfeFtdcBoolType	IsRelative;

  bool operator==(const CShfeFtdcSyncingInstrumentMarginRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (IsRelative == ct.IsRelative);
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���еĺ�Լ��������
struct CShfeFtdcSyncingInstrumentCommissionRateField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������������
  TShfeFtdcRatioType	OpenRatioByMoney;
  ///����������
  TShfeFtdcRatioType	OpenRatioByVolume;
  ///ƽ����������
  TShfeFtdcRatioType	CloseRatioByMoney;
  ///ƽ��������
  TShfeFtdcRatioType	CloseRatioByVolume;
  ///ƽ����������
  TShfeFtdcRatioType	CloseTodayRatioByMoney;
  ///ƽ��������
  TShfeFtdcRatioType	CloseTodayRatioByVolume;

  bool operator==(const CShfeFtdcSyncingInstrumentCommissionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenRatioByMoney, ct.OpenRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenRatioByVolume, ct.OpenRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseRatioByMoney, ct.CloseRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseRatioByVolume, ct.CloseRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseTodayRatioByMoney, ct.CloseTodayRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseTodayRatioByVolume, ct.CloseTodayRatioByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ���еĺ�Լ����Ȩ��
struct CShfeFtdcSyncingInstrumentTradingRightField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����Ȩ��
  TShfeFtdcTradingRightType	TradingRight;

  bool operator==(const CShfeFtdcSyncingInstrumentTradingRightField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (TradingRight == ct.TradingRight);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ����
struct CShfeFtdcQryOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///��ʼʱ��
  TShfeFtdcTimeType	InsertTimeStart;
  ///����ʱ��
  TShfeFtdcTimeType	InsertTimeEnd;

  bool operator==(const CShfeFtdcQryOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTimeStart, ct.InsertTimeStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTimeEnd, ct.InsertTimeEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�ɽ�
struct CShfeFtdcQryTradeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ɽ����
  TShfeFtdcTradeIDType	TradeID;
  ///��ʼʱ��
  TShfeFtdcTimeType	TradeTimeStart;
  ///����ʱ��
  TShfeFtdcTimeType	TradeTimeEnd;

  bool operator==(const CShfeFtdcQryTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTimeStart, ct.TradeTimeStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTimeEnd, ct.TradeTimeEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯͶ���ֲ߳�
struct CShfeFtdcQryInvestorPositionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcQryInvestorPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�ʽ��˻�
struct CShfeFtdcQryTradingAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQryTradingAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯͶ����
struct CShfeFtdcQryInvestorField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQryInvestorField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���ױ���
struct CShfeFtdcQryTradingCodeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///���ױ�������
  TShfeFtdcClientIDTypeType	ClientIDType;

  bool operator==(const CShfeFtdcQryTradingCodeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (ClientIDType == ct.ClientIDType);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���ױ���
struct CShfeFtdcQryInvestorGroupField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcQryInvestorGroupField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���ױ���
struct CShfeFtdcQryInstrumentMarginRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;

  bool operator==(const CShfeFtdcQryInstrumentMarginRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���ױ���
struct CShfeFtdcQryInstrumentCommissionRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcQryInstrumentCommissionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���ױ���
struct CShfeFtdcQryInstrumentTradingRightField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcQryInstrumentTradingRightField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾
struct CShfeFtdcQryBrokerField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcQryBrokerField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ����Ա
struct CShfeFtdcQryTraderField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;

  bool operator==(const CShfeFtdcQryTraderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾��Ա����
struct CShfeFtdcQryPartBrokerField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;

  bool operator==(const CShfeFtdcQryPartBrokerField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�����û�����Ȩ��
struct CShfeFtdcQrySuperUserFunctionField
{
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcQrySuperUserFunctionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�û��Ự
struct CShfeFtdcQryUserSessionField
{
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcQryUserSessionField &ct) const
  {
    bool ret = true;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯǰ��״̬
struct CShfeFtdcQryFrontStatusField
{
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;

  bool operator==(const CShfeFtdcQryFrontStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ����������
struct CShfeFtdcQryExchangeOrderField
{
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;

  bool operator==(const CShfeFtdcQryExchangeOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��������
struct CShfeFtdcQryOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;

  bool operator==(const CShfeFtdcQryOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��������������
struct CShfeFtdcQryExchangeOrderActionField
{
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;

  bool operator==(const CShfeFtdcQryExchangeOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�����û�
struct CShfeFtdcQrySuperUserField
{
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcQrySuperUserField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ������
struct CShfeFtdcQryExchangeField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;

  bool operator==(const CShfeFtdcQryExchangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��Ʒ
struct CShfeFtdcQryProductField
{
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;

  bool operator==(const CShfeFtdcQryProductField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��Լ
struct CShfeFtdcQryInstrumentField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;

  bool operator==(const CShfeFtdcQryInstrumentField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ����
struct CShfeFtdcQryDepthMarketDataField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcQryDepthMarketDataField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾�û�
struct CShfeFtdcQryBrokerUserField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcQryBrokerUserField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾�û�Ȩ��
struct CShfeFtdcQryBrokerUserFunctionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcQryBrokerUserFunctionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ����Ա���̻�
struct CShfeFtdcQryTraderOfferField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;

  bool operator==(const CShfeFtdcQryTraderOfferField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�������ˮ
struct CShfeFtdcQrySyncDepositField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�������ˮ��
  TShfeFtdcDepositSeqNoType	DepositSeqNo;

  bool operator==(const CShfeFtdcQrySyncDepositField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DepositSeqNo, ct.DepositSeqNo) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯͶ���߽�����
struct CShfeFtdcQrySettlementInfoField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������
  TShfeFtdcDateType	TradingDay;

  bool operator==(const CShfeFtdcQrySettlementInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ����
struct CShfeFtdcQryHisOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///��ʼʱ��
  TShfeFtdcTimeType	InsertTimeStart;
  ///����ʱ��
  TShfeFtdcTimeType	InsertTimeEnd;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;

  bool operator==(const CShfeFtdcQryHisOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTimeStart, ct.InsertTimeStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTimeEnd, ct.InsertTimeEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;

    return ret;
  }
};

///��֯�ܹ�Ͷ���߶�Ӧ��ϵ��ƽ��
struct CShfeFtdcInvestorDepartmentFlatField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��֯�ܹ�����
  TShfeFtdcInvestorIDType	DepartmentID;

  bool operator==(const CShfeFtdcInvestorDepartmentFlatField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DepartmentID, ct.DepartmentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����Ա��֯�ܹ���ϵ
struct CShfeFtdcDepartmentUserField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���߷�Χ
  TShfeFtdcDepartmentRangeType	InvestorRange;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcDepartmentUserField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��֯�ܹ�
struct CShfeFtdcDepartmentField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��֯�ܹ�����
  TShfeFtdcInvestorIDType	DepartmentID;
  ///��֯�ܹ�����
  TShfeFtdcPartyNameType	DepartmentName;

  bool operator==(const CShfeFtdcDepartmentField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DepartmentID, ct.DepartmentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(DepartmentName, ct.DepartmentName) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾�ʽ�
struct CShfeFtdcQueryBrokerDepositField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;

  bool operator==(const CShfeFtdcQueryBrokerDepositField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾�ʽ�
struct CShfeFtdcBrokerDepositField
{
  ///��������
  TShfeFtdcTradeDateType	TradingDay;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ϴν���׼����
  TShfeFtdcMoneyType	PreBalance;
  ///��ǰ��֤���ܶ�
  TShfeFtdcMoneyType	CurrMargin;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ڻ�����׼����
  TShfeFtdcMoneyType	Balance;
  ///�����
  TShfeFtdcMoneyType	Deposit;
  ///������
  TShfeFtdcMoneyType	Withdraw;
  ///�����ʽ�
  TShfeFtdcMoneyType	Available;
  ///����׼����
  TShfeFtdcMoneyType	Reserve;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;

  bool operator==(const CShfeFtdcBrokerDepositField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreBalance, ct.PreBalance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrMargin, ct.CurrMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance, ct.Balance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Deposit, ct.Deposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Withdraw, ct.Withdraw));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Available, ct.Available));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Reserve, ct.Reserve));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;

    return ret;
  }
};

///�г�����
struct CShfeFtdcMarketDataField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///���¼�
  TShfeFtdcPriceType	LastPrice;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///������
  TShfeFtdcPriceType	PreClosePrice;
  ///��ֲ���
  TShfeFtdcLargeVolumeType	PreOpenInterest;
  ///����
  TShfeFtdcPriceType	OpenPrice;
  ///��߼�
  TShfeFtdcPriceType	HighestPrice;
  ///��ͼ�
  TShfeFtdcPriceType	LowestPrice;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ����
  TShfeFtdcMoneyType	Turnover;
  ///�ֲ���
  TShfeFtdcLargeVolumeType	OpenInterest;
  ///������
  TShfeFtdcPriceType	ClosePrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///��ͣ���
  TShfeFtdcPriceType	UpperLimitPrice;
  ///��ͣ���
  TShfeFtdcPriceType	LowerLimitPrice;
  ///����ʵ��
  TShfeFtdcRatioType	PreDelta;
  ///����ʵ��
  TShfeFtdcRatioType	CurrDelta;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����޸ĺ���
  TShfeFtdcMillisecType	UpdateMillisec;

  bool operator==(const CShfeFtdcMarketDataField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LastPrice, ct.LastPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreClosePrice, ct.PreClosePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreOpenInterest, ct.PreOpenInterest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenPrice, ct.OpenPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(HighestPrice, ct.HighestPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LowestPrice, ct.LowestPrice));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Turnover, ct.Turnover));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenInterest, ct.OpenInterest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ClosePrice, ct.ClosePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UpperLimitPrice, ct.UpperLimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LowerLimitPrice, ct.LowerLimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDelta, ct.PreDelta));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrDelta, ct.CurrDelta));
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (UpdateMillisec == ct.UpdateMillisec);
    if (!ret) return ret;

    return ret;
  }
};

///�����������
struct CShfeFtdcMarketDataBaseField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///������
  TShfeFtdcPriceType	PreClosePrice;
  ///��ֲ���
  TShfeFtdcLargeVolumeType	PreOpenInterest;
  ///����ʵ��
  TShfeFtdcRatioType	PreDelta;

  bool operator==(const CShfeFtdcMarketDataBaseField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreClosePrice, ct.PreClosePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreOpenInterest, ct.PreOpenInterest));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDelta, ct.PreDelta));
    if (!ret) return ret;

    return ret;
  }
};

///���龲̬����
struct CShfeFtdcMarketDataStaticField
{
  ///����
  TShfeFtdcPriceType	OpenPrice;
  ///��߼�
  TShfeFtdcPriceType	HighestPrice;
  ///��ͼ�
  TShfeFtdcPriceType	LowestPrice;
  ///������
  TShfeFtdcPriceType	ClosePrice;
  ///��ͣ���
  TShfeFtdcPriceType	UpperLimitPrice;
  ///��ͣ���
  TShfeFtdcPriceType	LowerLimitPrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///����ʵ��
  TShfeFtdcRatioType	CurrDelta;

  bool operator==(const CShfeFtdcMarketDataStaticField &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(OpenPrice, ct.OpenPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(HighestPrice, ct.HighestPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LowestPrice, ct.LowestPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ClosePrice, ct.ClosePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UpperLimitPrice, ct.UpperLimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LowerLimitPrice, ct.LowerLimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrDelta, ct.CurrDelta));
    if (!ret) return ret;

    return ret;
  }
};

///�������³ɽ�����
struct CShfeFtdcMarketDataLastMatchField
{
  ///���¼�
  TShfeFtdcPriceType	LastPrice;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ����
  TShfeFtdcMoneyType	Turnover;
  ///�ֲ���
  TShfeFtdcLargeVolumeType	OpenInterest;

  bool operator==(const CShfeFtdcMarketDataLastMatchField &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(LastPrice, ct.LastPrice));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Turnover, ct.Turnover));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenInterest, ct.OpenInterest));
    if (!ret) return ret;

    return ret;
  }
};

///�������ż�����
struct CShfeFtdcMarketDataBestPriceField
{
  ///�����һ
  TShfeFtdcPriceType	BidPrice1;
  ///������һ
  TShfeFtdcVolumeType	BidVolume1;
  ///������һ
  TShfeFtdcPriceType	AskPrice1;
  ///������һ
  TShfeFtdcVolumeType	AskVolume1;

  bool operator==(const CShfeFtdcMarketDataBestPriceField &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(BidPrice1, ct.BidPrice1));
    if (!ret) return ret;
    ret = ret && (BidVolume1 == ct.BidVolume1);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice1, ct.AskPrice1));
    if (!ret) return ret;
    ret = ret && (AskVolume1 == ct.AskVolume1);
    if (!ret) return ret;

    return ret;
  }
};

///�����������������
struct CShfeFtdcMarketDataBid23Field
{
  ///����۶�
  TShfeFtdcPriceType	BidPrice2;
  ///��������
  TShfeFtdcVolumeType	BidVolume2;
  ///�������
  TShfeFtdcPriceType	BidPrice3;
  ///��������
  TShfeFtdcVolumeType	BidVolume3;

  bool operator==(const CShfeFtdcMarketDataBid23Field &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(BidPrice2, ct.BidPrice2));
    if (!ret) return ret;
    ret = ret && (BidVolume2 == ct.BidVolume2);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice3, ct.BidPrice3));
    if (!ret) return ret;
    ret = ret && (BidVolume3 == ct.BidVolume3);
    if (!ret) return ret;

    return ret;
  }
};

///������������������
struct CShfeFtdcMarketDataAsk23Field
{
  ///�����۶�
  TShfeFtdcPriceType	AskPrice2;
  ///��������
  TShfeFtdcVolumeType	AskVolume2;
  ///��������
  TShfeFtdcPriceType	AskPrice3;
  ///��������
  TShfeFtdcVolumeType	AskVolume3;

  bool operator==(const CShfeFtdcMarketDataAsk23Field &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(AskPrice2, ct.AskPrice2));
    if (!ret) return ret;
    ret = ret && (AskVolume2 == ct.AskVolume2);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice3, ct.AskPrice3));
    if (!ret) return ret;
    ret = ret && (AskVolume3 == ct.AskVolume3);
    if (!ret) return ret;

    return ret;
  }
};

///���������ġ�������
struct CShfeFtdcMarketDataBid45Field
{
  ///�������
  TShfeFtdcPriceType	BidPrice4;
  ///��������
  TShfeFtdcVolumeType	BidVolume4;
  ///�������
  TShfeFtdcPriceType	BidPrice5;
  ///��������
  TShfeFtdcVolumeType	BidVolume5;

  bool operator==(const CShfeFtdcMarketDataBid45Field &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(BidPrice4, ct.BidPrice4));
    if (!ret) return ret;
    ret = ret && (BidVolume4 == ct.BidVolume4);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BidPrice5, ct.BidPrice5));
    if (!ret) return ret;
    ret = ret && (BidVolume5 == ct.BidVolume5);
    if (!ret) return ret;

    return ret;
  }
};

///���������ġ�������
struct CShfeFtdcMarketDataAsk45Field
{
  ///��������
  TShfeFtdcPriceType	AskPrice4;
  ///��������
  TShfeFtdcVolumeType	AskVolume4;
  ///��������
  TShfeFtdcPriceType	AskPrice5;
  ///��������
  TShfeFtdcVolumeType	AskVolume5;

  bool operator==(const CShfeFtdcMarketDataAsk45Field &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(AskPrice4, ct.AskPrice4));
    if (!ret) return ret;
    ret = ret && (AskVolume4 == ct.AskVolume4);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(AskPrice5, ct.AskPrice5));
    if (!ret) return ret;
    ret = ret && (AskVolume5 == ct.AskVolume5);
    if (!ret) return ret;

    return ret;
  }
};

///�������ʱ������
struct CShfeFtdcMarketDataUpdateTimeField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����޸ĺ���
  TShfeFtdcMillisecType	UpdateMillisec;

  bool operator==(const CShfeFtdcMarketDataUpdateTimeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (UpdateMillisec == ct.UpdateMillisec);
    if (!ret) return ret;

    return ret;
  }
};

///ָ���ĺ�Լ
struct CShfeFtdcSpecificInstrumentField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcSpecificInstrumentField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ״̬
struct CShfeFtdcInstrumentStatusField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///���������
  TShfeFtdcSettlementGroupIDType	SettlementGroupID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��Լ����״̬
  TShfeFtdcInstrumentStatusType	InstrumentStatus;
  ///���׽׶α��
  TShfeFtdcTradingSegmentSNType	TradingSegmentSN;
  ///���뱾״̬ʱ��
  TShfeFtdcTimeType	EnterTime;
  ///���뱾״̬ԭ��
  TShfeFtdcInstStatusEnterReasonType	EnterReason;

  bool operator==(const CShfeFtdcInstrumentStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlementGroupID, ct.SettlementGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InstrumentStatus == ct.InstrumentStatus);
    if (!ret) return ret;
    ret = ret && (TradingSegmentSN == ct.TradingSegmentSN);
    if (!ret) return ret;
    ret = ret && (strcmp(EnterTime, ct.EnterTime) == 0);
    if (!ret) return ret;
    ret = ret && (EnterReason == ct.EnterReason);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��Լ״̬
struct CShfeFtdcQryInstrumentStatusField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;

  bool operator==(const CShfeFtdcQryInstrumentStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ�����˻�
struct CShfeFtdcInvestorAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;

  bool operator==(const CShfeFtdcInvestorAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ӯ���㷨
struct CShfeFtdcPositionProfitAlgorithmField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///ӯ���㷨
  TShfeFtdcAlgorithmType	Algorithm;
  ///��ע
  TShfeFtdcMemoType	Memo;

  bool operator==(const CShfeFtdcPositionProfitAlgorithmField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (Algorithm == ct.Algorithm);
    if (!ret) return ret;
    ret = ret && (strcmp(Memo, ct.Memo) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��Ա�ʽ��ۿ�
struct CShfeFtdcDiscountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ʽ��ۿ۱���
  TShfeFtdcRatioType	Discount;

  bool operator==(const CShfeFtdcDiscountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Discount, ct.Discount));
    if (!ret) return ret;

    return ret;
  }
};

///��ѯת������
struct CShfeFtdcQryTransferBankField
{
  ///���д���
  TShfeFtdcBankIDType	BankID;
  ///���з����Ĵ���
  TShfeFtdcBankBrchIDType	BankBrchID;

  bool operator==(const CShfeFtdcQryTransferBankField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BankID, ct.BankID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankBrchID, ct.BankBrchID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ת������
struct CShfeFtdcTransferBankField
{
  ///���д���
  TShfeFtdcBankIDType	BankID;
  ///���з����Ĵ���
  TShfeFtdcBankBrchIDType	BankBrchID;
  ///��������
  TShfeFtdcBankNameType	BankName;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;

  bool operator==(const CShfeFtdcTransferBankField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BankID, ct.BankID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankBrchID, ct.BankBrchID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankName, ct.BankName) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯͶ���ֲ߳���ϸ
struct CShfeFtdcQryInvestorPositionDetailField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcQryInvestorPositionDetailField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ֲ߳���ϸ
struct CShfeFtdcInvestorPositionDetailField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///����
  TShfeFtdcDirectionType	Direction;
  ///��������
  TShfeFtdcDateType	OpenDate;
  ///�ɽ����
  TShfeFtdcTradeIDType	TradeID;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///���ּ�
  TShfeFtdcPriceType	OpenPrice;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///�ɽ�����
  TShfeFtdcTradeTypeType	TradeType;
  ///��Ϻ�Լ����
  TShfeFtdcInstrumentIDType	CombInstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///���ն���ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByDate;
  ///��ʶԳ�ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByTrade;
  ///���ն��гֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfitByDate;
  ///��ʶԳ�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfitByTrade;
  ///Ͷ���߱�֤��
  TShfeFtdcMoneyType	Margin;
  ///��������֤��
  TShfeFtdcMoneyType	ExchMargin;
  ///��֤����
  TShfeFtdcRatioType	MarginRateByMoney;
  ///��֤����(������)
  TShfeFtdcRatioType	MarginRateByVolume;
  ///������
  TShfeFtdcPriceType	LastSettlementPrice;
  ///�����
  TShfeFtdcPriceType	SettlementPrice;
  ///ƽ����
  TShfeFtdcVolumeType	CloseVolume;
  ///ƽ�ֽ��
  TShfeFtdcMoneyType	CloseAmount;

  bool operator==(const CShfeFtdcInvestorPositionDetailField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenPrice, ct.OpenPrice));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (TradeType == ct.TradeType);
    if (!ret) return ret;
    ret = ret && (strcmp(CombInstrumentID, ct.CombInstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByDate, ct.CloseProfitByDate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByTrade, ct.CloseProfitByTrade));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfitByDate, ct.PositionProfitByDate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfitByTrade, ct.PositionProfitByTrade));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Margin, ct.Margin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchMargin, ct.ExchMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByMoney, ct.MarginRateByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByVolume, ct.MarginRateByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LastSettlementPrice, ct.LastSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (CloseVolume == ct.CloseVolume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseAmount, ct.CloseAmount));
    if (!ret) return ret;

    return ret;
  }
};

///�ʽ��˻�������
struct CShfeFtdcTradingAccountPasswordField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///����
  TShfeFtdcPasswordType	Password;

  bool operator==(const CShfeFtdcTradingAccountPasswordField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���������鱨�̻�
struct CShfeFtdcMDTraderOfferField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����
  TShfeFtdcPasswordType	Password;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///����������Ա����״̬
  TShfeFtdcTraderConnectStatusType	TraderConnectStatus;
  ///�����������������
  TShfeFtdcDateType	ConnectRequestDate;
  ///�������������ʱ��
  TShfeFtdcTimeType	ConnectRequestTime;
  ///�ϴα�������
  TShfeFtdcDateType	LastReportDate;
  ///�ϴα���ʱ��
  TShfeFtdcTimeType	LastReportTime;
  ///�����������
  TShfeFtdcDateType	ConnectDate;
  ///�������ʱ��
  TShfeFtdcTimeType	ConnectTime;
  ///��������
  TShfeFtdcDateType	StartDate;
  ///����ʱ��
  TShfeFtdcTimeType	StartTime;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��ϯλ���ɽ����
  TShfeFtdcTradeIDType	MaxTradeID;
  ///��ϯλ��󱨵�����
  TShfeFtdcReturnCodeType	MaxOrderMessageReference;

  bool operator==(const CShfeFtdcMDTraderOfferField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (TraderConnectStatus == ct.TraderConnectStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectRequestDate, ct.ConnectRequestDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectRequestTime, ct.ConnectRequestTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LastReportDate, ct.LastReportDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LastReportTime, ct.LastReportTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectDate, ct.ConnectDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ConnectTime, ct.ConnectTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StartDate, ct.StartDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StartTime, ct.StartTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MaxTradeID, ct.MaxTradeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MaxOrderMessageReference, ct.MaxOrderMessageReference) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���鱨�̻�
struct CShfeFtdcQryMDTraderOfferField
{
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;

  bool operator==(const CShfeFtdcQryMDTraderOfferField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�ͻ�֪ͨ
struct CShfeFtdcQryNoticeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcQryNoticeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�֪ͨ
struct CShfeFtdcNoticeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Ϣ����
  TShfeFtdcContentType	Content;
  ///���͹�˾֪ͨ�������к�
  TShfeFtdcSequenceLabelType	SequenceLabel;

  bool operator==(const CShfeFtdcNoticeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Content, ct.Content) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SequenceLabel, ct.SequenceLabel) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�û�Ȩ��
struct CShfeFtdcUserRightField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�ͻ�Ȩ������
  TShfeFtdcUserRightTypeType	UserRightType;
  ///�Ƿ��ֹ
  TShfeFtdcBoolType	IsForbidden;

  bool operator==(const CShfeFtdcUserRightField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (UserRightType == ct.UserRightType);
    if (!ret) return ret;
    ret = ret && (IsForbidden == ct.IsForbidden);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ������Ϣȷ����
struct CShfeFtdcQrySettlementInfoConfirmField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQrySettlementInfoConfirmField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///װ�ؽ�����Ϣ
struct CShfeFtdcLoadSettlementInfoField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcLoadSettlementInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾�����ʽ��㷨��
struct CShfeFtdcBrokerWithdrawAlgorithmField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����ʽ��㷨
  TShfeFtdcAlgorithmType	WithdrawAlgorithm;
  ///�ʽ�ʹ����
  TShfeFtdcRatioType	UsingRatio;
  ///�����Ƿ����ƽ��ӯ��
  TShfeFtdcIncludeCloseProfitType	IncludeCloseProfit;
  ///�����޲����޳ɽ��ͻ��Ƿ��ܿ����������
  TShfeFtdcAllWithoutTradeType	AllWithoutTrade;
  ///�����Ƿ����ƽ��ӯ��
  TShfeFtdcIncludeCloseProfitType	AvailIncludeCloseProfit;
  ///�Ƿ������û��¼�
  TShfeFtdcBoolType	IsBrokerUserEvent;

  bool operator==(const CShfeFtdcBrokerWithdrawAlgorithmField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (WithdrawAlgorithm == ct.WithdrawAlgorithm);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UsingRatio, ct.UsingRatio));
    if (!ret) return ret;
    ret = ret && (IncludeCloseProfit == ct.IncludeCloseProfit);
    if (!ret) return ret;
    ret = ret && (AllWithoutTrade == ct.AllWithoutTrade);
    if (!ret) return ret;
    ret = ret && (AvailIncludeCloseProfit == ct.AvailIncludeCloseProfit);
    if (!ret) return ret;
    ret = ret && (IsBrokerUserEvent == ct.IsBrokerUserEvent);
    if (!ret) return ret;

    return ret;
  }
};

///�ʽ��˻���������
struct CShfeFtdcTradingAccountPasswordUpdateV1Field
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///ԭ���Ŀ���
  TShfeFtdcPasswordType	OldPassword;
  ///�µĿ���
  TShfeFtdcPasswordType	NewPassword;

  bool operator==(const CShfeFtdcTradingAccountPasswordUpdateV1Field &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OldPassword, ct.OldPassword) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(NewPassword, ct.NewPassword) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ʽ��˻���������
struct CShfeFtdcTradingAccountPasswordUpdateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///ԭ���Ŀ���
  TShfeFtdcPasswordType	OldPassword;
  ///�µĿ���
  TShfeFtdcPasswordType	NewPassword;

  bool operator==(const CShfeFtdcTradingAccountPasswordUpdateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OldPassword, ct.OldPassword) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(NewPassword, ct.NewPassword) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��Ϻ�Լ����
struct CShfeFtdcQryCombinationLegField
{
  ///��Ϻ�Լ����
  TShfeFtdcInstrumentIDType	CombInstrumentID;
  ///���ȱ��
  TShfeFtdcLegIDType	LegID;
  ///���Ⱥ�Լ����
  TShfeFtdcInstrumentIDType	LegInstrumentID;

  bool operator==(const CShfeFtdcQryCombinationLegField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(CombInstrumentID, ct.CombInstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (LegID == ct.LegID);
    if (!ret) return ret;
    ret = ret && (strcmp(LegInstrumentID, ct.LegInstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��Ϻ�Լ����
struct CShfeFtdcQrySyncStatusField
{
  ///������
  TShfeFtdcDateType	TradingDay;

  bool operator==(const CShfeFtdcQrySyncStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��Ͻ��׺�Լ�ĵ���
struct CShfeFtdcCombinationLegField
{
  ///��Ϻ�Լ����
  TShfeFtdcInstrumentIDType	CombInstrumentID;
  ///���ȱ��
  TShfeFtdcLegIDType	LegID;
  ///���Ⱥ�Լ����
  TShfeFtdcInstrumentIDType	LegInstrumentID;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///���ȳ���
  TShfeFtdcLegMultipleType	LegMultiple;
  ///��������
  TShfeFtdcImplyLevelType	ImplyLevel;

  bool operator==(const CShfeFtdcCombinationLegField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(CombInstrumentID, ct.CombInstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (LegID == ct.LegID);
    if (!ret) return ret;
    ret = ret && (strcmp(LegInstrumentID, ct.LegInstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (LegMultiple == ct.LegMultiple);
    if (!ret) return ret;
    ret = ret && (ImplyLevel == ct.ImplyLevel);
    if (!ret) return ret;

    return ret;
  }
};

///����ͬ��״̬
struct CShfeFtdcSyncStatusField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///����ͬ��״̬
  TShfeFtdcDataSyncStatusType	DataSyncStatus;

  bool operator==(const CShfeFtdcSyncStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (DataSyncStatus == ct.DataSyncStatus);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��ϵ��
struct CShfeFtdcQryLinkManField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQryLinkManField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ϵ��
struct CShfeFtdcLinkManField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��ϵ������
  TShfeFtdcPersonTypeType	PersonType;
  ///֤������
  TShfeFtdcIdCardTypeType	IdentifiedCardType;
  ///֤������
  TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
  ///����
  TShfeFtdcPartyNameType	PersonName;
  ///��ϵ�绰
  TShfeFtdcTelephoneType	Telephone;
  ///ͨѶ��ַ
  TShfeFtdcAddressType	Address;
  ///��������
  TShfeFtdcZipCodeType	ZipCode;
  ///���ȼ�
  TShfeFtdcPriorityType	Priority;

  bool operator==(const CShfeFtdcLinkManField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PersonType == ct.PersonType);
    if (!ret) return ret;
    ret = ret && (IdentifiedCardType == ct.IdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(IdentifiedCardNo, ct.IdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(PersonName, ct.PersonName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Telephone, ct.Telephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Address, ct.Address) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ZipCode, ct.ZipCode) == 0);
    if (!ret) return ret;
    ret = ret && (Priority == ct.Priority);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾�û��¼�
struct CShfeFtdcQryBrokerUserEventField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�û��¼�����
  TShfeFtdcUserEventTypeType	UserEventType;

  bool operator==(const CShfeFtdcQryBrokerUserEventField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (UserEventType == ct.UserEventType);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���͹�˾�û��¼�
struct CShfeFtdcBrokerUserEventField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�û��¼�����
  TShfeFtdcUserEventTypeType	UserEventType;
  ///�û��¼����
  TShfeFtdcSequenceNoType	EventSequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///�û��¼���Ϣ
  TShfeFtdcUserEventInfoType	UserEventInfo;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcBrokerUserEventField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (UserEventType == ct.UserEventType);
    if (!ret) return ret;
    ret = ret && (EventSequenceNo == ct.EventSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserEventInfo, ct.UserEventInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯǩԼ��������
struct CShfeFtdcQryContractBankField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///���д���
  TShfeFtdcBankIDType	BankID;
  ///���з����Ĵ���
  TShfeFtdcBankBrchIDType	BankBrchID;

  bool operator==(const CShfeFtdcQryContractBankField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankID, ct.BankID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankBrchID, ct.BankBrchID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯǩԼ������Ӧ
struct CShfeFtdcContractBankField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///���д���
  TShfeFtdcBankIDType	BankID;
  ///���з����Ĵ���
  TShfeFtdcBankBrchIDType	BankBrchID;
  ///��������
  TShfeFtdcBankNameType	BankName;

  bool operator==(const CShfeFtdcContractBankField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankID, ct.BankID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankBrchID, ct.BankBrchID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BankName, ct.BankName) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ������ϳֲ���ϸ
struct CShfeFtdcInvestorPositionCombineDetailField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///��������
  TShfeFtdcDateType	OpenDate;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��ϱ��
  TShfeFtdcTradeIDType	ComTradeID;
  ///��ϱ��
  TShfeFtdcTradeIDType	TradeID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///����
  TShfeFtdcDirectionType	Direction;
  ///�ֲ���
  TShfeFtdcVolumeType	TotalAmt;
  ///Ͷ���߱�֤��
  TShfeFtdcMoneyType	Margin;
  ///��������֤��
  TShfeFtdcMoneyType	ExchMargin;
  ///��֤����
  TShfeFtdcRatioType	MarginRateByMoney;
  ///��֤����(������)
  TShfeFtdcRatioType	MarginRateByVolume;
  ///���ȱ��
  TShfeFtdcLegIDType	LegID;
  ///���ȳ���
  TShfeFtdcLegMultipleType	LegMultiple;
  ///��ϳֲֺ�Լ����
  TShfeFtdcInstrumentIDType	CombInstrumentID;

  bool operator==(const CShfeFtdcInvestorPositionCombineDetailField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ComTradeID, ct.ComTradeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (TotalAmt == ct.TotalAmt);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Margin, ct.Margin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchMargin, ct.ExchMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByMoney, ct.MarginRateByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByVolume, ct.MarginRateByVolume));
    if (!ret) return ret;
    ret = ret && (LegID == ct.LegID);
    if (!ret) return ret;
    ret = ret && (LegMultiple == ct.LegMultiple);
    if (!ret) return ret;
    ret = ret && (strcmp(CombInstrumentID, ct.CombInstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ԥ��
struct CShfeFtdcParkedOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///Ԥ�񱨵����
  TShfeFtdcParkedOrderIDType	ParkedOrderID;
  ///�û�����
  TShfeFtdcUserTypeType	UserType;
  ///Ԥ��״̬
  TShfeFtdcParkedOrderStatusType	Status;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcParkedOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedOrderID, ct.ParkedOrderID) == 0);
    if (!ret) return ret;
    ret = ret && (UserType == ct.UserType);
    if (!ret) return ret;
    ret = ret && (Status == ct.Status);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����Ԥ�񵥲���
struct CShfeFtdcParkedOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������������
  TShfeFtdcOrderActionRefType	OrderActionRef;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������־
  TShfeFtdcActionFlagType	ActionFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///�����仯
  TShfeFtdcVolumeType	VolumeChange;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ԥ�񳷵������
  TShfeFtdcParkedOrderActionIDType	ParkedOrderActionID;
  ///�û�����
  TShfeFtdcUserTypeType	UserType;
  ///Ԥ�񳷵�״̬
  TShfeFtdcParkedOrderStatusType	Status;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcParkedOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionRef == ct.OrderActionRef);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ActionFlag == ct.ActionFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeChange == ct.VolumeChange);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedOrderActionID, ct.ParkedOrderActionID) == 0);
    if (!ret) return ret;
    ret = ret && (UserType == ct.UserType);
    if (!ret) return ret;
    ret = ret && (Status == ct.Status);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯԤ��
struct CShfeFtdcQryParkedOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;

  bool operator==(const CShfeFtdcQryParkedOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯԤ�񳷵�
struct CShfeFtdcQryParkedOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;

  bool operator==(const CShfeFtdcQryParkedOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ɾ��Ԥ��
struct CShfeFtdcRemoveParkedOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ԥ�񱨵����
  TShfeFtdcParkedOrderIDType	ParkedOrderID;

  bool operator==(const CShfeFtdcRemoveParkedOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedOrderID, ct.ParkedOrderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ɾ��Ԥ�񳷵�
struct CShfeFtdcRemoveParkedOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ԥ�񳷵����
  TShfeFtdcParkedOrderActionIDType	ParkedOrderActionID;

  bool operator==(const CShfeFtdcRemoveParkedOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedOrderActionID, ct.ParkedOrderActionID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾�����ʽ��㷨��
struct CShfeFtdcInvestorWithdrawAlgorithmField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�����ʽ����
  TShfeFtdcRatioType	UsingRatio;

  bool operator==(const CShfeFtdcInvestorWithdrawAlgorithmField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UsingRatio, ct.UsingRatio));
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��ϳֲ���ϸ
struct CShfeFtdcQryInvestorPositionCombineDetailField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��ϳֲֺ�Լ����
  TShfeFtdcInstrumentIDType	CombInstrumentID;

  bool operator==(const CShfeFtdcQryInvestorPositionCombineDetailField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CombInstrumentID, ct.CombInstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ɽ�����
struct CShfeFtdcMarketDataAveragePriceField
{
  ///���վ���
  TShfeFtdcPriceType	AveragePrice;

  bool operator==(const CShfeFtdcMarketDataAveragePriceField &ct) const
  {
    bool ret = true;
    ret = ret && (EQUALDOUBLE(AveragePrice, ct.AveragePrice));
    if (!ret) return ret;

    return ret;
  }
};

///У��Ͷ��������
struct CShfeFtdcVerifyInvestorPasswordField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����
  TShfeFtdcPasswordType	Password;

  bool operator==(const CShfeFtdcVerifyInvestorPasswordField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�û�IP
struct CShfeFtdcUserIPField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///IP��ַ
  TShfeFtdcIPAddressType	IPAddress;
  ///IP��ַ����
  TShfeFtdcIPAddressType	IPMask;
  ///Mac��ַ
  TShfeFtdcMacAddressType	MacAddress;

  bool operator==(const CShfeFtdcUserIPField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(IPAddress, ct.IPAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(IPMask, ct.IPMask) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MacAddress, ct.MacAddress) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�û��¼�֪ͨ��Ϣ
struct CShfeFtdcTradingNoticeInfoField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����ʱ��
  TShfeFtdcTimeType	SendTime;
  ///��Ϣ����
  TShfeFtdcContentType	FieldContent;
  ///����ϵ�к�
  TShfeFtdcSequenceSeriesType	SequenceSeries;
  ///���к�
  TShfeFtdcSequenceNoType	SequenceNo;

  bool operator==(const CShfeFtdcTradingNoticeInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SendTime, ct.SendTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FieldContent, ct.FieldContent) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceSeries == ct.SequenceSeries);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;

    return ret;
  }
};

///�û��¼�֪ͨ
struct CShfeFtdcTradingNoticeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����ϵ�к�
  TShfeFtdcSequenceSeriesType	SequenceSeries;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����ʱ��
  TShfeFtdcTimeType	SendTime;
  ///���к�
  TShfeFtdcSequenceNoType	SequenceNo;
  ///��Ϣ����
  TShfeFtdcContentType	FieldContent;

  bool operator==(const CShfeFtdcTradingNoticeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceSeries == ct.SequenceSeries);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SendTime, ct.SendTime) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(FieldContent, ct.FieldContent) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�����¼�֪ͨ
struct CShfeFtdcQryTradingNoticeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQryTradingNoticeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���󱨵�
struct CShfeFtdcQryErrOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQryErrOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���󱨵�
struct CShfeFtdcErrOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcErrOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ���󱨵�����
struct CShfeFtdcQryErrOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcQryErrOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���󱨵�����
struct CShfeFtdcErrOrderActionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///������������
  TShfeFtdcOrderActionRefType	OrderActionRef;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������־
  TShfeFtdcActionFlagType	ActionFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///�����仯
  TShfeFtdcVolumeType	VolumeChange;
  ///��������
  TShfeFtdcDateType	ActionDate;
  ///����ʱ��
  TShfeFtdcTimeType	ActionTime;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�������ر��
  TShfeFtdcOrderLocalIDType	ActionLocalID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///��������״̬
  TShfeFtdcOrderActionStatusType	OrderActionStatus;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcErrOrderActionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionRef == ct.OrderActionRef);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ActionFlag == ct.ActionFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeChange == ct.VolumeChange);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionDate, ct.ActionDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionTime, ct.ActionTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActionLocalID, ct.ActionLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (OrderActionStatus == ct.OrderActionStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ������ϢժҪ
struct CShfeFtdcInvestorSumInfoField
{
  ///Ͷ��������
  TShfeFtdcVolumeType	Count;
  ///MD5У����1
  TShfeFtdcMD5Type	md5_1;
  ///MD5У����2
  TShfeFtdcMD5Type	md5_2;
  ///MD5У����3
  TShfeFtdcMD5Type	md5_3;
  ///MD5У����4
  TShfeFtdcMD5Type	md5_4;
  ///MD5У����5
  TShfeFtdcMD5Type	md5_5;
  ///MD5У����6
  TShfeFtdcMD5Type	md5_6;
  ///MD5У����7
  TShfeFtdcMD5Type	md5_7;
  ///MD5У����8
  TShfeFtdcMD5Type	md5_8;
  ///MD5У����9
  TShfeFtdcMD5Type	md5_9;
  ///MD5У����10
  TShfeFtdcMD5Type	md5_10;
  ///MD5У����11
  TShfeFtdcMD5Type	md5_11;
  ///MD5У����12
  TShfeFtdcMD5Type	md5_12;
  ///MD5У����13
  TShfeFtdcMD5Type	md5_13;
  ///MD5У����14
  TShfeFtdcMD5Type	md5_14;
  ///MD5У����15
  TShfeFtdcMD5Type	md5_15;
  ///MD5У����16
  TShfeFtdcMD5Type	md5_16;

  bool operator==(const CShfeFtdcInvestorSumInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (Count == ct.Count);
    if (!ret) return ret;
    ret = ret && (md5_1 == ct.md5_1);
    if (!ret) return ret;
    ret = ret && (md5_2 == ct.md5_2);
    if (!ret) return ret;
    ret = ret && (md5_3 == ct.md5_3);
    if (!ret) return ret;
    ret = ret && (md5_4 == ct.md5_4);
    if (!ret) return ret;
    ret = ret && (md5_5 == ct.md5_5);
    if (!ret) return ret;
    ret = ret && (md5_6 == ct.md5_6);
    if (!ret) return ret;
    ret = ret && (md5_7 == ct.md5_7);
    if (!ret) return ret;
    ret = ret && (md5_8 == ct.md5_8);
    if (!ret) return ret;
    ret = ret && (md5_9 == ct.md5_9);
    if (!ret) return ret;
    ret = ret && (md5_10 == ct.md5_10);
    if (!ret) return ret;
    ret = ret && (md5_11 == ct.md5_11);
    if (!ret) return ret;
    ret = ret && (md5_12 == ct.md5_12);
    if (!ret) return ret;
    ret = ret && (md5_13 == ct.md5_13);
    if (!ret) return ret;
    ret = ret && (md5_14 == ct.md5_14);
    if (!ret) return ret;
    ret = ret && (md5_15 == ct.md5_15);
    if (!ret) return ret;
    ret = ret && (md5_16 == ct.md5_16);
    if (!ret) return ret;

    return ret;
  }
};

///����Ự
struct CShfeFtdcSettlementSessionField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;

  bool operator==(const CShfeFtdcSettlementSessionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;

    return ret;
  }
};

///�û���¼����
struct CShfeFtdcReqRiskUserLoginField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����
  TShfeFtdcPasswordType	Password;
  ///�ͻ��˰汾,20091230��Version=1,֮ǰ�汾Version=0
  TShfeFtdcVolumeType	Version;
  ///����ǰ���пͻ������ӵ�SessionID
  TShfeFtdcSessionIDType	LocalSessionID;

  bool operator==(const CShfeFtdcReqRiskUserLoginField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Password, ct.Password) == 0);
    if (!ret) return ret;
    ret = ret && (Version == ct.Version);
    if (!ret) return ret;
    ret = ret && (LocalSessionID == ct.LocalSessionID);
    if (!ret) return ret;

    return ret;
  }
};

///�û���¼Ӧ��
struct CShfeFtdcRspRiskUserLoginField
{
  ///������
  TShfeFtdcDateType	TradingDay;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�ͻ��˰汾,20091230��Version=1,֮ǰ�汾Version=0
  TShfeFtdcVolumeType	Version;
  ///ǰ������
  TShfeFtdcFrontTypeType	FrontType;

  bool operator==(const CShfeFtdcRspRiskUserLoginField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (Version == ct.Version);
    if (!ret) return ret;
    ret = ret && (FrontType == ct.FrontType);
    if (!ret) return ret;

    return ret;
  }
};

///�ض���ΧͶ������ϢժҪ����
struct CShfeFtdcInvestorRangeSumInfoField
{
  ///Ͷ������ʼ�±�
  TShfeFtdcVolumeType	startindex;
  ///Ͷ���߽����±�
  TShfeFtdcVolumeType	endindex;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;

  bool operator==(const CShfeFtdcInvestorRangeSumInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (startindex == ct.startindex);
    if (!ret) return ret;
    ret = ret && (endindex == ct.endindex);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ�����ʽ��ѯ����
struct CShfeFtdcReqInvestorAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��ʼ��������
  TShfeFtdcDateType	TradingDayStart;
  ///������������
  TShfeFtdcDateType	TradingDayEnd;
  ///��ʼͶ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDStart;
  ///����Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDEnd;
  ///�ʽ����򷽷�
  TShfeFtdcAccountSortTypeType	SortType;
  ///�����������ؽ��
  TShfeFtdcVolumeType	ResultCount;
  ///���������ؽ��
  TShfeFtdcRatioType	ResultRatio;

  bool operator==(const CShfeFtdcReqInvestorAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDayStart, ct.TradingDayStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDayEnd, ct.TradingDayEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDStart, ct.InvestorIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (SortType == ct.SortType);
    if (!ret) return ret;
    ret = ret && (ResultCount == ct.ResultCount);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ResultRatio, ct.ResultRatio));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ�����ʽ��ѯ��Ӧ
struct CShfeFtdcInvestorRiskAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///�ϴ���Ѻ���
  TShfeFtdcMoneyType	PreMortgage;
  ///�ϴ����ö��
  TShfeFtdcMoneyType	PreCredit;
  ///�ϴδ���
  TShfeFtdcMoneyType	PreDeposit;
  ///�ϴ���Ȩ��
  TShfeFtdcMoneyType	PreBalance;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///�������
  TShfeFtdcMoneyType	Withdraw;
  ///��ǰ��֤���ܶ�
  TShfeFtdcMoneyType	CurrMargin;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///��Ȩ��
  TShfeFtdcMoneyType	Balance;
  ///�����ʽ�
  TShfeFtdcMoneyType	Available;
  ///��Ѻ���
  TShfeFtdcMoneyType	Mortgage;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///����׼����
  TShfeFtdcMoneyType	Reserve;
  ///��ȡ�ʽ�
  TShfeFtdcMoneyType	WithdrawQuota;
  ///���ö��
  TShfeFtdcMoneyType	Credit;
  ///�ϴν�������֤��
  TShfeFtdcMoneyType	PreExchMargin;
  ///��ʷǿƽ����
  TShfeFtdcVolumeType	ForceCloseStat;
  ///Ͷ���߽��֤��
  TShfeFtdcMoneyType	DeliveryMargin;
  ///���������֤��
  TShfeFtdcMoneyType	ExchangeDeliveryMargin;
  ///��֤�𶳽�
  TShfeFtdcMoneyType	FrozenMargin;
  ///�����Ѷ���
  TShfeFtdcMoneyType	FrozenCommission;

  bool operator==(const CShfeFtdcInvestorRiskAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMortgage, ct.PreMortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreCredit, ct.PreCredit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDeposit, ct.PreDeposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreBalance, ct.PreBalance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Withdraw, ct.Withdraw));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrMargin, ct.CurrMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance, ct.Balance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Available, ct.Available));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Mortgage, ct.Mortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Reserve, ct.Reserve));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(WithdrawQuota, ct.WithdrawQuota));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Credit, ct.Credit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreExchMargin, ct.PreExchMargin));
    if (!ret) return ret;
    ret = ret && (ForceCloseStat == ct.ForceCloseStat);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(DeliveryMargin, ct.DeliveryMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeDeliveryMargin, ct.ExchangeDeliveryMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ֲֲ߳�ѯ����
struct CShfeFtdcReqInvestorPositionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��ʼ��������
  TShfeFtdcDateType	TradingDayStart;
  ///������������
  TShfeFtdcDateType	TradingDayEnd;
  ///��ʼͶ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDStart;
  ///����Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDEnd;
  ///��ʼ��Լ����
  TShfeFtdcInstrumentIDType	InstIDStart;
  ///������Լ����
  TShfeFtdcInstrumentIDType	InstIDEnd;
  ///��ʼ��Ʒ����
  TShfeFtdcInstrumentIDType	ProductIDStart;
  ///������Ʒ����
  TShfeFtdcInstrumentIDType	ProductIDEnd;
  ///�ֲ����򷽷�
  TShfeFtdcPositionSortTypeType	SortType;
  ///�����������ؽ��
  TShfeFtdcVolumeType	ResultCount;
  ///���������ؽ��
  TShfeFtdcRatioType	ResultRatio;

  bool operator==(const CShfeFtdcReqInvestorPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDayStart, ct.TradingDayStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDayEnd, ct.TradingDayEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDStart, ct.InvestorIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDStart, ct.InstIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDEnd, ct.InstIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDStart, ct.ProductIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDEnd, ct.ProductIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (SortType == ct.SortType);
    if (!ret) return ret;
    ret = ret && (ResultCount == ct.ResultCount);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ResultRatio, ct.ResultRatio));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ֲֲ߳�ѯ��Ӧ
struct CShfeFtdcRspInvestorPositionField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֲֶ�շ���
  TShfeFtdcPosiDirectionType	PosiDirection;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�ֲ�����
  TShfeFtdcPositionDateType	PositionDate;
  ///���ճֲ�
  TShfeFtdcVolumeType	YdPosition;
  ///���ճֲ�
  TShfeFtdcVolumeType	Position;
  ///��ͷ����
  TShfeFtdcVolumeType	LongFrozen;
  ///��ͷ����
  TShfeFtdcVolumeType	ShortFrozen;
  ///���ֶ�����
  TShfeFtdcMoneyType	LongFrozenAmount;
  ///���ֶ�����
  TShfeFtdcMoneyType	ShortFrozenAmount;
  ///������
  TShfeFtdcVolumeType	OpenVolume;
  ///ƽ����
  TShfeFtdcVolumeType	CloseVolume;
  ///���ֽ��
  TShfeFtdcMoneyType	OpenAmount;
  ///ƽ�ֽ��
  TShfeFtdcMoneyType	CloseAmount;
  ///�ֲֳɱ�
  TShfeFtdcMoneyType	PositionCost;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///ռ�õı�֤��
  TShfeFtdcMoneyType	UseMargin;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;
  ///������ʽ�
  TShfeFtdcMoneyType	FrozenCash;
  ///�����������
  TShfeFtdcMoneyType	FrozenCommission;
  ///�ʽ���
  TShfeFtdcMoneyType	CashIn;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���ֳɱ�
  TShfeFtdcMoneyType	OpenCost;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///��ϳɽ��γɵĳֲ�
  TShfeFtdcVolumeType	CombPosition;
  ///��϶�ͷ����
  TShfeFtdcVolumeType	CombLongFrozen;
  ///��Ͽ�ͷ����
  TShfeFtdcVolumeType	CombShortFrozen;
  ///���ն���ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByDate;
  ///��ʶԳ�ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByTrade;
  ///���ճֲ�
  TShfeFtdcVolumeType	TodayPosition;
  ///��֤����
  TShfeFtdcRatioType	MarginRateByMoney;
  ///��֤����(������)
  TShfeFtdcRatioType	MarginRateByVolume;

  bool operator==(const CShfeFtdcRspInvestorPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PosiDirection == ct.PosiDirection);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (PositionDate == ct.PositionDate);
    if (!ret) return ret;
    ret = ret && (YdPosition == ct.YdPosition);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (LongFrozen == ct.LongFrozen);
    if (!ret) return ret;
    ret = ret && (ShortFrozen == ct.ShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongFrozenAmount, ct.LongFrozenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortFrozenAmount, ct.ShortFrozenAmount));
    if (!ret) return ret;
    ret = ret && (OpenVolume == ct.OpenVolume);
    if (!ret) return ret;
    ret = ret && (CloseVolume == ct.CloseVolume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenAmount, ct.OpenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseAmount, ct.CloseAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionCost, ct.PositionCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UseMargin, ct.UseMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCash, ct.FrozenCash));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CashIn, ct.CashIn));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenCost, ct.OpenCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (CombPosition == ct.CombPosition);
    if (!ret) return ret;
    ret = ret && (CombLongFrozen == ct.CombLongFrozen);
    if (!ret) return ret;
    ret = ret && (CombShortFrozen == ct.CombShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByDate, ct.CloseProfitByDate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByTrade, ct.CloseProfitByTrade));
    if (!ret) return ret;
    ret = ret && (TodayPosition == ct.TodayPosition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByMoney, ct.MarginRateByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByVolume, ct.MarginRateByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߽��ײ�ѯ����
struct CShfeFtdcReqInvestorTradeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��ʼ��������
  TShfeFtdcDateType	TradingDayStart;
  ///������������
  TShfeFtdcDateType	TradingDayEnd;
  ///��ʼͶ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDStart;
  ///����Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDEnd;
  ///��ʼ��Լ����
  TShfeFtdcInstrumentIDType	InstIDStart;
  ///������Լ����
  TShfeFtdcInstrumentIDType	InstIDEnd;
  ///��ʼ��Ʒ����
  TShfeFtdcInstrumentIDType	ProductIDStart;
  ///������Ʒ����
  TShfeFtdcInstrumentIDType	ProductIDEnd;
  ///�������򷽷�
  TShfeFtdcTradeSortTypeType	SortType;
  ///�����������ؽ��
  TShfeFtdcVolumeType	ResultCount;
  ///���������ؽ��
  TShfeFtdcRatioType	ResultRatio;

  bool operator==(const CShfeFtdcReqInvestorTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDayStart, ct.TradingDayStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDayEnd, ct.TradingDayEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDStart, ct.InvestorIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDStart, ct.InstIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDEnd, ct.InstIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDStart, ct.ProductIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDEnd, ct.ProductIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (SortType == ct.SortType);
    if (!ret) return ret;
    ret = ret && (ResultCount == ct.ResultCount);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ResultRatio, ct.ResultRatio));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߽��ײ�ѯ��Ӧ
struct CShfeFtdcRspInvestorTradeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ɽ����
  TShfeFtdcTradeIDType	TradeID;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///���׽�ɫ
  TShfeFtdcTradingRoleType	TradingRole;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///��ƽ��־
  TShfeFtdcOffsetFlagType	OffsetFlag;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	Price;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ�ʱ��
  TShfeFtdcDateType	TradeDate;
  ///�ɽ�ʱ��
  TShfeFtdcTimeType	TradeTime;
  ///�ɽ�����
  TShfeFtdcTradeTypeType	TradeType;
  ///�ɽ�����Դ
  TShfeFtdcPriceSourceType	PriceSource;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���͹�˾�������
  TShfeFtdcSequenceNoType	BrokerOrderSeq;
  ///�ɽ���Դ
  TShfeFtdcTradeSourceType	TradeSource;

  bool operator==(const CShfeFtdcRspInvestorTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (TradingRole == ct.TradingRole);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (OffsetFlag == ct.OffsetFlag);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeDate, ct.TradeDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTime, ct.TradeTime) == 0);
    if (!ret) return ret;
    ret = ret && (TradeType == ct.TradeType);
    if (!ret) return ret;
    ret = ret && (PriceSource == ct.PriceSource);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (BrokerOrderSeq == ct.BrokerOrderSeq);
    if (!ret) return ret;
    ret = ret && (TradeSource == ct.TradeSource);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߱�����ѯ����
struct CShfeFtdcReqInvestorOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��������
  TShfeFtdcDateType	TradingDay;
  ///��ʼͶ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDStart;
  ///����Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorIDEnd;
  ///��ʼ��Լ����
  TShfeFtdcInstrumentIDType	InstIDStart;
  ///������Լ����
  TShfeFtdcInstrumentIDType	InstIDEnd;
  ///��ʼ��Ʒ����
  TShfeFtdcInstrumentIDType	ProductIDStart;
  ///������Ʒ����
  TShfeFtdcInstrumentIDType	ProductIDEnd;

  bool operator==(const CShfeFtdcReqInvestorOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDStart, ct.InvestorIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDStart, ct.InstIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDEnd, ct.InstIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDStart, ct.ProductIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDEnd, ct.ProductIDEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߱�����ѯ��Ӧ
struct CShfeFtdcRspInvestorOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///�����ύ״̬
  TShfeFtdcOrderSubmitStatusType	OrderSubmitStatus;
  ///������ʾ���
  TShfeFtdcSequenceNoType	NotifySequence;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������Դ
  TShfeFtdcOrderSourceType	OrderSource;
  ///����״̬
  TShfeFtdcOrderStatusType	OrderStatus;
  ///��������
  TShfeFtdcOrderTypeType	OrderType;
  ///��ɽ�����
  TShfeFtdcVolumeType	VolumeTraded;
  ///ʣ������
  TShfeFtdcVolumeType	VolumeTotal;
  ///��������
  TShfeFtdcDateType	InsertDate;
  ///ί��ʱ��
  TShfeFtdcTimeType	InsertTime;
  ///����ʱ��
  TShfeFtdcTimeType	ActiveTime;
  ///����ʱ��
  TShfeFtdcTimeType	SuspendTime;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����ʱ��
  TShfeFtdcTimeType	CancelTime;
  ///����޸Ľ���������Ա����
  TShfeFtdcTraderIDType	ActiveTraderID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///�û��˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	UserProductInfo;
  ///״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///�����û�����
  TShfeFtdcUserIDType	ActiveUserID;
  ///���͹�˾�������
  TShfeFtdcSequenceNoType	BrokerOrderSeq;
  ///��ر���
  TShfeFtdcOrderSysIDType	RelativeOrderSysID;
  ///֣�����ɽ�����
  TShfeFtdcVolumeType	ZCETotalTradedVolume;

  bool operator==(const CShfeFtdcRspInvestorOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (OrderSubmitStatus == ct.OrderSubmitStatus);
    if (!ret) return ret;
    ret = ret && (NotifySequence == ct.NotifySequence);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderSource == ct.OrderSource);
    if (!ret) return ret;
    ret = ret && (OrderStatus == ct.OrderStatus);
    if (!ret) return ret;
    ret = ret && (OrderType == ct.OrderType);
    if (!ret) return ret;
    ret = ret && (VolumeTraded == ct.VolumeTraded);
    if (!ret) return ret;
    ret = ret && (VolumeTotal == ct.VolumeTotal);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertDate, ct.InsertDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTime, ct.InsertTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTime, ct.ActiveTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SuspendTime, ct.SuspendTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CancelTime, ct.CancelTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTraderID, ct.ActiveTraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(UserProductInfo, ct.UserProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveUserID, ct.ActiveUserID) == 0);
    if (!ret) return ret;
    ret = ret && (BrokerOrderSeq == ct.BrokerOrderSeq);
    if (!ret) return ret;
    ret = ret && (strcmp(RelativeOrderSysID, ct.RelativeOrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ZCETotalTradedVolume == ct.ZCETotalTradedVolume);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ֲ߳�ͳ�Ʋ�ѯ��Ӧ
struct CShfeFtdcInvestorPositionStaticField
{
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///��Լ���
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��ֲ�
  TShfeFtdcVolumeType	YdPosition;
  ///�ֲܳ�
  TShfeFtdcVolumeType	Position;
  ///��ͷ�ֲ�
  TShfeFtdcVolumeType	LongPosition;
  ///��ͷ�ֲ�
  TShfeFtdcVolumeType	ShortPosition;
  ///���ֲ�
  TShfeFtdcVolumeType	NetPosition;
  ///Ͷ����ͷ�ֲ�
  TShfeFtdcVolumeType	SpecuLongPosi;
  ///Ͷ����ͷ�ֲ�
  TShfeFtdcVolumeType	SpecuShortPosi;
  ///��ֵ��ͷ�ֲ�
  TShfeFtdcVolumeType	HedgeLongPosi;
  ///��ֵ��ͷ�ֲ�
  TShfeFtdcVolumeType	HedgeShortPosi;
  ///���
  TShfeFtdcVolumeType	TodayPosition;
  ///�ֲֳܳɱ�
  TShfeFtdcMoneyType	PositionCost;

  bool operator==(const CShfeFtdcInvestorPositionStaticField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (YdPosition == ct.YdPosition);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (LongPosition == ct.LongPosition);
    if (!ret) return ret;
    ret = ret && (ShortPosition == ct.ShortPosition);
    if (!ret) return ret;
    ret = ret && (NetPosition == ct.NetPosition);
    if (!ret) return ret;
    ret = ret && (SpecuLongPosi == ct.SpecuLongPosi);
    if (!ret) return ret;
    ret = ret && (SpecuShortPosi == ct.SpecuShortPosi);
    if (!ret) return ret;
    ret = ret && (HedgeLongPosi == ct.HedgeLongPosi);
    if (!ret) return ret;
    ret = ret && (HedgeShortPosi == ct.HedgeShortPosi);
    if (!ret) return ret;
    ret = ret && (TodayPosition == ct.TodayPosition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionCost, ct.PositionCost));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߳ɽ�ͳ�Ʋ�ѯ��Ӧ
struct CShfeFtdcInvestorTradeStaticField
{
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///��Լ���
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ܳɽ���
  TShfeFtdcVolumeType	TotalVol;
  ///�ܳɽ���
  TShfeFtdcMoneyType	TotalAmt;
  ///��ɽ���
  TShfeFtdcVolumeType	BuyVol;
  ///��ɽ���
  TShfeFtdcMoneyType	BuyAmt;
  ///���ɽ���
  TShfeFtdcVolumeType	SellVol;
  ///���ɽ���
  TShfeFtdcMoneyType	SellAmt;
  ///������ɽ���
  TShfeFtdcVolumeType	NetVol;
  ///������ɽ���
  TShfeFtdcMoneyType	NetAmt;

  bool operator==(const CShfeFtdcInvestorTradeStaticField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (TotalVol == ct.TotalVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TotalAmt, ct.TotalAmt));
    if (!ret) return ret;
    ret = ret && (BuyVol == ct.BuyVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BuyAmt, ct.BuyAmt));
    if (!ret) return ret;
    ret = ret && (SellVol == ct.SellVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SellAmt, ct.SellAmt));
    if (!ret) return ret;
    ret = ret && (NetVol == ct.NetVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NetAmt, ct.NetAmt));
    if (!ret) return ret;

    return ret;
  }
};

///����ʵʱ����
struct CShfeFtdcSubMarketDataField
{
  ///��Լ���
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcSubMarketDataField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ�ֱֲ�����ѯ
struct CShfeFtdcQryInstPositionRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��ʼ��Լ����
  TShfeFtdcInstrumentIDType	InstIDStart;
  ///������Լ����
  TShfeFtdcInstrumentIDType	InstIDEnd;
  ///ɢ����ֵ����ֲ�������
  TShfeFtdcLargeVolumeType	hbtotal_little;
  ///�л���ֵ����ֲ�������
  TShfeFtdcLargeVolumeType	hbtotal_medium;
  ///ɢ����ֵ�����ֲ�������
  TShfeFtdcLargeVolumeType	hstotal_little;
  ///�л���ֵ�����ֲ�������
  TShfeFtdcLargeVolumeType	hstotal_medium;
  ///ɢ����ֵ�ֲ�������
  TShfeFtdcLargeVolumeType	htotal_little;
  ///�л���ֵ�ֲ�������
  TShfeFtdcLargeVolumeType	htotal_medium;
  ///ɢ��Ͷ������ֲ�������
  TShfeFtdcLargeVolumeType	sbtotal_little;
  ///�л�Ͷ������ֲ�������
  TShfeFtdcLargeVolumeType	sbtotal_medium;
  ///ɢ��Ͷ�������ֲ�������
  TShfeFtdcLargeVolumeType	sstotal_little;
  ///�л�Ͷ�������ֲ�������
  TShfeFtdcLargeVolumeType	sstotal_medium;
  ///ɢ��Ͷ���ֲ�������
  TShfeFtdcLargeVolumeType	stotal_little;
  ///�л�Ͷ���ֲ�������
  TShfeFtdcLargeVolumeType	stotal_medium;
  ///ɢ������ֲ�������
  TShfeFtdcLargeVolumeType	buytotal_little;
  ///�л�����ֲ�������
  TShfeFtdcLargeVolumeType	buytotal_medium;
  ///ɢ�������ֲ�������
  TShfeFtdcLargeVolumeType	selltotal_little;
  ///�л������ֲ�������
  TShfeFtdcLargeVolumeType	selltotal_medium;
  ///ɢ���ֲܳ�������
  TShfeFtdcLargeVolumeType	total_little;
  ///�л��ֲܳ�������
  TShfeFtdcLargeVolumeType	total_medium;
  ///ȡֵ��ʽ
  TShfeFtdcValueModeType	ValueMode;

  bool operator==(const CShfeFtdcQryInstPositionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDStart, ct.InstIDStart) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstIDEnd, ct.InstIDEnd) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hbtotal_little, ct.hbtotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hbtotal_medium, ct.hbtotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hstotal_little, ct.hstotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hstotal_medium, ct.hstotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(htotal_little, ct.htotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(htotal_medium, ct.htotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sbtotal_little, ct.sbtotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sbtotal_medium, ct.sbtotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sstotal_little, ct.sstotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sstotal_medium, ct.sstotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(stotal_little, ct.stotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(stotal_medium, ct.stotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(buytotal_little, ct.buytotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(buytotal_medium, ct.buytotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(selltotal_little, ct.selltotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(selltotal_medium, ct.selltotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(total_little, ct.total_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(total_medium, ct.total_medium));
    if (!ret) return ret;
    ret = ret && (ValueMode == ct.ValueMode);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ�ֱֲ���Ӧ��
struct CShfeFtdcRspInstPositionRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///ɢ����ֵ����ֲ���
  TShfeFtdcVolumeType	hbtotal_amt_little;
  ///�л���ֵ����ֲ���
  TShfeFtdcVolumeType	hbtotal_amt_medium;
  ///�󻧱�ֵ����ֲ���
  TShfeFtdcVolumeType	hbtotal_amt_large;
  ///ɢ����ֵ�����ֲ���
  TShfeFtdcVolumeType	hstotal_amt_little;
  ///�л���ֵ�����ֲ���
  TShfeFtdcVolumeType	hstotal_amt_medium;
  ///�󻧱�ֵ�����ֲ���
  TShfeFtdcVolumeType	hstotal_amt_large;
  ///ɢ����ֵ�ֲ���
  TShfeFtdcVolumeType	htotal_amt_little;
  ///�л���ֵ�ֲ���
  TShfeFtdcVolumeType	htotal_amt_medium;
  ///�󻧱�ֵ�ֲ���
  TShfeFtdcVolumeType	htotal_amt_large;
  ///ɢ��Ͷ������ֲ���
  TShfeFtdcVolumeType	sbtotal_amt_little;
  ///�л�Ͷ������ֲ���
  TShfeFtdcVolumeType	sbtotal_amt_medium;
  ///��Ͷ������ֲ���
  TShfeFtdcVolumeType	sbtotal_amt_large;
  ///ɢ��Ͷ�������ֲ���
  TShfeFtdcVolumeType	sstotal_amt_little;
  ///�л�Ͷ�������ֲ���
  TShfeFtdcVolumeType	sstotal_amt_medium;
  ///��Ͷ�������ֲ���
  TShfeFtdcVolumeType	sstotal_amt_large;
  ///ɢ��Ͷ���ֲ���
  TShfeFtdcVolumeType	stotal_amt_little;
  ///�л�Ͷ���ֲ���
  TShfeFtdcVolumeType	stotal_amt_medium;
  ///��Ͷ���ֲ���
  TShfeFtdcVolumeType	stotal_amt_large;
  ///ɢ������ֲ���
  TShfeFtdcVolumeType	buytotal_amt_little;
  ///�л�����ֲ���
  TShfeFtdcVolumeType	buytotal_amt_medium;
  ///������ֲ���
  TShfeFtdcVolumeType	buytotal_amt_large;
  ///ɢ�������ֲ���
  TShfeFtdcVolumeType	selltotal_amt_little;
  ///�л������ֲ���
  TShfeFtdcVolumeType	selltotal_amt_medium;
  ///�������ֲ���
  TShfeFtdcVolumeType	selltotal_amt_large;
  ///ɢ���ֲܳ���
  TShfeFtdcVolumeType	total_amt_little;
  ///�л��ֲܳ���
  TShfeFtdcVolumeType	total_amt_medium;
  ///���ֲܳ���
  TShfeFtdcVolumeType	total_amt_large;

  bool operator==(const CShfeFtdcRspInstPositionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (hbtotal_amt_little == ct.hbtotal_amt_little);
    if (!ret) return ret;
    ret = ret && (hbtotal_amt_medium == ct.hbtotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (hbtotal_amt_large == ct.hbtotal_amt_large);
    if (!ret) return ret;
    ret = ret && (hstotal_amt_little == ct.hstotal_amt_little);
    if (!ret) return ret;
    ret = ret && (hstotal_amt_medium == ct.hstotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (hstotal_amt_large == ct.hstotal_amt_large);
    if (!ret) return ret;
    ret = ret && (htotal_amt_little == ct.htotal_amt_little);
    if (!ret) return ret;
    ret = ret && (htotal_amt_medium == ct.htotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (htotal_amt_large == ct.htotal_amt_large);
    if (!ret) return ret;
    ret = ret && (sbtotal_amt_little == ct.sbtotal_amt_little);
    if (!ret) return ret;
    ret = ret && (sbtotal_amt_medium == ct.sbtotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (sbtotal_amt_large == ct.sbtotal_amt_large);
    if (!ret) return ret;
    ret = ret && (sstotal_amt_little == ct.sstotal_amt_little);
    if (!ret) return ret;
    ret = ret && (sstotal_amt_medium == ct.sstotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (sstotal_amt_large == ct.sstotal_amt_large);
    if (!ret) return ret;
    ret = ret && (stotal_amt_little == ct.stotal_amt_little);
    if (!ret) return ret;
    ret = ret && (stotal_amt_medium == ct.stotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (stotal_amt_large == ct.stotal_amt_large);
    if (!ret) return ret;
    ret = ret && (buytotal_amt_little == ct.buytotal_amt_little);
    if (!ret) return ret;
    ret = ret && (buytotal_amt_medium == ct.buytotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (buytotal_amt_large == ct.buytotal_amt_large);
    if (!ret) return ret;
    ret = ret && (selltotal_amt_little == ct.selltotal_amt_little);
    if (!ret) return ret;
    ret = ret && (selltotal_amt_medium == ct.selltotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (selltotal_amt_large == ct.selltotal_amt_large);
    if (!ret) return ret;
    ret = ret && (total_amt_little == ct.total_amt_little);
    if (!ret) return ret;
    ret = ret && (total_amt_medium == ct.total_amt_medium);
    if (!ret) return ret;
    ret = ret && (total_amt_large == ct.total_amt_large);
    if (!ret) return ret;

    return ret;
  }
};

///��Ʒ�ֱֲ�����ѯ
struct CShfeFtdcQryProductPositionRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///ɢ����ֵ����ֲ�������
  TShfeFtdcLargeVolumeType	hbtotal_little;
  ///�л���ֵ����ֲ�������
  TShfeFtdcLargeVolumeType	hbtotal_medium;
  ///ɢ����ֵ�����ֲ�������
  TShfeFtdcLargeVolumeType	hstotal_little;
  ///�л���ֵ�����ֲ�������
  TShfeFtdcLargeVolumeType	hstotal_medium;
  ///ɢ����ֵ�ֲ�������
  TShfeFtdcLargeVolumeType	htotal_little;
  ///�л���ֵ�ֲ�������
  TShfeFtdcLargeVolumeType	htotal_medium;
  ///ɢ��Ͷ������ֲ�������
  TShfeFtdcLargeVolumeType	sbtotal_little;
  ///�л�Ͷ������ֲ�������
  TShfeFtdcLargeVolumeType	sbtotal_medium;
  ///ɢ��Ͷ�������ֲ�������
  TShfeFtdcLargeVolumeType	sstotal_little;
  ///�л�Ͷ�������ֲ�������
  TShfeFtdcLargeVolumeType	sstotal_medium;
  ///ɢ��Ͷ���ֲ�������
  TShfeFtdcLargeVolumeType	stotal_little;
  ///�л�Ͷ���ֲ�������
  TShfeFtdcLargeVolumeType	stotal_medium;
  ///ɢ������ֲ�������
  TShfeFtdcLargeVolumeType	buytotal_little;
  ///�л�����ֲ�������
  TShfeFtdcLargeVolumeType	buytotal_medium;
  ///ɢ�������ֲ�������
  TShfeFtdcLargeVolumeType	selltotal_little;
  ///�л������ֲ�������
  TShfeFtdcLargeVolumeType	selltotal_medium;
  ///ɢ���ֲܳ�������
  TShfeFtdcLargeVolumeType	total_little;
  ///�л��ֲܳ�������
  TShfeFtdcLargeVolumeType	total_medium;
  ///ȡֵ��ʽ
  TShfeFtdcValueModeType	ValueMode;

  bool operator==(const CShfeFtdcQryProductPositionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hbtotal_little, ct.hbtotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hbtotal_medium, ct.hbtotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hstotal_little, ct.hstotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(hstotal_medium, ct.hstotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(htotal_little, ct.htotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(htotal_medium, ct.htotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sbtotal_little, ct.sbtotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sbtotal_medium, ct.sbtotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sstotal_little, ct.sstotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(sstotal_medium, ct.sstotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(stotal_little, ct.stotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(stotal_medium, ct.stotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(buytotal_little, ct.buytotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(buytotal_medium, ct.buytotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(selltotal_little, ct.selltotal_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(selltotal_medium, ct.selltotal_medium));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(total_little, ct.total_little));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(total_medium, ct.total_medium));
    if (!ret) return ret;
    ret = ret && (ValueMode == ct.ValueMode);
    if (!ret) return ret;

    return ret;
  }
};

///��Ʒ�ֱֲ���
struct CShfeFtdcRspProductPositionRateField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Ʒ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///ɢ����ֵ����ֲ���
  TShfeFtdcVolumeType	hbtotal_amt_little;
  ///�л���ֵ����ֲ���
  TShfeFtdcVolumeType	hbtotal_amt_medium;
  ///�󻧱�ֵ����ֲ���
  TShfeFtdcVolumeType	hbtotal_amt_large;
  ///ɢ����ֵ�����ֲ���
  TShfeFtdcVolumeType	hstotal_amt_little;
  ///�л���ֵ�����ֲ���
  TShfeFtdcVolumeType	hstotal_amt_medium;
  ///�󻧱�ֵ�����ֲ���
  TShfeFtdcVolumeType	hstotal_amt_large;
  ///ɢ����ֵ�ֲ���
  TShfeFtdcVolumeType	htotal_amt_little;
  ///�л���ֵ�ֲ���
  TShfeFtdcVolumeType	htotal_amt_medium;
  ///�󻧱�ֵ�ֲ���
  TShfeFtdcVolumeType	htotal_amt_large;
  ///ɢ��Ͷ������ֲ���
  TShfeFtdcVolumeType	sbtotal_amt_little;
  ///�л�Ͷ������ֲ���
  TShfeFtdcVolumeType	sbtotal_amt_medium;
  ///��Ͷ������ֲ���
  TShfeFtdcVolumeType	sbtotal_amt_large;
  ///ɢ��Ͷ�������ֲ���
  TShfeFtdcVolumeType	sstotal_amt_little;
  ///�л�Ͷ�������ֲ���
  TShfeFtdcVolumeType	sstotal_amt_medium;
  ///��Ͷ�������ֲ���
  TShfeFtdcVolumeType	sstotal_amt_large;
  ///ɢ��Ͷ���ֲ���
  TShfeFtdcVolumeType	stotal_amt_little;
  ///�л�Ͷ���ֲ���
  TShfeFtdcVolumeType	stotal_amt_medium;
  ///��Ͷ���ֲ���
  TShfeFtdcVolumeType	stotal_amt_large;
  ///ɢ������ֲ���
  TShfeFtdcVolumeType	buytotal_amt_little;
  ///�л�����ֲ���
  TShfeFtdcVolumeType	buytotal_amt_medium;
  ///������ֲ���
  TShfeFtdcVolumeType	buytotal_amt_large;
  ///ɢ�������ֲ���
  TShfeFtdcVolumeType	selltotal_amt_little;
  ///�л������ֲ���
  TShfeFtdcVolumeType	selltotal_amt_medium;
  ///�������ֲ���
  TShfeFtdcVolumeType	selltotal_amt_large;
  ///ɢ���ֲܳ���
  TShfeFtdcVolumeType	total_amt_little;
  ///�л��ֲܳ���
  TShfeFtdcVolumeType	total_amt_medium;
  ///���ֲܳ���
  TShfeFtdcVolumeType	total_amt_large;

  bool operator==(const CShfeFtdcRspProductPositionRateField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (hbtotal_amt_little == ct.hbtotal_amt_little);
    if (!ret) return ret;
    ret = ret && (hbtotal_amt_medium == ct.hbtotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (hbtotal_amt_large == ct.hbtotal_amt_large);
    if (!ret) return ret;
    ret = ret && (hstotal_amt_little == ct.hstotal_amt_little);
    if (!ret) return ret;
    ret = ret && (hstotal_amt_medium == ct.hstotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (hstotal_amt_large == ct.hstotal_amt_large);
    if (!ret) return ret;
    ret = ret && (htotal_amt_little == ct.htotal_amt_little);
    if (!ret) return ret;
    ret = ret && (htotal_amt_medium == ct.htotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (htotal_amt_large == ct.htotal_amt_large);
    if (!ret) return ret;
    ret = ret && (sbtotal_amt_little == ct.sbtotal_amt_little);
    if (!ret) return ret;
    ret = ret && (sbtotal_amt_medium == ct.sbtotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (sbtotal_amt_large == ct.sbtotal_amt_large);
    if (!ret) return ret;
    ret = ret && (sstotal_amt_little == ct.sstotal_amt_little);
    if (!ret) return ret;
    ret = ret && (sstotal_amt_medium == ct.sstotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (sstotal_amt_large == ct.sstotal_amt_large);
    if (!ret) return ret;
    ret = ret && (stotal_amt_little == ct.stotal_amt_little);
    if (!ret) return ret;
    ret = ret && (stotal_amt_medium == ct.stotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (stotal_amt_large == ct.stotal_amt_large);
    if (!ret) return ret;
    ret = ret && (buytotal_amt_little == ct.buytotal_amt_little);
    if (!ret) return ret;
    ret = ret && (buytotal_amt_medium == ct.buytotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (buytotal_amt_large == ct.buytotal_amt_large);
    if (!ret) return ret;
    ret = ret && (selltotal_amt_little == ct.selltotal_amt_little);
    if (!ret) return ret;
    ret = ret && (selltotal_amt_medium == ct.selltotal_amt_medium);
    if (!ret) return ret;
    ret = ret && (selltotal_amt_large == ct.selltotal_amt_large);
    if (!ret) return ret;
    ret = ret && (total_amt_little == ct.total_amt_little);
    if (!ret) return ret;
    ret = ret && (total_amt_medium == ct.total_amt_medium);
    if (!ret) return ret;
    ret = ret && (total_amt_large == ct.total_amt_large);
    if (!ret) return ret;

    return ret;
  }
};

///��ʷģ�ⷨѹ������ֻ����һ�ν��
struct CShfeFtdcIsWriteOnceField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�Ƿ�ֻ����һ�ν��
  TShfeFtdcBoolType	IsWriteOnce;

  bool operator==(const CShfeFtdcIsWriteOnceField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (IsWriteOnce == ct.IsWriteOnce);
    if (!ret) return ret;

    return ret;
  }
};

///ѹ�����Խ���۸�(�򸡶�)
struct CShfeFtdcSTSettlePriceField
{
  ///�ڼ���
  TShfeFtdcDayNumberType	Day;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///����۸�����(Day=1ʱ��Ч)
  TShfeFtdcSTPriceTypeType	PriceType;
  ///����۸�(�򸡶�)
  TShfeFtdcPriceType	Price;

  bool operator==(const CShfeFtdcSTSettlePriceField &ct) const
  {
    bool ret = true;
    ret = ret && (Day == ct.Day);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (PriceType == ct.PriceType);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;

    return ret;
  }
};

///ѹ������Ͷ���߱�֤����
struct CShfeFtdcSTInstrumentMarginRateField
{
  ///�ڼ���
  TShfeFtdcDayNumberType	Day;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///�Ƿ���Խ�������ȡ
  TShfeFtdcBoolType	IsRelative;

  bool operator==(const CShfeFtdcSTInstrumentMarginRateField &ct) const
  {
    bool ret = true;
    ret = ret && (Day == ct.Day);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (IsRelative == ct.IsRelative);
    if (!ret) return ret;

    return ret;
  }
};

///ѹ������Ͷ���߱�֤���ʵ���
struct CShfeFtdcSTInstrumentMarginRateAdjustField
{
  ///�ڼ���
  TShfeFtdcDayNumberType	Day;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���߷�Χ
  TShfeFtdcInvestorRangeType	InvestorRange;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///�Ƿ���Խ�������ȡ
  TShfeFtdcBoolType	IsRelative;

  bool operator==(const CShfeFtdcSTInstrumentMarginRateAdjustField &ct) const
  {
    bool ret = true;
    ret = ret && (Day == ct.Day);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorRange == ct.InvestorRange);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (IsRelative == ct.IsRelative);
    if (!ret) return ret;

    return ret;
  }
};

///ѹ�����Խ�������֤����
struct CShfeFtdcSTExchangeMarginRateField
{
  ///�ڼ���
  TShfeFtdcDayNumberType	Day;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///��ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///��ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///��ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;

  bool operator==(const CShfeFtdcSTExchangeMarginRateField &ct) const
  {
    bool ret = true;
    ret = ret && (Day == ct.Day);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///ѹ�����Խ�������֤���ʵ���
struct CShfeFtdcSTExchangeMarginRateAdjustField
{
  ///�ڼ���
  TShfeFtdcDayNumberType	Day;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///���潻����Ͷ���߶�ͷ��֤����
  TShfeFtdcRatioType	LongMarginRatioByMoney;
  ///���潻����Ͷ���߶�ͷ��֤���
  TShfeFtdcMoneyType	LongMarginRatioByVolume;
  ///���潻����Ͷ���߿�ͷ��֤����
  TShfeFtdcRatioType	ShortMarginRatioByMoney;
  ///���潻����Ͷ���߿�ͷ��֤���
  TShfeFtdcMoneyType	ShortMarginRatioByVolume;
  ///��������ͷ��֤����
  TShfeFtdcRatioType	ExchLongMarginRatioByMoney;
  ///��������ͷ��֤���
  TShfeFtdcMoneyType	ExchLongMarginRatioByVolume;
  ///��������ͷ��֤����
  TShfeFtdcRatioType	ExchShortMarginRatioByMoney;
  ///��������ͷ��֤���
  TShfeFtdcMoneyType	ExchShortMarginRatioByVolume;
  ///�����潻����Ͷ���߶�ͷ��֤����
  TShfeFtdcRatioType	NoLongMarginRatioByMoney;
  ///�����潻����Ͷ���߶�ͷ��֤���
  TShfeFtdcMoneyType	NoLongMarginRatioByVolume;
  ///�����潻����Ͷ���߿�ͷ��֤����
  TShfeFtdcRatioType	NoShortMarginRatioByMoney;
  ///�����潻����Ͷ���߿�ͷ��֤���
  TShfeFtdcMoneyType	NoShortMarginRatioByVolume;

  bool operator==(const CShfeFtdcSTExchangeMarginRateAdjustField &ct) const
  {
    bool ret = true;
    ret = ret && (Day == ct.Day);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByMoney, ct.LongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMarginRatioByVolume, ct.LongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByMoney, ct.ShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMarginRatioByVolume, ct.ShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchLongMarginRatioByMoney, ct.ExchLongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchLongMarginRatioByVolume, ct.ExchLongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchShortMarginRatioByMoney, ct.ExchShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchShortMarginRatioByVolume, ct.ExchShortMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoLongMarginRatioByMoney, ct.NoLongMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoLongMarginRatioByVolume, ct.NoLongMarginRatioByVolume));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoShortMarginRatioByMoney, ct.NoShortMarginRatioByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NoShortMarginRatioByVolume, ct.NoShortMarginRatioByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ��������ϵ����Ϣ
struct CShfeFtdcInvestorLinkManField
{
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ��������
  TShfeFtdcPartyNameType	InvestorName;
  ///֤������
  TShfeFtdcIdCardTypeType	IdentifiedCardType;
  ///֤������
  TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///��ϵ�绰
  TShfeFtdcTelephoneType	Telephone;
  ///ͨѶ��ַ
  TShfeFtdcAddressType	Address;
  ///ָ���µ���֤������
  TShfeFtdcIdCardTypeType	OrderManIdentifiedCardType;
  ///ָ���µ���֤������
  TShfeFtdcIdentifiedCardNoType	OrderManIdentifiedCardNo;
  ///ָ���µ�������
  TShfeFtdcPartyNameType	OrderManPersonName;
  ///ָ���µ�����ϵ�绰
  TShfeFtdcTelephoneType	OrderManTelephone;
  ///ָ���µ���ͨѶ��ַ
  TShfeFtdcAddressType	OrderManAddress;
  ///ָ���µ�����������
  TShfeFtdcZipCodeType	OrderManZipCode;
  ///�ʽ������֤������
  TShfeFtdcIdCardTypeType	FundManIdentifiedCardType;
  ///�ʽ������֤������
  TShfeFtdcIdentifiedCardNoType	FundManIdentifiedCardNo;
  ///�ʽ����������
  TShfeFtdcPartyNameType	FundManPersonName;
  ///�ʽ��������ϵ�绰
  TShfeFtdcTelephoneType	FundManTelephone;
  ///�ʽ������ͨѶ��ַ
  TShfeFtdcAddressType	FundManAddress;
  ///�ʽ��������������
  TShfeFtdcZipCodeType	FundManZipCode;
  ///������Ȩ��֤������
  TShfeFtdcIdCardTypeType	OpenManIdentifiedCardType;
  ///������Ȩ��֤������
  TShfeFtdcIdentifiedCardNoType	OpenManIdentifiedCardNo;
  ///������Ȩ������
  TShfeFtdcPartyNameType	OpenManPersonName;
  ///������Ȩ����ϵ�绰
  TShfeFtdcTelephoneType	OpenManTelephone;
  ///������Ȩ��ͨѶ��ַ
  TShfeFtdcAddressType	OpenManAddress;
  ///������Ȩ����������
  TShfeFtdcZipCodeType	OpenManZipCode;
  ///���㵥ȷ����֤������
  TShfeFtdcIdCardTypeType	SettlementManIdentifiedCardType;
  ///���㵥ȷ����֤������
  TShfeFtdcIdentifiedCardNoType	SettlementManIdentifiedCardNo;
  ///���㵥ȷ��������
  TShfeFtdcPartyNameType	SettlementManPersonName;
  ///���㵥ȷ������ϵ�绰
  TShfeFtdcTelephoneType	SettlementManTelephone;
  ///���㵥ȷ����ͨѶ��ַ
  TShfeFtdcAddressType	SettlementManAddress;
  ///���㵥ȷ������������
  TShfeFtdcZipCodeType	SettlementManZipCode;
  ///��������
  TShfeFtdcDateType	OpenDate;
  ///�ֻ�
  TShfeFtdcMobileType	Mobile;
  ///�����ʼ�
  TShfeFtdcEMailType	EMail;
  ///Ͷ��������
  TShfeFtdcInvestorTypeType	InvestorType;
  ///���Ҵ���
  TShfeFtdcUOACountryCodeType	PhoneCountryCode;
  ///����
  TShfeFtdcAreaCodeType	PhoneAreaCode;
  ///������Ȩ�˹��Ҵ���
  TShfeFtdcUOACountryCodeType	OpenPhoneCountryCode;
  ///������Ȩ������
  TShfeFtdcAreaCodeType	OpenPhoneAreaCode;
  ///ָ���µ��˹��Ҵ���
  TShfeFtdcUOACountryCodeType	OrderPhoneCountryCode;
  ///ָ���µ�������
  TShfeFtdcAreaCodeType	OrderPhoneAreaCode;
  ///�ʽ�����˹��Ҵ���
  TShfeFtdcUOACountryCodeType	FundPhoneCountryCode;
  ///�ʽ����������
  TShfeFtdcAreaCodeType	FundPhoneAreaCode;
  ///���㵥ȷ���˹��Ҵ���
  TShfeFtdcUOACountryCodeType	SettlePhoneCountryCode;
  ///���㵥ȷ��������
  TShfeFtdcAreaCodeType	SettlePhoneAreaCode;

  bool operator==(const CShfeFtdcInvestorLinkManField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorName, ct.InvestorName) == 0);
    if (!ret) return ret;
    ret = ret && (IdentifiedCardType == ct.IdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(IdentifiedCardNo, ct.IdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (strcmp(Telephone, ct.Telephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Address, ct.Address) == 0);
    if (!ret) return ret;
    ret = ret && (OrderManIdentifiedCardType == ct.OrderManIdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderManIdentifiedCardNo, ct.OrderManIdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderManPersonName, ct.OrderManPersonName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderManTelephone, ct.OrderManTelephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderManAddress, ct.OrderManAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderManZipCode, ct.OrderManZipCode) == 0);
    if (!ret) return ret;
    ret = ret && (FundManIdentifiedCardType == ct.FundManIdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(FundManIdentifiedCardNo, ct.FundManIdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundManPersonName, ct.FundManPersonName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundManTelephone, ct.FundManTelephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundManAddress, ct.FundManAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundManZipCode, ct.FundManZipCode) == 0);
    if (!ret) return ret;
    ret = ret && (OpenManIdentifiedCardType == ct.OpenManIdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenManIdentifiedCardNo, ct.OpenManIdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenManPersonName, ct.OpenManPersonName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenManTelephone, ct.OpenManTelephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenManAddress, ct.OpenManAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenManZipCode, ct.OpenManZipCode) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementManIdentifiedCardType == ct.SettlementManIdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlementManIdentifiedCardNo, ct.SettlementManIdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlementManPersonName, ct.SettlementManPersonName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlementManTelephone, ct.SettlementManTelephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlementManAddress, ct.SettlementManAddress) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlementManZipCode, ct.SettlementManZipCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Mobile, ct.Mobile) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EMail, ct.EMail) == 0);
    if (!ret) return ret;
    ret = ret && (InvestorType == ct.InvestorType);
    if (!ret) return ret;
    ret = ret && (strcmp(PhoneCountryCode, ct.PhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(PhoneAreaCode, ct.PhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenPhoneCountryCode, ct.OpenPhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenPhoneAreaCode, ct.OpenPhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderPhoneCountryCode, ct.OrderPhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderPhoneAreaCode, ct.OrderPhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundPhoneCountryCode, ct.FundPhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundPhoneAreaCode, ct.FundPhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlePhoneCountryCode, ct.SettlePhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlePhoneAreaCode, ct.SettlePhoneAreaCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����Ͷ���߳ɽ�
struct CShfeFtdcSubInvestorTradeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcSubInvestorTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����Ͷ���ֲ߳�
struct CShfeFtdcSubInvestorPositionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcSubInvestorPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���к�
struct CShfeFtdcNotifySequenceField
{
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;

  bool operator==(const CShfeFtdcNotifySequenceField &ct) const
  {
    bool ret = true;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;

    return ret;
  }
};

///����ĳɽ�
struct CShfeFtdcSequencialTradeField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ɽ����
  TShfeFtdcTradeIDType	TradeID;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///���׽�ɫ
  TShfeFtdcTradingRoleType	TradingRole;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///��ƽ��־
  TShfeFtdcOffsetFlagType	OffsetFlag;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	Price;
  ///����
  TShfeFtdcVolumeType	Volume;
  ///�ɽ�ʱ��
  TShfeFtdcDateType	TradeDate;
  ///�ɽ�ʱ��
  TShfeFtdcTimeType	TradeTime;
  ///�ɽ�����
  TShfeFtdcTradeTypeType	TradeType;
  ///�ɽ�����Դ
  TShfeFtdcPriceSourceType	PriceSource;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���͹�˾�������
  TShfeFtdcSequenceNoType	BrokerOrderSeq;
  ///�ɽ���Դ
  TShfeFtdcTradeSourceType	TradeSource;

  bool operator==(const CShfeFtdcSequencialTradeField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeID, ct.TradeID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (TradingRole == ct.TradingRole);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (OffsetFlag == ct.OffsetFlag);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;
    ret = ret && (Volume == ct.Volume);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeDate, ct.TradeDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeTime, ct.TradeTime) == 0);
    if (!ret) return ret;
    ret = ret && (TradeType == ct.TradeType);
    if (!ret) return ret;
    ret = ret && (PriceSource == ct.PriceSource);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (BrokerOrderSeq == ct.BrokerOrderSeq);
    if (!ret) return ret;
    ret = ret && (TradeSource == ct.TradeSource);
    if (!ret) return ret;

    return ret;
  }
};

///����ı���
struct CShfeFtdcSequencialOrderField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///���ر������
  TShfeFtdcOrderLocalIDType	OrderLocalID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///��Ա����
  TShfeFtdcParticipantIDType	ParticipantID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///��Լ�ڽ������Ĵ���
  TShfeFtdcExchangeInstIDType	ExchangeInstID;
  ///����������Ա����
  TShfeFtdcTraderIDType	TraderID;
  ///��װ���
  TShfeFtdcInstallIDType	InstallID;
  ///�����ύ״̬
  TShfeFtdcOrderSubmitStatusType	OrderSubmitStatus;
  ///������ʾ���
  TShfeFtdcSequenceNoType	NotifySequence;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///�������
  TShfeFtdcOrderSysIDType	OrderSysID;
  ///������Դ
  TShfeFtdcOrderSourceType	OrderSource;
  ///����״̬
  TShfeFtdcOrderStatusType	OrderStatus;
  ///��������
  TShfeFtdcOrderTypeType	OrderType;
  ///��ɽ�����
  TShfeFtdcVolumeType	VolumeTraded;
  ///ʣ������
  TShfeFtdcVolumeType	VolumeTotal;
  ///��������
  TShfeFtdcDateType	InsertDate;
  ///ί��ʱ��
  TShfeFtdcTimeType	InsertTime;
  ///����ʱ��
  TShfeFtdcTimeType	ActiveTime;
  ///����ʱ��
  TShfeFtdcTimeType	SuspendTime;
  ///����޸�ʱ��
  TShfeFtdcTimeType	UpdateTime;
  ///����ʱ��
  TShfeFtdcTimeType	CancelTime;
  ///����޸Ľ���������Ա����
  TShfeFtdcTraderIDType	ActiveTraderID;
  ///�����Ա���
  TShfeFtdcParticipantIDType	ClearingPartID;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;
  ///�û��˲�Ʒ��Ϣ
  TShfeFtdcProductInfoType	UserProductInfo;
  ///״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///�����û�����
  TShfeFtdcUserIDType	ActiveUserID;
  ///���͹�˾�������
  TShfeFtdcSequenceNoType	BrokerOrderSeq;
  ///��ر���
  TShfeFtdcOrderSysIDType	RelativeOrderSysID;
  ///֣�����ɽ�����
  TShfeFtdcVolumeType	ZCETotalTradedVolume;

  bool operator==(const CShfeFtdcSequencialOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderLocalID, ct.OrderLocalID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParticipantID, ct.ParticipantID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeInstID, ct.ExchangeInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(TraderID, ct.TraderID) == 0);
    if (!ret) return ret;
    ret = ret && (InstallID == ct.InstallID);
    if (!ret) return ret;
    ret = ret && (OrderSubmitStatus == ct.OrderSubmitStatus);
    if (!ret) return ret;
    ret = ret && (NotifySequence == ct.NotifySequence);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderSysID, ct.OrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderSource == ct.OrderSource);
    if (!ret) return ret;
    ret = ret && (OrderStatus == ct.OrderStatus);
    if (!ret) return ret;
    ret = ret && (OrderType == ct.OrderType);
    if (!ret) return ret;
    ret = ret && (VolumeTraded == ct.VolumeTraded);
    if (!ret) return ret;
    ret = ret && (VolumeTotal == ct.VolumeTotal);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertDate, ct.InsertDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InsertTime, ct.InsertTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTime, ct.ActiveTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SuspendTime, ct.SuspendTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UpdateTime, ct.UpdateTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CancelTime, ct.CancelTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveTraderID, ct.ActiveTraderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClearingPartID, ct.ClearingPartID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (strcmp(UserProductInfo, ct.UserProductInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (strcmp(ActiveUserID, ct.ActiveUserID) == 0);
    if (!ret) return ret;
    ret = ret && (BrokerOrderSeq == ct.BrokerOrderSeq);
    if (!ret) return ret;
    ret = ret && (strcmp(RelativeOrderSysID, ct.RelativeOrderSysID) == 0);
    if (!ret) return ret;
    ret = ret && (ZCETotalTradedVolume == ct.ZCETotalTradedVolume);
    if (!ret) return ret;

    return ret;
  }
};

///����ľ��͹�˾�û��¼�
struct CShfeFtdcSequencialBrokerUserEventField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�û��¼�����
  TShfeFtdcUserEventTypeType	UserEventType;
  ///�û��¼����
  TShfeFtdcSequenceNoType	EventSequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///�û��¼���Ϣ
  TShfeFtdcUserEventInfoType	UserEventInfo;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;

  bool operator==(const CShfeFtdcSequencialBrokerUserEventField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (UserEventType == ct.UserEventType);
    if (!ret) return ret;
    ret = ret && (EventSequenceNo == ct.EventSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserEventInfo, ct.UserEventInfo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ĳֲ�
struct CShfeFtdcSequencialPositionField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֲֶ�շ���
  TShfeFtdcPosiDirectionType	PosiDirection;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�ֲ�����
  TShfeFtdcPositionDateType	PositionDate;
  ///���ճֲ�
  TShfeFtdcVolumeType	YdPosition;
  ///���ճֲ�
  TShfeFtdcVolumeType	Position;
  ///��ͷ����
  TShfeFtdcVolumeType	LongFrozen;
  ///��ͷ����
  TShfeFtdcVolumeType	ShortFrozen;
  ///���ֶ�����
  TShfeFtdcMoneyType	LongFrozenAmount;
  ///���ֶ�����
  TShfeFtdcMoneyType	ShortFrozenAmount;
  ///������
  TShfeFtdcVolumeType	OpenVolume;
  ///ƽ����
  TShfeFtdcVolumeType	CloseVolume;
  ///���ֽ��
  TShfeFtdcMoneyType	OpenAmount;
  ///ƽ�ֽ��
  TShfeFtdcMoneyType	CloseAmount;
  ///�ֲֳɱ�
  TShfeFtdcMoneyType	PositionCost;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///ռ�õı�֤��
  TShfeFtdcMoneyType	UseMargin;
  ///����ı�֤��
  TShfeFtdcMoneyType	FrozenMargin;
  ///������ʽ�
  TShfeFtdcMoneyType	FrozenCash;
  ///�����������
  TShfeFtdcMoneyType	FrozenCommission;
  ///�ʽ���
  TShfeFtdcMoneyType	CashIn;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///�ϴν����
  TShfeFtdcPriceType	PreSettlementPrice;
  ///���ν����
  TShfeFtdcPriceType	SettlementPrice;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///������
  TShfeFtdcSettlementIDType	SettlementID;
  ///���ֳɱ�
  TShfeFtdcMoneyType	OpenCost;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///��ϳɽ��γɵĳֲ�
  TShfeFtdcVolumeType	CombPosition;
  ///��϶�ͷ����
  TShfeFtdcVolumeType	CombLongFrozen;
  ///��Ͽ�ͷ����
  TShfeFtdcVolumeType	CombShortFrozen;
  ///���ն���ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByDate;
  ///��ʶԳ�ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfitByTrade;
  ///���ճֲ�
  TShfeFtdcVolumeType	TodayPosition;
  ///��֤����
  TShfeFtdcRatioType	MarginRateByMoney;
  ///��֤����(������)
  TShfeFtdcRatioType	MarginRateByVolume;

  bool operator==(const CShfeFtdcSequencialPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PosiDirection == ct.PosiDirection);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (PositionDate == ct.PositionDate);
    if (!ret) return ret;
    ret = ret && (YdPosition == ct.YdPosition);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (LongFrozen == ct.LongFrozen);
    if (!ret) return ret;
    ret = ret && (ShortFrozen == ct.ShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongFrozenAmount, ct.LongFrozenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortFrozenAmount, ct.ShortFrozenAmount));
    if (!ret) return ret;
    ret = ret && (OpenVolume == ct.OpenVolume);
    if (!ret) return ret;
    ret = ret && (CloseVolume == ct.CloseVolume);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenAmount, ct.OpenAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseAmount, ct.CloseAmount));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionCost, ct.PositionCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(UseMargin, ct.UseMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCash, ct.FrozenCash));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CashIn, ct.CashIn));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreSettlementPrice, ct.PreSettlementPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SettlementPrice, ct.SettlementPrice));
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SettlementID == ct.SettlementID);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OpenCost, ct.OpenCost));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (CombPosition == ct.CombPosition);
    if (!ret) return ret;
    ret = ret && (CombLongFrozen == ct.CombLongFrozen);
    if (!ret) return ret;
    ret = ret && (CombShortFrozen == ct.CombShortFrozen);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByDate, ct.CloseProfitByDate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfitByTrade, ct.CloseProfitByTrade));
    if (!ret) return ret;
    ret = ret && (TodayPosition == ct.TodayPosition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByMoney, ct.MarginRateByMoney));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRateByVolume, ct.MarginRateByVolume));
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�ͻ�����֪ͨģ��
struct CShfeFtdcQryRiskNotifyPatternField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����ֶ�
  TShfeFtdcCommentType	Reserve;

  bool operator==(const CShfeFtdcQryRiskNotifyPatternField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�����֪ͨģ��
struct CShfeFtdcRiskNotifyPatternField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û����룬�����޸�ģ��ʱ��Ч
  TShfeFtdcUserIDType	UserID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///�Ƿ�����
  TShfeFtdcBoolType	IsActive;
  ///�Ƿ��Զ�ϵͳ֪ͨ
  TShfeFtdcBoolType	IsAutoSystem;
  ///�Ƿ��Զ�����֪ͨ
  TShfeFtdcBoolType	IsAutoSMS;
  ///�Ƿ��Զ��ʼ�֪ͨ
  TShfeFtdcBoolType	IsAutoEmail;
  ///ϵͳ֪ͨģ������
  TShfeFtdcRiskNofityInfoType	SystemPattern;
  ///����֪ͨģ������
  TShfeFtdcRiskNofityInfoType	SMSPattern;
  ///�ʼ�֪ͨģ������
  TShfeFtdcRiskNofityInfoType	EmailPattern;
  ///Ԥ������(��ʱֻ����warnlevel)
  TShfeFtdcAddressType	Reserve;

  bool operator==(const CShfeFtdcRiskNotifyPatternField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (IsAutoSystem == ct.IsAutoSystem);
    if (!ret) return ret;
    ret = ret && (IsAutoSMS == ct.IsAutoSMS);
    if (!ret) return ret;
    ret = ret && (IsAutoEmail == ct.IsAutoEmail);
    if (!ret) return ret;
    ret = ret && (strcmp(SystemPattern, ct.SystemPattern) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SMSPattern, ct.SMSPattern) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EmailPattern, ct.EmailPattern) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�ͻ�����֪ͨģ�����Զ��滻�ֶ�
struct CShfeFtdcQryRiskNotifyTokenField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcQryRiskNotifyTokenField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�����֪ͨģ�����Զ��滻�ֶ�
struct CShfeFtdcRiskNotifyTokenField
{
  ///�Զ��滻�ֶ�
  TShfeFtdcExchangeNameType	Token;
  ///�Զ��滻�ֶε�����
  TShfeFtdcBrokerNameType	Description;

  bool operator==(const CShfeFtdcRiskNotifyTokenField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(Token, ct.Token) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Description, ct.Description) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�����Ϳͻ�����֪ͨ������
struct CShfeFtdcRiskNotifyCommandField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�Ƿ���ϵͳ֪ͨ
  TShfeFtdcBoolType	IsAutoSystem;
  ///�Ƿ��Ͷ���֪ͨ
  TShfeFtdcBoolType	IsAutoSMS;
  ///�Ƿ����ʼ�֪ͨ
  TShfeFtdcBoolType	IsAutoEmail;
  ///�����ֶ�
  TShfeFtdcCommentType	Reserve;
  ///֪ͨģ������
  TShfeFtdcRiskNofityInfoType	Pattern;
  ///�Ƿ�����������֪ͨ
  TShfeFtdcBoolType	IsNormal;
  ///�Ƿ������;�ʾ֪ͨ
  TShfeFtdcBoolType	IsWarn;

  bool operator==(const CShfeFtdcRiskNotifyCommandField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (IsAutoSystem == ct.IsAutoSystem);
    if (!ret) return ret;
    ret = ret && (IsAutoSMS == ct.IsAutoSMS);
    if (!ret) return ret;
    ret = ret && (IsAutoEmail == ct.IsAutoEmail);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Pattern, ct.Pattern) == 0);
    if (!ret) return ret;
    ret = ret && (IsNormal == ct.IsNormal);
    if (!ret) return ret;
    ret = ret && (IsWarn == ct.IsWarn);
    if (!ret) return ret;

    return ret;
  }
};

///����Ŀͻ�����֪ͨ�¼�
struct CShfeFtdcSequencialRiskNotifyField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����͸÷���֪ͨ���û�����
  TShfeFtdcUserIDType	UserID;
  ///���û�����ķ���֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�Ƿ���ϵͳ֪ͨ
  TShfeFtdcBoolType	IsAutoSystem;
  ///�Ƿ��Ͷ���֪ͨ
  TShfeFtdcBoolType	IsAutoSMS;
  ///�Ƿ����ʼ�֪ͨ
  TShfeFtdcBoolType	IsAutoEmail;
  ///ϵͳ֪ͨ����
  TShfeFtdcRiskNofityInfoType	SystemMsg;
  ///����֪ͨ����
  TShfeFtdcRiskNofityInfoType	SMSMsg;
  ///�ʼ�֪ͨ����
  TShfeFtdcRiskNofityInfoType	EmailMsg;

  bool operator==(const CShfeFtdcSequencialRiskNotifyField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (IsAutoSystem == ct.IsAutoSystem);
    if (!ret) return ret;
    ret = ret && (IsAutoSMS == ct.IsAutoSMS);
    if (!ret) return ret;
    ret = ret && (IsAutoEmail == ct.IsAutoEmail);
    if (!ret) return ret;
    ret = ret && (strcmp(SystemMsg, ct.SystemMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SMSMsg, ct.SMSMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EmailMsg, ct.EmailMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�����֪ͨ�¼�
struct CShfeFtdcRiskNotifyField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����͸÷���֪ͨ���û�����
  TShfeFtdcUserIDType	UserID;
  ///���û�����ķ���֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�Ƿ���ϵͳ֪ͨ
  TShfeFtdcBoolType	IsAutoSystem;
  ///�Ƿ��Ͷ���֪ͨ
  TShfeFtdcBoolType	IsAutoSMS;
  ///�Ƿ����ʼ�֪ͨ
  TShfeFtdcBoolType	IsAutoEmail;
  ///ϵͳ֪ͨ����
  TShfeFtdcRiskNofityInfoType	SystemMsg;
  ///����֪ͨ����
  TShfeFtdcRiskNofityInfoType	SMSMsg;
  ///�ʼ�֪ͨ����
  TShfeFtdcRiskNofityInfoType	EmailMsg;

  bool operator==(const CShfeFtdcRiskNotifyField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (IsAutoSystem == ct.IsAutoSystem);
    if (!ret) return ret;
    ret = ret && (IsAutoSMS == ct.IsAutoSMS);
    if (!ret) return ret;
    ret = ret && (IsAutoEmail == ct.IsAutoEmail);
    if (!ret) return ret;
    ret = ret && (strcmp(SystemMsg, ct.SystemMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SMSMsg, ct.SMSMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EmailMsg, ct.EmailMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ǿƽ��׼
struct CShfeFtdcForceCloseStandardField
{
  ///ǿƽ��׼
  TShfeFtdcForceCloseLevelType	ForceCloseLevel;
  ///ǿƽ�ʽ��ͷű�׼
  TShfeFtdcForceCloseReleaseType	ForceCloseRelease;
  ///��ͣ�巽��ֲ�����
  TShfeFtdcBoolType	FCNonLimitFirst;

  bool operator==(const CShfeFtdcForceCloseStandardField &ct) const
  {
    bool ret = true;
    ret = ret && (ForceCloseLevel == ct.ForceCloseLevel);
    if (!ret) return ret;
    ret = ret && (ForceCloseRelease == ct.ForceCloseRelease);
    if (!ret) return ret;
    ret = ret && (FCNonLimitFirst == ct.FCNonLimitFirst);
    if (!ret) return ret;

    return ret;
  }
};

///ǿƽ�ֲֹ���
struct CShfeFtdcForceClosePositionRuleField
{
  ///��Ʒ���Լ����
  TShfeFtdcInstrumentIDType	ProductInstrumentID;
  ///ǿƽ�ֲַ���
  TShfeFtdcForceClosePosiDirectionType	FCPosiDirection;
  ///ǿƽͶ���ױ���־
  TShfeFtdcForceCloseHedgeFlagType	FCHedgeFlag;
  ///ǿƽ��ϳֱֲ�־
  TShfeFtdcForceCloseCombPosiFlagType	FCCombPosiFlag;
  ///ǿƽ��ʷ�ֲ�˳��
  TShfeFtdcForceCloseHistoryPosiOrderType	FCHistoryPosiOrder;
  ///ǿƽ�۸�����
  TShfeFtdcForceClosePriceTypeType	FCPrice;
  ///�޼۵�������
  TShfeFtdcVolumeType	PriceTick;
  ///����ǿƽ����������ȼ�
  TShfeFtdcFCRulePriorityType	FCRulePriority;

  bool operator==(const CShfeFtdcForceClosePositionRuleField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ProductInstrumentID, ct.ProductInstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (FCPosiDirection == ct.FCPosiDirection);
    if (!ret) return ret;
    ret = ret && (FCHedgeFlag == ct.FCHedgeFlag);
    if (!ret) return ret;
    ret = ret && (FCCombPosiFlag == ct.FCCombPosiFlag);
    if (!ret) return ret;
    ret = ret && (FCHistoryPosiOrder == ct.FCHistoryPosiOrder);
    if (!ret) return ret;
    ret = ret && (FCPrice == ct.FCPrice);
    if (!ret) return ret;
    ret = ret && (PriceTick == ct.PriceTick);
    if (!ret) return ret;
    ret = ret && (strcmp(FCRulePriority, ct.FCRulePriority) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ǿƽ����
struct CShfeFtdcForceCloseListField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcForceCloseListField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ����ǿƽ�ֲ�
struct CShfeFtdcForceClosePositionField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֲֶ�շ���
  TShfeFtdcPosiDirectionType	PosiDirection;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�ֲ�����
  TShfeFtdcPositionDateType	PositionDate;
  ///��ǰ�ֲ�����
  TShfeFtdcVolumeType	Position;
  ///��ǿƽ�ֲ�����
  TShfeFtdcVolumeType	FCPosition;
  ///ǿƽ�۸�����
  TShfeFtdcForceClosePriceTypeType	FCPriceType;
  ///�޼۵�������
  TShfeFtdcVolumeType	PriceTick;
  ///ǿƽ�۸�
  TShfeFtdcPriceType	FCPrice;
  ///ƽ���ͷŵı�֤��
  TShfeFtdcMoneyType	ReleaseMargin;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///ƽ���ͷŵĽ�������֤��
  TShfeFtdcMoneyType	ExchReleaseMargin;

  bool operator==(const CShfeFtdcForceClosePositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PosiDirection == ct.PosiDirection);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (PositionDate == ct.PositionDate);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (FCPosition == ct.FCPosition);
    if (!ret) return ret;
    ret = ret && (FCPriceType == ct.FCPriceType);
    if (!ret) return ret;
    ret = ret && (PriceTick == ct.PriceTick);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FCPrice, ct.FCPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ReleaseMargin, ct.ReleaseMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchReleaseMargin, ct.ExchReleaseMargin));
    if (!ret) return ret;

    return ret;
  }
};

///ǿƽӦ��
struct CShfeFtdcRspForceClosePositionField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֲֶ�շ���
  TShfeFtdcPosiDirectionType	PosiDirection;
  ///Ͷ���ױ���־
  TShfeFtdcHedgeFlagType	HedgeFlag;
  ///�ֲ�����
  TShfeFtdcPositionDateType	PositionDate;
  ///��ǰ�ֲ�����
  TShfeFtdcVolumeType	Position;
  ///��ǿƽ�ֲ�����
  TShfeFtdcVolumeType	FCPosition;
  ///ǿƽ�۸�����
  TShfeFtdcForceClosePriceTypeType	FCPriceType;
  ///�޼۵�������
  TShfeFtdcVolumeType	PriceTick;
  ///ǿƽ�۸�
  TShfeFtdcPriceType	FCPrice;
  ///ƽ���ͷŵı�֤��
  TShfeFtdcMoneyType	ReleaseMargin;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///ǿƽ�������
  TShfeFtdcForceCloseSceneIdType	FCID;
  ///����ǿƽ��������ʱ��
  TShfeFtdcTimeType	Time;
  ///��ǰʱ�䣨���룩
  TShfeFtdcMillisecType	CurrMillisec;
  ///ƽ���ͷŵĽ�������֤��
  TShfeFtdcMoneyType	ExchReleaseMargin;

  bool operator==(const CShfeFtdcRspForceClosePositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PosiDirection == ct.PosiDirection);
    if (!ret) return ret;
    ret = ret && (HedgeFlag == ct.HedgeFlag);
    if (!ret) return ret;
    ret = ret && (PositionDate == ct.PositionDate);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (FCPosition == ct.FCPosition);
    if (!ret) return ret;
    ret = ret && (FCPriceType == ct.FCPriceType);
    if (!ret) return ret;
    ret = ret && (PriceTick == ct.PriceTick);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FCPrice, ct.FCPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ReleaseMargin, ct.ReleaseMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (strcmp(FCID, ct.FCID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Time, ct.Time) == 0);
    if (!ret) return ret;
    ret = ret && (CurrMillisec == ct.CurrMillisec);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchReleaseMargin, ct.ExchReleaseMargin));
    if (!ret) return ret;

    return ret;
  }
};

///���ǿƽ��������
struct CShfeFtdcRiskForceCloseOrderField
{
  ///���ǿƽ����
  TShfeFtdcForceCloseTypeType	FCType;
  ///����ǿƽ��������ʱ��
  TShfeFtdcTimeType	Time1;
  ///����ǿƽ��������ʱ�䣨���룩
  TShfeFtdcMillisecType	Millisec1;
  ///ǿƽ�����ύʱ��
  TShfeFtdcTimeType	Time2;
  ///ǿƽ�����ύʱ�䣨���룩
  TShfeFtdcMillisecType	Millisec2;
  ///ǿƽ�������
  TShfeFtdcForceCloseSceneIdType	FCSceneId;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///�Ự���
  TShfeFtdcSessionIDType	SessionID;

  bool operator==(const CShfeFtdcRiskForceCloseOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (FCType == ct.FCType);
    if (!ret) return ret;
    ret = ret && (strcmp(Time1, ct.Time1) == 0);
    if (!ret) return ret;
    ret = ret && (Millisec1 == ct.Millisec1);
    if (!ret) return ret;
    ret = ret && (strcmp(Time2, ct.Time2) == 0);
    if (!ret) return ret;
    ret = ret && (Millisec2 == ct.Millisec2);
    if (!ret) return ret;
    ret = ret && (strcmp(FCSceneId, ct.FCSceneId) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;

    return ret;
  }
};

///ǰ��״̬����
struct CShfeFtdcFrontStatusReportField
{
  ///ǰ��time(NULL)
  TShfeFtdcSessionIDType	Seconds;

  bool operator==(const CShfeFtdcFrontStatusReportField &ct) const
  {
    bool ret = true;
    ret = ret && (Seconds == ct.Seconds);
    if (!ret) return ret;

    return ret;
  }
};

///���ֱֲ�֤��ָ�����
struct CShfeFtdcIndexNPPField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Ʒ����
  TShfeFtdcInstrumentIDsType	ProductIDs;
  ///����ֵ(�ڲ������Ǿ�ʾֵ,��ָ��FullIndexNPP����ָ��ֵ)
  TShfeFtdcRatioType	WarnLevel;

  bool operator==(const CShfeFtdcIndexNPPField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDs, ct.ProductIDs) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(WarnLevel, ct.WarnLevel));
    if (!ret) return ret;

    return ret;
  }
};

///���ֱֲ�֤��ָ��ֵ
struct CShfeFtdcFullIndexNPPField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Ʒ����
  TShfeFtdcInstrumentIDsType	ProductIDs;
  ///����ֵ(�ڲ������Ǿ�ʾֵ,��ָ��FullIndexNPP����ָ��ֵ)
  TShfeFtdcRatioType	WarnLevel;
  ///��ͷ��֤��
  TShfeFtdcMoneyType	LongMargin;
  ///��ͷ��֤��
  TShfeFtdcMoneyType	ShortMargin;
  ///��Ȩ��
  TShfeFtdcMoneyType	Balance;
  ///������ֵ
  TShfeFtdcRatioType	RealWarnLevel;

  bool operator==(const CShfeFtdcFullIndexNPPField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ProductIDs, ct.ProductIDs) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(WarnLevel, ct.WarnLevel));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LongMargin, ct.LongMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ShortMargin, ct.ShortMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance, ct.Balance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(RealWarnLevel, ct.RealWarnLevel));
    if (!ret) return ret;

    return ret;
  }
};

///һ���ѯ����
struct CShfeFtdcNormalRiskQueryField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;

  bool operator==(const CShfeFtdcNormalRiskQueryField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��ȫ�۸񲨶���Χ����
struct CShfeFtdcQrySafePriceRangeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ�۸񲨶�����
  TShfeFtdcPriceVaryAlgoType	PriceVaryAlgo;
  ///�۸񲨶��Ļ�׼������(v5.1.2֮�����)
  TShfeFtdcPriceTypeType	BasePriceType;
  ///��������
  TShfeFtdcNotifyClassType	RiskLevel;
  ///����Լ˳�򲨶�ʱ���������ͣ�����
  TShfeFtdcVolumeType	MaxLimitDay;

  bool operator==(const CShfeFtdcQrySafePriceRangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (PriceVaryAlgo == ct.PriceVaryAlgo);
    if (!ret) return ret;
    ret = ret && (BasePriceType == ct.BasePriceType);
    if (!ret) return ret;
    ret = ret && (RiskLevel == ct.RiskLevel);
    if (!ret) return ret;
    ret = ret && (MaxLimitDay == ct.MaxLimitDay);
    if (!ret) return ret;

    return ret;
  }
};

///�۸񲨶�����
struct CShfeFtdcPriceVaryParamField
{
  ///��Լ���
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///�۸񲨶�����
  TShfeFtdcPriceVaryDirType	Direction;
  ///�۸񲨶�����(>=0��Ч)
  TShfeFtdcRatioType	Pecent;
  ///�۸񲨶��Ļ�׼������
  TShfeFtdcPriceTypeType	BasePriceType;
  ///�Զ����׼��
  TShfeFtdcPriceType	BasePrice;

  bool operator==(const CShfeFtdcPriceVaryParamField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Pecent, ct.Pecent));
    if (!ret) return ret;
    ret = ret && (BasePriceType == ct.BasePriceType);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BasePrice, ct.BasePrice));
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��ȫ�۸񲨶���ΧӦ��
struct CShfeFtdcRspSafePriceRangeField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��׼�۸�
  TShfeFtdcPriceType	BasePrice;
  ///�����۸�
  TShfeFtdcPriceType	LimitPrice;
  ///�ܲ�������
  TShfeFtdcRatioType	VaryPecent;
  ///ͣ�����
  TShfeFtdcVolumeType	LimitDayCnt;
  ///�ܲ�������
  TShfeFtdcVolumeType	VaryTickCnt;
  ///ͣ�����
  TShfeFtdcVolumeType	LimitTickCnt;
  ///�Ƿ��в�������
  TShfeFtdcBoolType	HasLimit;
  ///�ǵ�ͣ
  TShfeFtdcRatioType	PecentPerLimit;
  ///ͣ�岨��
  TShfeFtdcRatioType	InLimitVaryPct;
  ///ͣ���Ⲩ��
  TShfeFtdcRatioType	OutLimitVaryPct;
  ///�����
  TShfeFtdcVolumeType	LongVol;
  ///������
  TShfeFtdcVolumeType	ShortVol;
  ///��������
  TShfeFtdcPriceVaryDirType	Direction;
  ///��������
  TShfeFtdcPriceVaryDirType	BadDir;

  bool operator==(const CShfeFtdcRspSafePriceRangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BasePrice, ct.BasePrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(VaryPecent, ct.VaryPecent));
    if (!ret) return ret;
    ret = ret && (LimitDayCnt == ct.LimitDayCnt);
    if (!ret) return ret;
    ret = ret && (VaryTickCnt == ct.VaryTickCnt);
    if (!ret) return ret;
    ret = ret && (LimitTickCnt == ct.LimitTickCnt);
    if (!ret) return ret;
    ret = ret && (HasLimit == ct.HasLimit);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PecentPerLimit, ct.PecentPerLimit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(InLimitVaryPct, ct.InLimitVaryPct));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(OutLimitVaryPct, ct.OutLimitVaryPct));
    if (!ret) return ret;
    ret = ret && (LongVol == ct.LongVol);
    if (!ret) return ret;
    ret = ret && (ShortVol == ct.ShortVol);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (BadDir == ct.BadDir);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߲�ֲ�
struct CShfeFtdcFullInvestorGroupField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ���߷�������
  TShfeFtdcInvestorGroupNameType	InvestorGroupName;

  bool operator==(const CShfeFtdcFullInvestorGroupField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupName, ct.InvestorGroupName) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߲�ѯ����
struct CShfeFtdcInvestorGroupMapField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcInvestorGroupMapField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�۸񲨶���Ͷ���߷��յ�Ӱ��
struct CShfeFtdcQryPriceVaryEffectField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��������
  TShfeFtdcNotifyClassType	RiskLevel;

  bool operator==(const CShfeFtdcQryPriceVaryEffectField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (RiskLevel == ct.RiskLevel);
    if (!ret) return ret;

    return ret;
  }
};

///���͹�˾Ͷ����
struct CShfeFtdcBrokerInvestorField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;

  bool operator==(const CShfeFtdcBrokerInvestorField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ϵͳ����
struct CShfeFtdcTradeParamField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///��������
  TShfeFtdcTradeParamIDType	TradeParamID;
  ///��������ֵ
  TShfeFtdcSettlementParamValueType	TradeParamValue;
  ///��ע
  TShfeFtdcMemoType	Memo;

  bool operator==(const CShfeFtdcTradeParamField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (TradeParamID == ct.TradeParamID);
    if (!ret) return ret;
    ret = ret && (strcmp(TradeParamValue, ct.TradeParamValue) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Memo, ct.Memo) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///���Ԥ��
struct CShfeFtdcRiskParkedOrderField
{
  ///Ԥ�񱨵����
  TShfeFtdcParkedOrderIDType	ParkedOrderID;
  ///Ԥ�񵥱��ر��
  TShfeFtdcParkedOrderIDType	LocalID;
  ///����û�����
  TShfeFtdcRiskUserTypeType	UserType;
  ///Ԥ��״̬
  TShfeFtdcRiskParkedOrderStatusType	Status;
  ///Ԥ��״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///��������
  TShfeFtdcOrderTriggerTypeType	TriggerType;
  ///���׽׶�
  TShfeFtdcVolumeType	TradeSegment;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///���ǿƽ����
  TShfeFtdcForceCloseTypeType	FCType;
  ///����ǿƽ��������ʱ��
  TShfeFtdcTimeType	Time1;
  ///����ǿƽ��������ʱ�䣨���룩
  TShfeFtdcMillisecType	Millisec1;
  ///ǿƽ�����ύʱ��
  TShfeFtdcTimeType	Time2;
  ///ǿƽ�����ύʱ�䣨���룩
  TShfeFtdcMillisecType	Millisec2;
  ///ǿƽ�������
  TShfeFtdcForceCloseSceneIdType	FCSceneId;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///�����ύ״̬
  TShfeFtdcOrderSubmitStatusType	OrderSubmitStatus;
  ///����״̬
  TShfeFtdcOrderStatusType	OrderStatus;
  ///����״̬��Ϣ
  TShfeFtdcErrorMsgType	OrderStatusMsg;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;
  ///Ԥ��ʱ��
  TShfeFtdcTimeType	ParkedTime;
  ///Ԥ����
  TShfeFtdcVolumeType	OriginalParkedVol;
  ///Ԥ��ʱ��ƽ��
  TShfeFtdcVolumeType	MaxCloseVol1;
  ///����ʱ��ƽ��
  TShfeFtdcVolumeType	MaxCloseVol2;
  ///Ԥ��ʱ׷��
  TShfeFtdcMoneyType	Call1;
  ///����ʱ׷��
  TShfeFtdcMoneyType	Call2;
  ///Ԥ��ʱ�����
  TShfeFtdcMoneyType	MoneyIO1;
  ///����ʱ�����
  TShfeFtdcMoneyType	MoneyIO2;
  ///ɾ��ԭ��
  TShfeFtdcCommentType	DeleteReason;
  ///ǿƽ�ʽ��ͷű�׼
  TShfeFtdcForceCloseReleaseType	ForceCloseRelease;

  bool operator==(const CShfeFtdcRiskParkedOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ParkedOrderID, ct.ParkedOrderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LocalID, ct.LocalID) == 0);
    if (!ret) return ret;
    ret = ret && (UserType == ct.UserType);
    if (!ret) return ret;
    ret = ret && (Status == ct.Status);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (TriggerType == ct.TriggerType);
    if (!ret) return ret;
    ret = ret && (TradeSegment == ct.TradeSegment);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (FCType == ct.FCType);
    if (!ret) return ret;
    ret = ret && (strcmp(Time1, ct.Time1) == 0);
    if (!ret) return ret;
    ret = ret && (Millisec1 == ct.Millisec1);
    if (!ret) return ret;
    ret = ret && (strcmp(Time2, ct.Time2) == 0);
    if (!ret) return ret;
    ret = ret && (Millisec2 == ct.Millisec2);
    if (!ret) return ret;
    ret = ret && (strcmp(FCSceneId, ct.FCSceneId) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (OrderSubmitStatus == ct.OrderSubmitStatus);
    if (!ret) return ret;
    ret = ret && (OrderStatus == ct.OrderStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderStatusMsg, ct.OrderStatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedTime, ct.ParkedTime) == 0);
    if (!ret) return ret;
    ret = ret && (OriginalParkedVol == ct.OriginalParkedVol);
    if (!ret) return ret;
    ret = ret && (MaxCloseVol1 == ct.MaxCloseVol1);
    if (!ret) return ret;
    ret = ret && (MaxCloseVol2 == ct.MaxCloseVol2);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Call1, ct.Call1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Call2, ct.Call2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MoneyIO1, ct.MoneyIO1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MoneyIO2, ct.MoneyIO2));
    if (!ret) return ret;
    ret = ret && (strcmp(DeleteReason, ct.DeleteReason) == 0);
    if (!ret) return ret;
    ret = ret && (ForceCloseRelease == ct.ForceCloseRelease);
    if (!ret) return ret;

    return ret;
  }
};

///ɾ�����Ԥ��
struct CShfeFtdcRemoveRiskParkedOrderField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ԥ�񱨵����
  TShfeFtdcParkedOrderIDType	ParkedOrderID;

  bool operator==(const CShfeFtdcRemoveRiskParkedOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedOrderID, ct.ParkedOrderID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ķ��Ԥ��
struct CShfeFtdcSeqRiskParkedOrderField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///Ԥ�񱨵����
  TShfeFtdcParkedOrderIDType	ParkedOrderID;
  ///Ԥ�񵥱��ر��
  TShfeFtdcParkedOrderIDType	LocalID;
  ///����û�����
  TShfeFtdcRiskUserTypeType	UserType;
  ///Ԥ��״̬
  TShfeFtdcRiskParkedOrderStatusType	Status;
  ///Ԥ��״̬��Ϣ
  TShfeFtdcErrorMsgType	StatusMsg;
  ///��������
  TShfeFtdcOrderTriggerTypeType	TriggerType;
  ///���׽׶�
  TShfeFtdcVolumeType	TradeSegment;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///���ǿƽ����
  TShfeFtdcForceCloseTypeType	FCType;
  ///����ǿƽ��������ʱ��
  TShfeFtdcTimeType	Time1;
  ///����ǿƽ��������ʱ�䣨���룩
  TShfeFtdcMillisecType	Millisec1;
  ///ǿƽ�����ύʱ��
  TShfeFtdcTimeType	Time2;
  ///ǿƽ�����ύʱ�䣨���룩
  TShfeFtdcMillisecType	Millisec2;
  ///ǿƽ�������
  TShfeFtdcForceCloseSceneIdType	FCSceneId;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������
  TShfeFtdcOrderRefType	OrderRef;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�����۸�����
  TShfeFtdcOrderPriceTypeType	OrderPriceType;
  ///��������
  TShfeFtdcDirectionType	Direction;
  ///��Ͽ�ƽ��־
  TShfeFtdcCombOffsetFlagType	CombOffsetFlag;
  ///���Ͷ���ױ���־
  TShfeFtdcCombHedgeFlagType	CombHedgeFlag;
  ///�۸�
  TShfeFtdcPriceType	LimitPrice;
  ///����
  TShfeFtdcVolumeType	VolumeTotalOriginal;
  ///��Ч������
  TShfeFtdcTimeConditionType	TimeCondition;
  ///GTD����
  TShfeFtdcDateType	GTDDate;
  ///�ɽ�������
  TShfeFtdcVolumeConditionType	VolumeCondition;
  ///��С�ɽ���
  TShfeFtdcVolumeType	MinVolume;
  ///��������
  TShfeFtdcContingentConditionType	ContingentCondition;
  ///ֹ���
  TShfeFtdcPriceType	StopPrice;
  ///ǿƽԭ��
  TShfeFtdcForceCloseReasonType	ForceCloseReason;
  ///�Զ������־
  TShfeFtdcBoolType	IsAutoSuspend;
  ///ҵ��Ԫ
  TShfeFtdcBusinessUnitType	BusinessUnit;
  ///������
  TShfeFtdcRequestIDType	RequestID;
  ///�û�ǿ����־
  TShfeFtdcBoolType	UserForceClose;
  ///�����ύ״̬
  TShfeFtdcOrderSubmitStatusType	OrderSubmitStatus;
  ///����״̬
  TShfeFtdcOrderStatusType	OrderStatus;
  ///����״̬��Ϣ
  TShfeFtdcErrorMsgType	OrderStatusMsg;
  ///�������
  TShfeFtdcErrorIDType	ErrorID;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;
  ///Ԥ��ʱ��
  TShfeFtdcTimeType	ParkedTime;
  ///Ԥ����
  TShfeFtdcVolumeType	OriginalParkedVol;
  ///Ԥ��ʱ��ƽ��
  TShfeFtdcVolumeType	MaxCloseVol1;
  ///����ʱ��ƽ��
  TShfeFtdcVolumeType	MaxCloseVol2;
  ///Ԥ��ʱ׷��
  TShfeFtdcMoneyType	Call1;
  ///����ʱ׷��
  TShfeFtdcMoneyType	Call2;
  ///Ԥ��ʱ�����
  TShfeFtdcMoneyType	MoneyIO1;
  ///����ʱ�����
  TShfeFtdcMoneyType	MoneyIO2;
  ///ɾ��ԭ��
  TShfeFtdcCommentType	DeleteReason;
  ///ǿƽ�ʽ��ͷű�׼
  TShfeFtdcForceCloseReleaseType	ForceCloseRelease;

  bool operator==(const CShfeFtdcSeqRiskParkedOrderField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedOrderID, ct.ParkedOrderID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(LocalID, ct.LocalID) == 0);
    if (!ret) return ret;
    ret = ret && (UserType == ct.UserType);
    if (!ret) return ret;
    ret = ret && (Status == ct.Status);
    if (!ret) return ret;
    ret = ret && (strcmp(StatusMsg, ct.StatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (TriggerType == ct.TriggerType);
    if (!ret) return ret;
    ret = ret && (TradeSegment == ct.TradeSegment);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (FCType == ct.FCType);
    if (!ret) return ret;
    ret = ret && (strcmp(Time1, ct.Time1) == 0);
    if (!ret) return ret;
    ret = ret && (Millisec1 == ct.Millisec1);
    if (!ret) return ret;
    ret = ret && (strcmp(Time2, ct.Time2) == 0);
    if (!ret) return ret;
    ret = ret && (Millisec2 == ct.Millisec2);
    if (!ret) return ret;
    ret = ret && (strcmp(FCSceneId, ct.FCSceneId) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderRef, ct.OrderRef) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (OrderPriceType == ct.OrderPriceType);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombOffsetFlag[i] == ct.CombOffsetFlag[i]);
      if (!ret) return ret;
    }
    for (int i = 0; i < 4; ++i) {
      ret = ret && (CombHedgeFlag[i] == ct.CombHedgeFlag[i]);
      if (!ret) return ret;
    }
    ret = ret && (EQUALDOUBLE(LimitPrice, ct.LimitPrice));
    if (!ret) return ret;
    ret = ret && (VolumeTotalOriginal == ct.VolumeTotalOriginal);
    if (!ret) return ret;
    ret = ret && (TimeCondition == ct.TimeCondition);
    if (!ret) return ret;
    ret = ret && (strcmp(GTDDate, ct.GTDDate) == 0);
    if (!ret) return ret;
    ret = ret && (VolumeCondition == ct.VolumeCondition);
    if (!ret) return ret;
    ret = ret && (MinVolume == ct.MinVolume);
    if (!ret) return ret;
    ret = ret && (ContingentCondition == ct.ContingentCondition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(StopPrice, ct.StopPrice));
    if (!ret) return ret;
    ret = ret && (ForceCloseReason == ct.ForceCloseReason);
    if (!ret) return ret;
    ret = ret && (IsAutoSuspend == ct.IsAutoSuspend);
    if (!ret) return ret;
    ret = ret && (strcmp(BusinessUnit, ct.BusinessUnit) == 0);
    if (!ret) return ret;
    ret = ret && (RequestID == ct.RequestID);
    if (!ret) return ret;
    ret = ret && (UserForceClose == ct.UserForceClose);
    if (!ret) return ret;
    ret = ret && (OrderSubmitStatus == ct.OrderSubmitStatus);
    if (!ret) return ret;
    ret = ret && (OrderStatus == ct.OrderStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderStatusMsg, ct.OrderStatusMsg) == 0);
    if (!ret) return ret;
    ret = ret && (ErrorID == ct.ErrorID);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParkedTime, ct.ParkedTime) == 0);
    if (!ret) return ret;
    ret = ret && (OriginalParkedVol == ct.OriginalParkedVol);
    if (!ret) return ret;
    ret = ret && (MaxCloseVol1 == ct.MaxCloseVol1);
    if (!ret) return ret;
    ret = ret && (MaxCloseVol2 == ct.MaxCloseVol2);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Call1, ct.Call1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Call2, ct.Call2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MoneyIO1, ct.MoneyIO1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MoneyIO2, ct.MoneyIO2));
    if (!ret) return ret;
    ret = ret && (strcmp(DeleteReason, ct.DeleteReason) == 0);
    if (!ret) return ret;
    ret = ret && (ForceCloseRelease == ct.ForceCloseRelease);
    if (!ret) return ret;

    return ret;
  }
};

///�����Ͷ������Ϣ
struct CShfeFtdcRiskInvestorInfoField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ֻ�
  TShfeFtdcTelephoneType	Mobile;
  ///�����ʼ�
  TShfeFtdcEMailType	EMail;
  ///�Ƿ��������ʼ�
  TShfeFtdcBoolType	IsEMail;
  ///�Ƿ��������ʼ�
  TShfeFtdcBoolType	IsSMS;
  ///Ͷ��������
  TShfeFtdcInvestorTypeType	InvestorType;
  ///���Ҵ���
  TShfeFtdcUOACountryCodeType	PhoneCountryCode;
  ///����
  TShfeFtdcAreaCodeType	PhoneAreaCode;
  ///������Ȩ�˹��Ҵ���
  TShfeFtdcUOACountryCodeType	OpenPhoneCountryCode;
  ///������Ȩ������
  TShfeFtdcAreaCodeType	OpenPhoneAreaCode;
  ///ָ���µ��˹��Ҵ���
  TShfeFtdcUOACountryCodeType	OrderPhoneCountryCode;
  ///ָ���µ�������
  TShfeFtdcAreaCodeType	OrderPhoneAreaCode;
  ///�ʽ�����˹��Ҵ���
  TShfeFtdcUOACountryCodeType	FundPhoneCountryCode;
  ///�ʽ����������
  TShfeFtdcAreaCodeType	FundPhoneAreaCode;
  ///���㵥ȷ���˹��Ҵ���
  TShfeFtdcUOACountryCodeType	SettlePhoneCountryCode;
  ///���㵥ȷ��������
  TShfeFtdcAreaCodeType	SettlePhoneAreaCode;

  bool operator==(const CShfeFtdcRiskInvestorInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Mobile, ct.Mobile) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EMail, ct.EMail) == 0);
    if (!ret) return ret;
    ret = ret && (IsEMail == ct.IsEMail);
    if (!ret) return ret;
    ret = ret && (IsSMS == ct.IsSMS);
    if (!ret) return ret;
    ret = ret && (InvestorType == ct.InvestorType);
    if (!ret) return ret;
    ret = ret && (strcmp(PhoneCountryCode, ct.PhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(PhoneAreaCode, ct.PhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenPhoneCountryCode, ct.OpenPhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenPhoneAreaCode, ct.OpenPhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderPhoneCountryCode, ct.OrderPhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OrderPhoneAreaCode, ct.OrderPhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundPhoneCountryCode, ct.FundPhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(FundPhoneAreaCode, ct.FundPhoneAreaCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlePhoneCountryCode, ct.SettlePhoneCountryCode) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SettlePhoneAreaCode, ct.SettlePhoneAreaCode) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�����֪ͨ�汾A
struct CShfeFtdcRiskNotifyAField
{
  ///����֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����͸÷���֪ͨ���û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	NotifyMethod;
  ///����֪ͨ״̬
  TShfeFtdcRiskNotifyStatusType	NotifyStatus;
  ///֪ͨ����
  TShfeFtdcRiskNofityInfoType	Message;
  ///Ԥ���ֶ�(�˹�֪ͨ-֪ͨ����Ա������Ϊ����ԭ��)
  TShfeFtdcCommentType	Reserve;

  bool operator==(const CShfeFtdcRiskNotifyAField &ct) const
  {
    bool ret = true;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (NotifyMethod == ct.NotifyMethod);
    if (!ret) return ret;
    ret = ret && (NotifyStatus == ct.NotifyStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(Message, ct.Message) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����Ŀͻ�����֪ͨ�汾A
struct CShfeFtdcSeqRiskNotifyAField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///����֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����͸÷���֪ͨ���û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	NotifyMethod;
  ///����֪ͨ״̬
  TShfeFtdcRiskNotifyStatusType	NotifyStatus;
  ///֪ͨ����
  TShfeFtdcRiskNofityInfoType	Message;
  ///Ԥ���ֶ�(�˹�֪ͨ-֪ͨ����Ա������Ϊ����ԭ��)
  TShfeFtdcCommentType	Reserve;

  bool operator==(const CShfeFtdcSeqRiskNotifyAField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (NotifyMethod == ct.NotifyMethod);
    if (!ret) return ret;
    ret = ret && (NotifyStatus == ct.NotifyStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(Message, ct.Message) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����ĳ����
struct CShfeFtdcSeqDepositField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///���������
  TShfeFtdcFundIOTypeType	Type;
  ///��Ч��־-��Ч�����
  TShfeFtdcAvailabilityFlagType	Flag;
  ///�������
  TShfeFtdcFundDirectionType	Direction;
  ///������
  TShfeFtdcDateType	TradingDay;
  ///��ˮ��
  TShfeFtdcDepositSeqNoType	SequenceNo;
  ///ʱ��
  TShfeFtdcTimeType	Time;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�������
  TShfeFtdcMoneyType	Amount;

  bool operator==(const CShfeFtdcSeqDepositField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (Type == ct.Type);
    if (!ret) return ret;
    ret = ret && (Flag == ct.Flag);
    if (!ret) return ret;
    ret = ret && (Direction == ct.Direction);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(SequenceNo, ct.SequenceNo) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Time, ct.Time) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Amount, ct.Amount));
    if (!ret) return ret;

    return ret;
  }
};

///����Ľ��ױ���
struct CShfeFtdcSeqTradingCodeField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///����������
  TShfeFtdcExchangeIDType	ExchangeID;
  ///�ͻ�����
  TShfeFtdcClientIDType	ClientID;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///������־(�޸Ļ�ɾ��)
  TShfeFtdcActionFlagType	Action;
  ///���ױ�������
  TShfeFtdcClientIDTypeType	ClientIDType;

  bool operator==(const CShfeFtdcSeqTradingCodeField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeID, ct.ExchangeID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ClientID, ct.ClientID) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (Action == ct.Action);
    if (!ret) return ret;
    ret = ret && (ClientIDType == ct.ClientIDType);
    if (!ret) return ret;

    return ret;
  }
};

///����û������¼�
struct CShfeFtdcRiskUserEventField
{
  ///�û��¼���������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///�¼�����
  TShfeFtdcRiskUserEventType	EventType;
  ///�¼���Ϣ
  TShfeFtdcUserEventInfoType	EventInfo;

  bool operator==(const CShfeFtdcRiskUserEventField &ct) const
  {
    bool ret = true;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (EventType == ct.EventType);
    if (!ret) return ret;
    ret = ret && (strcmp(EventInfo, ct.EventInfo) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ض������к�
struct CShfeFtdcRiskNtfSequenceField
{
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;
  ///ҵ����������
  TShfeFtdcBusinessUnitType	DataType;

  bool operator==(const CShfeFtdcRiskNtfSequenceField &ct) const
  {
    bool ret = true;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(DataType, ct.DataType) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�����֪ͨģ��汾A
struct CShfeFtdcRiskNotifyPatternAField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û����룬�����޸�ģ��ʱ��Ч
  TShfeFtdcUserIDType	UserID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	NotifyMethod;
  ///�Ƿ�����
  TShfeFtdcBoolType	IsActive;
  ///֪ͨģ������
  TShfeFtdcRiskNofityInfoType	Pattern;
  ///Ԥ������(��ʱֻ����warnlevel)
  TShfeFtdcCommentType	Reserve;

  bool operator==(const CShfeFtdcRiskNotifyPatternAField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (NotifyMethod == ct.NotifyMethod);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (strcmp(Pattern, ct.Pattern) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ʒ��ͣ���ǵ���
struct CShfeFtdcProductLimitsField
{
  ///Ʒ�ֻ��Լ����
  TShfeFtdcInstrumentIDType	ProductID;
  ///D1�ǵ���
  TShfeFtdcRatioType	Limit1;
  ///D2�ǵ���
  TShfeFtdcRatioType	Limit2;
  ///D3�ǵ���
  TShfeFtdcRatioType	Limit3;
  ///D4�ǵ���
  TShfeFtdcRatioType	Limit4;
  ///���֤����
  TShfeFtdcRatioType	MaxMarginRate1;
  ///�����
  TShfeFtdcPriceType	Price;

  bool operator==(const CShfeFtdcProductLimitsField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(ProductID, ct.ProductID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit1, ct.Limit1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit2, ct.Limit2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit3, ct.Limit3));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit4, ct.Limit4));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MaxMarginRate1, ct.MaxMarginRate1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;

    return ret;
  }
};

///����Ԥ���ʽ��˻�
struct CShfeFtdcPredictRiskAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��ʼȨ��
  TShfeFtdcMoneyType	Balance0;
  ///D1����
  TShfeFtdcMoneyType	Lose1;
  ///D1Ȩ��
  TShfeFtdcMoneyType	Balance1;
  ///D2����
  TShfeFtdcMoneyType	Lose2;
  ///D2Ȩ��
  TShfeFtdcMoneyType	Balance2;
  ///D3����
  TShfeFtdcMoneyType	Lose3;
  ///D3Ȩ��
  TShfeFtdcMoneyType	Balance3;
  ///D4����
  TShfeFtdcMoneyType	Lose4;
  ///D4Ȩ��
  TShfeFtdcMoneyType	Balance4;

  bool operator==(const CShfeFtdcPredictRiskAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance0, ct.Balance0));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose1, ct.Lose1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance1, ct.Balance1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose2, ct.Lose2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance2, ct.Balance2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose3, ct.Lose3));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance3, ct.Balance3));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose4, ct.Lose4));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance4, ct.Balance4));
    if (!ret) return ret;

    return ret;
  }
};

///����Ԥ��ֲ�
struct CShfeFtdcPredictRiskPositionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��ͷ�ֲ�
  TShfeFtdcVolumeType	LongVol;
  ///��ͷ�ֲ�
  TShfeFtdcVolumeType	ShortVol;
  ///���ֲ�
  TShfeFtdcVolumeType	NetVol;
  ///��ʼ�۸�
  TShfeFtdcPriceType	Price0;
  ///D1�����
  TShfeFtdcPriceType	Price1;
  ///D1�ǵ���
  TShfeFtdcRatioType	Limit1;
  ///D2�ǵ���
  TShfeFtdcRatioType	Limit2;
  ///D3�ǵ���
  TShfeFtdcRatioType	Limit3;
  ///D4�ǵ���
  TShfeFtdcRatioType	Limit4;
  ///��Լ����
  TShfeFtdcVolumeMultipleType	Multiple;
  ///D1����
  TShfeFtdcMoneyType	Lose1;
  ///D2����
  TShfeFtdcMoneyType	Lose2;
  ///D3����
  TShfeFtdcMoneyType	Lose3;
  ///D4����
  TShfeFtdcMoneyType	Lose4;
  ///��������
  TShfeFtdcVolumeType	LeftVol;
  ///D1Ӧǿƽ
  TShfeFtdcVolumeType	ShouldClose;
  ///�������ǿƽ
  TShfeFtdcVolumeType	CanClose;
  ///��ǰ��֤����
  TShfeFtdcRatioType	CurrMarginRate;
  ///������֤����
  TShfeFtdcRatioType	MarginRate1;
  ///���ֱֲ�֤��
  TShfeFtdcMoneyType	NetMargin1;
  ///D1����
  TShfeFtdcMoneyType	Available1;
  ///1�ֱ�֤��
  TShfeFtdcMoneyType	Margin1PerVol;

  bool operator==(const CShfeFtdcPredictRiskPositionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (LongVol == ct.LongVol);
    if (!ret) return ret;
    ret = ret && (ShortVol == ct.ShortVol);
    if (!ret) return ret;
    ret = ret && (NetVol == ct.NetVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price0, ct.Price0));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price1, ct.Price1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit1, ct.Limit1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit2, ct.Limit2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit3, ct.Limit3));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Limit4, ct.Limit4));
    if (!ret) return ret;
    ret = ret && (Multiple == ct.Multiple);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose1, ct.Lose1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose2, ct.Lose2));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose3, ct.Lose3));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Lose4, ct.Lose4));
    if (!ret) return ret;
    ret = ret && (LeftVol == ct.LeftVol);
    if (!ret) return ret;
    ret = ret && (ShouldClose == ct.ShouldClose);
    if (!ret) return ret;
    ret = ret && (CanClose == ct.CanClose);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrMarginRate, ct.CurrMarginRate));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(MarginRate1, ct.MarginRate1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NetMargin1, ct.NetMargin1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Available1, ct.Available1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Margin1PerVol, ct.Margin1PerVol));
    if (!ret) return ret;

    return ret;
  }
};

///����Ԥ�����
struct CShfeFtdcPredictRiskParamField
{
  ///D1����
  TShfeFtdcVolumeType	D1;
  ///�Ƿ������Ч��¼
  TShfeFtdcBoolType	IsFilter;

  bool operator==(const CShfeFtdcPredictRiskParamField &ct) const
  {
    bool ret = true;
    ret = ret && (D1 == ct.D1);
    if (!ret) return ret;
    ret = ret && (IsFilter == ct.IsFilter);
    if (!ret) return ret;

    return ret;
  }
};

///�����ͬ��Ͷ����
struct CShfeFtdcRiskSyncInvestorField
{
  ///������־(�޸Ļ�ɾ��)
  TShfeFtdcActionFlagType	Action;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���߷������
  TShfeFtdcInvestorIDType	InvestorGroupID;
  ///Ͷ��������
  TShfeFtdcPartyNameType	InvestorName;
  ///֤������
  TShfeFtdcIdCardTypeType	IdentifiedCardType;
  ///֤������
  TShfeFtdcIdentifiedCardNoType	IdentifiedCardNo;
  ///�Ƿ��Ծ
  TShfeFtdcBoolType	IsActive;
  ///��ϵ�绰
  TShfeFtdcTelephoneType	Telephone;
  ///ͨѶ��ַ
  TShfeFtdcAddressType	Address;
  ///��������
  TShfeFtdcDateType	OpenDate;
  ///�ֻ�
  TShfeFtdcMobileType	Mobile;

  bool operator==(const CShfeFtdcRiskSyncInvestorField &ct) const
  {
    bool ret = true;
    ret = ret && (Action == ct.Action);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorGroupID, ct.InvestorGroupID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorName, ct.InvestorName) == 0);
    if (!ret) return ret;
    ret = ret && (IdentifiedCardType == ct.IdentifiedCardType);
    if (!ret) return ret;
    ret = ret && (strcmp(IdentifiedCardNo, ct.IdentifiedCardNo) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (strcmp(Telephone, ct.Telephone) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Address, ct.Address) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(OpenDate, ct.OpenDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Mobile, ct.Mobile) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��Լ�۸�
struct CShfeFtdcInstrumentPriceField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///�۸�����
  TShfeFtdcPriceTypeType	PriceType;
  ///�۸�
  TShfeFtdcPriceType	Price;

  bool operator==(const CShfeFtdcInstrumentPriceField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (PriceType == ct.PriceType);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price, ct.Price));
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ��������ϵ����Ϣ��Hashֵ
struct CShfeFtdcInvestorLinkManHashField
{
  ///��������ҵ�����ͣ�����������MD5ֵ
  TShfeFtdcFullMD5Type	MD5;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDBeg;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDEnd;

  bool operator==(const CShfeFtdcInvestorLinkManHashField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(MD5, ct.MD5) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDBeg, ct.InvestorIDBeg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ߴ���
struct CShfeFtdcInvestorIDRangeField
{
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDBeg;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDEnd;

  bool operator==(const CShfeFtdcInvestorIDRangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InvestorIDBeg, ct.InvestorIDBeg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ͨѶʱ�α�ŵ������
struct CShfeFtdcCommPhaseSequenceField
{
  ///ͨѶʱ�α��
  TShfeFtdcCommPhaseNoType	CommPhaseNo;
  ///����ϵ�к�
  TShfeFtdcSequenceSeriesType	SequenceSeries;
  ///���
  TShfeFtdcSequenceNoType	SequenceNo;

  bool operator==(const CShfeFtdcCommPhaseSequenceField &ct) const
  {
    bool ret = true;
    ret = ret && (CommPhaseNo == ct.CommPhaseNo);
    if (!ret) return ret;
    ret = ret && (SequenceSeries == ct.SequenceSeries);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;

    return ret;
  }
};

///����û�Ȩ��
struct CShfeFtdcRiskUserFunctionField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///Ȩ������
  TShfeFtdcFunctionIDType	Function;

  bool operator==(const CShfeFtdcRiskUserFunctionField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Function, ct.Function) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����״̬
struct CShfeFtdcLinkStatusField
{
  ///����״̬
  TShfeFtdcLinkStatusType	LinkStatus;

  bool operator==(const CShfeFtdcLinkStatusField &ct) const
  {
    bool ret = true;
    ret = ret && (LinkStatus == ct.LinkStatus);
    if (!ret) return ret;

    return ret;
  }
};

///���ͬ��Ͷ�����ʽ��˻�
struct CShfeFtdcRiskSyncAccountField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�������
  TShfeFtdcMoneyType	Withdraw;
  ///��ǰ��֤���ܶ�
  TShfeFtdcMoneyType	CurrMargin;
  ///������
  TShfeFtdcMoneyType	Commission;
  ///ƽ��ӯ��
  TShfeFtdcMoneyType	CloseProfit;
  ///�ֲ�ӯ��
  TShfeFtdcMoneyType	PositionProfit;
  ///��Ȩ��
  TShfeFtdcMoneyType	Balance;
  ///�����ʽ�
  TShfeFtdcMoneyType	Available;
  ///��Ѻ���
  TShfeFtdcMoneyType	Mortgage;
  ///��������֤��
  TShfeFtdcMoneyType	ExchangeMargin;
  ///��ȡ�ʽ�
  TShfeFtdcMoneyType	WithdrawQuota;
  ///���ö��
  TShfeFtdcMoneyType	Credit;
  ///��֤�𶳽�
  TShfeFtdcMoneyType	FrozenMargin;
  ///�����Ѷ���
  TShfeFtdcMoneyType	FrozenCommission;

  bool operator==(const CShfeFtdcRiskSyncAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Withdraw, ct.Withdraw));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CurrMargin, ct.CurrMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Commission, ct.Commission));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(CloseProfit, ct.CloseProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionProfit, ct.PositionProfit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Balance, ct.Balance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Available, ct.Available));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Mortgage, ct.Mortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeMargin, ct.ExchangeMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(WithdrawQuota, ct.WithdrawQuota));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Credit, ct.Credit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenMargin, ct.FrozenMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(FrozenCommission, ct.FrozenCommission));
    if (!ret) return ret;

    return ret;
  }
};

///����ʽ��˻�������Ϣ
struct CShfeFtdcSeqPreRiskAccountField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///Ͷ�����ʺ�
  TShfeFtdcAccountIDType	AccountID;
  ///�ϴ���Ѻ���
  TShfeFtdcMoneyType	PreMortgage;
  ///�ϴ����ö��
  TShfeFtdcMoneyType	PreCredit;
  ///�ϴδ���
  TShfeFtdcMoneyType	PreDeposit;
  ///�ϴ���Ȩ��
  TShfeFtdcMoneyType	PreBalance;
  ///�ϴ�ռ�õı�֤��
  TShfeFtdcMoneyType	PreMargin;
  ///����׼����
  TShfeFtdcMoneyType	Reserve;
  ///�ϴν�������֤��
  TShfeFtdcMoneyType	PreExchMargin;
  ///��ʷǿƽ����
  TShfeFtdcVolumeType	ForceCloseStat;
  ///Ͷ���߽��֤��
  TShfeFtdcMoneyType	DeliveryMargin;
  ///���������֤��
  TShfeFtdcMoneyType	ExchangeDeliveryMargin;

  bool operator==(const CShfeFtdcSeqPreRiskAccountField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(AccountID, ct.AccountID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMortgage, ct.PreMortgage));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreCredit, ct.PreCredit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreDeposit, ct.PreDeposit));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreBalance, ct.PreBalance));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreMargin, ct.PreMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Reserve, ct.Reserve));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PreExchMargin, ct.PreExchMargin));
    if (!ret) return ret;
    ret = ret && (ForceCloseStat == ct.ForceCloseStat);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(DeliveryMargin, ct.DeliveryMargin));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ExchangeDeliveryMargin, ct.ExchangeDeliveryMargin));
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ��������¼Ӧ��
struct CShfeFtdcRspLocalFrontLoginField
{
  ///ͨѶʱ�α��
  TShfeFtdcCommPhaseNoType	CommPhaseNo;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;
  ///���ǰ�������ӵ�SessionID
  TShfeFtdcSessionIDType	FrontSessionID;

  bool operator==(const CShfeFtdcRspLocalFrontLoginField &ct) const
  {
    bool ret = true;
    ret = ret && (CommPhaseNo == ct.CommPhaseNo);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;
    ret = ret && (FrontSessionID == ct.FrontSessionID);
    if (!ret) return ret;

    return ret;
  }
};

///ģ���滻�ֶ�
struct CShfeFtdcNoticeTokenField
{
  ///�Զ��滻�ֶ�
  TShfeFtdcExchangeNameType	Token;
  ///�Զ��滻�ֶε�����
  TShfeFtdcBrokerNameType	Description;

  bool operator==(const CShfeFtdcNoticeTokenField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(Token, ct.Token) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Description, ct.Description) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///֪ͨģ��
struct CShfeFtdcNoticePatternField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///ҵ������
  TShfeFtdcParamNameType	BizType;
  ///֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	Method;
  ///ҵ������
  TShfeFtdcParamNameType	BizName;
  ///����޸�ģ����û�����
  TShfeFtdcUserIDType	UserID;
  ///�Ƿ�����
  TShfeFtdcBoolType	IsActive;
  ///֪ͨģ������
  TShfeFtdcContentType	Pattern;

  bool operator==(const CShfeFtdcNoticePatternField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BizType, ct.BizType) == 0);
    if (!ret) return ret;
    ret = ret && (Method == ct.Method);
    if (!ret) return ret;
    ret = ret && (strcmp(BizName, ct.BizName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;
    ret = ret && (strcmp(Pattern, ct.Pattern) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///ҵ��֪ͨ
struct CShfeFtdcBizNoticeField
{
  ///�¼���������
  TShfeFtdcDateType	TradingDay;
  ///֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	Method;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///ҵ������
  TShfeFtdcParamNameType	BizType;
  ///֪ͨ״̬
  TShfeFtdcRiskNotifyStatusType	Status;
  ///֪ͨ����
  TShfeFtdcContentType	Message;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcBizNoticeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (Method == ct.Method);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BizType, ct.BizType) == 0);
    if (!ret) return ret;
    ret = ret && (Status == ct.Status);
    if (!ret) return ret;
    ret = ret && (strcmp(Message, ct.Message) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���߲���
struct CShfeFtdcRiskInvestorParamField
{
  ///��������
  TShfeFtdcParamIDType	ParamID;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///����ֵ
  TShfeFtdcParamValueType	ParamValue;

  bool operator==(const CShfeFtdcRiskInvestorParamField &ct) const
  {
    bool ret = true;
    ret = ret && (ParamID == ct.ParamID);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ParamValue, ct.ParamValue) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///�仯����
struct CShfeFtdcVaryMarketDataField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///���¼�
  TShfeFtdcPriceType	LastPrice;

  bool operator==(const CShfeFtdcVaryMarketDataField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(LastPrice, ct.LastPrice));
    if (!ret) return ret;

    return ret;
  }
};

///��Լ�۸�����
struct CShfeFtdcPriceRangeField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///�۸�1
  TShfeFtdcPriceType	Price1;
  ///�۸�2
  TShfeFtdcPriceType	Price2;

  bool operator==(const CShfeFtdcPriceRangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price1, ct.Price1));
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(Price2, ct.Price2));
    if (!ret) return ret;

    return ret;
  }
};

///�����ҵ��֪ͨ
struct CShfeFtdcSeqBizNoticeField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///�¼���������
  TShfeFtdcDateType	TradingDay;
  ///֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	Method;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///ҵ������
  TShfeFtdcParamNameType	BizType;
  ///֪ͨ״̬
  TShfeFtdcRiskNotifyStatusType	Status;
  ///֪ͨ����
  TShfeFtdcContentType	Message;
  ///������Ϣ
  TShfeFtdcErrorMsgType	ErrorMsg;

  bool operator==(const CShfeFtdcSeqBizNoticeField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(TradingDay, ct.TradingDay) == 0);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (Method == ct.Method);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BizType, ct.BizType) == 0);
    if (!ret) return ret;
    ret = ret && (Status == ct.Status);
    if (!ret) return ret;
    ret = ret && (strcmp(Message, ct.Message) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ErrorMsg, ct.ErrorMsg) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ز�����Ϣ
struct CShfeFtdcRiskParamInfoField
{
  ///��������
  TShfeFtdcParamIDType	ParamID;
  ///����˵��
  TShfeFtdcDescriptionType	Description;

  bool operator==(const CShfeFtdcRiskParamInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (ParamID == ct.ParamID);
    if (!ret) return ret;
    ret = ret && (strcmp(Description, ct.Description) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ص�¼��Ϣ
struct CShfeFtdcRiskLoginInfoField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�û�����
  TShfeFtdcUserIDType	UserID;
  ///����ǰ�ûỰ���
  TShfeFtdcSessionIDType	LocalSessionID;
  ///���ǰ�ûỰ���
  TShfeFtdcSessionIDType	SessionID;
  ///���ǰ�ñ��
  TShfeFtdcFrontIDType	FrontID;

  bool operator==(const CShfeFtdcRiskLoginInfoField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (LocalSessionID == ct.LocalSessionID);
    if (!ret) return ret;
    ret = ret && (SessionID == ct.SessionID);
    if (!ret) return ret;
    ret = ret && (FrontID == ct.FrontID);
    if (!ret) return ret;

    return ret;
  }
};

///���֪ͨģ��
struct CShfeFtdcRiskPatternField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///ҵ������
  TShfeFtdcParamNameType	BizType;
  ///ģ�����
  TShfeFtdcParamIDType	PatternID;
  ///ģ������
  TShfeFtdcParamNameType	PatternName;
  ///֪ͨģ������
  TShfeFtdcContentType	Pattern;

  bool operator==(const CShfeFtdcRiskPatternField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BizType, ct.BizType) == 0);
    if (!ret) return ret;
    ret = ret && (PatternID == ct.PatternID);
    if (!ret) return ret;
    ret = ret && (strcmp(PatternName, ct.PatternName) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Pattern, ct.Pattern) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ����֪ͨģ��
struct CShfeFtdcInvestorPatternField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///ҵ������
  TShfeFtdcParamNameType	BizType;
  ///֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	Method;
  ///ģ�����
  TShfeFtdcParamIDType	PatternID;
  ///�Ƿ�����
  TShfeFtdcBoolType	IsActive;

  bool operator==(const CShfeFtdcInvestorPatternField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BizType, ct.BizType) == 0);
    if (!ret) return ret;
    ret = ret && (Method == ct.Method);
    if (!ret) return ret;
    ret = ret && (PatternID == ct.PatternID);
    if (!ret) return ret;
    ret = ret && (IsActive == ct.IsActive);
    if (!ret) return ret;

    return ret;
  }
};

///�ͻ�����֪ͨ�汾B
struct CShfeFtdcRiskNotifyBField
{
  ///����֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����͸÷���֪ͨ���û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	NotifyMethod;
  ///����֪ͨ״̬
  TShfeFtdcRiskNotifyStatusType	NotifyStatus;
  ///֪ͨ����
  TShfeFtdcContentType	Message;
  ///Ԥ���ֶ�(�˹�֪ͨ-֪ͨ����Ա������Ϊ����ԭ��)
  TShfeFtdcCommentType	Reserve;

  bool operator==(const CShfeFtdcRiskNotifyBField &ct) const
  {
    bool ret = true;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (NotifyMethod == ct.NotifyMethod);
    if (!ret) return ret;
    ret = ret && (NotifyStatus == ct.NotifyStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(Message, ct.Message) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///����Ŀͻ�����֪ͨ�汾B
struct CShfeFtdcSeqRiskNotifyBField
{
  ///����Ψһ�����к�
  TShfeFtdcSequenceNoType	UniqSequenceNo;
  ///����֪ͨ�¼��ڵ�������
  TShfeFtdcSequenceNoType	SequenceNo;
  ///�¼���������
  TShfeFtdcDateType	EventDate;
  ///�¼�����ʱ��
  TShfeFtdcTimeType	EventTime;
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///�����͸÷���֪ͨ���û�����
  TShfeFtdcUserIDType	UserID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///֪ͨ����
  TShfeFtdcNotifyClassType	NotifyClass;
  ///����֪ͨ;��
  TShfeFtdcRiskNotifyMethodType	NotifyMethod;
  ///����֪ͨ״̬
  TShfeFtdcRiskNotifyStatusType	NotifyStatus;
  ///֪ͨ����
  TShfeFtdcContentType	Message;
  ///Ԥ���ֶ�(�˹�֪ͨ-֪ͨ����Ա������Ϊ����ԭ��)
  TShfeFtdcCommentType	Reserve;

  bool operator==(const CShfeFtdcSeqRiskNotifyBField &ct) const
  {
    bool ret = true;
    ret = ret && (UniqSequenceNo == ct.UniqSequenceNo);
    if (!ret) return ret;
    ret = ret && (SequenceNo == ct.SequenceNo);
    if (!ret) return ret;
    ret = ret && (strcmp(EventDate, ct.EventDate) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(EventTime, ct.EventTime) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(UserID, ct.UserID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (NotifyClass == ct.NotifyClass);
    if (!ret) return ret;
    ret = ret && (NotifyMethod == ct.NotifyMethod);
    if (!ret) return ret;
    ret = ret && (NotifyStatus == ct.NotifyStatus);
    if (!ret) return ret;
    ret = ret && (strcmp(Message, ct.Message) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(Reserve, ct.Reserve) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///��ѯ�ֲֳɽ��������Ĳ���
struct CShfeFtdcQryStatField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///������Ʒ�ֺ�Լ�������(����������ʹ��ǰ׺e:����ʽ��cu,e:SHFE,cu1105)
  TShfeFtdcString100Type	ExchangeProductInstID;
  ///��������
  TShfeFtdcStatSortTypeType	SortType;
  ///�����������ؽ��
  TShfeFtdcVolumeType	ResultCount;
  ///���������ؽ��
  TShfeFtdcRatioType	ResultRatio;

  bool operator==(const CShfeFtdcQryStatField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeProductInstID, ct.ExchangeProductInstID) == 0);
    if (!ret) return ret;
    ret = ret && (SortType == ct.SortType);
    if (!ret) return ret;
    ret = ret && (ResultCount == ct.ResultCount);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(ResultRatio, ct.ResultRatio));
    if (!ret) return ret;

    return ret;
  }
};

///�ֲ�����ͳ��
struct CShfeFtdcPositionStatField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///������Ʒ�ֺ�Լ�������(����������ʹ��ǰ׺e:����ʽ��cu,e:SHFE,cu1105)
  TShfeFtdcString100Type	ExchangeProductInstID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��ֲ�
  TShfeFtdcVolumeType	YdPosition;
  ///�ֲܳ�
  TShfeFtdcVolumeType	Position;
  ///��ͷ�ֲ�
  TShfeFtdcVolumeType	LongPosition;
  ///��ͷ�ֲ�
  TShfeFtdcVolumeType	ShortPosition;
  ///���ֲ�
  TShfeFtdcVolumeType	NetPosition;
  ///Ͷ����ͷ�ֲ�
  TShfeFtdcVolumeType	SpecuLongPosi;
  ///Ͷ����ͷ�ֲ�
  TShfeFtdcVolumeType	SpecuShortPosi;
  ///��ֵ��ͷ�ֲ�
  TShfeFtdcVolumeType	HedgeLongPosi;
  ///��ֵ��ͷ�ֲ�
  TShfeFtdcVolumeType	HedgeShortPosi;
  ///���
  TShfeFtdcVolumeType	TodayPosition;
  ///�ֲֳܳɱ�
  TShfeFtdcMoneyType	PositionCost;

  bool operator==(const CShfeFtdcPositionStatField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeProductInstID, ct.ExchangeProductInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (YdPosition == ct.YdPosition);
    if (!ret) return ret;
    ret = ret && (Position == ct.Position);
    if (!ret) return ret;
    ret = ret && (LongPosition == ct.LongPosition);
    if (!ret) return ret;
    ret = ret && (ShortPosition == ct.ShortPosition);
    if (!ret) return ret;
    ret = ret && (NetPosition == ct.NetPosition);
    if (!ret) return ret;
    ret = ret && (SpecuLongPosi == ct.SpecuLongPosi);
    if (!ret) return ret;
    ret = ret && (SpecuShortPosi == ct.SpecuShortPosi);
    if (!ret) return ret;
    ret = ret && (HedgeLongPosi == ct.HedgeLongPosi);
    if (!ret) return ret;
    ret = ret && (HedgeShortPosi == ct.HedgeShortPosi);
    if (!ret) return ret;
    ret = ret && (TodayPosition == ct.TodayPosition);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(PositionCost, ct.PositionCost));
    if (!ret) return ret;

    return ret;
  }
};

///�ɽ�����ͳ��
struct CShfeFtdcTradeStatField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///������Ʒ�ֺ�Լ�������(����������ʹ��ǰ׺e:����ʽ��cu,e:SHFE,cu1105)
  TShfeFtdcString100Type	ExchangeProductInstID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ܳɽ���
  TShfeFtdcVolumeType	TotalVol;
  ///�ܳɽ���
  TShfeFtdcMoneyType	TotalAmt;
  ///��ɽ���
  TShfeFtdcVolumeType	BuyVol;
  ///��ɽ���
  TShfeFtdcMoneyType	BuyAmt;
  ///���ɽ���
  TShfeFtdcVolumeType	SellVol;
  ///���ɽ���
  TShfeFtdcMoneyType	SellAmt;
  ///������ɽ���
  TShfeFtdcVolumeType	NetVol;
  ///������ɽ���
  TShfeFtdcMoneyType	NetAmt;

  bool operator==(const CShfeFtdcTradeStatField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeProductInstID, ct.ExchangeProductInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (TotalVol == ct.TotalVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(TotalAmt, ct.TotalAmt));
    if (!ret) return ret;
    ret = ret && (BuyVol == ct.BuyVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(BuyAmt, ct.BuyAmt));
    if (!ret) return ret;
    ret = ret && (SellVol == ct.SellVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(SellAmt, ct.SellAmt));
    if (!ret) return ret;
    ret = ret && (NetVol == ct.NetVol);
    if (!ret) return ret;
    ret = ret && (EQUALDOUBLE(NetAmt, ct.NetAmt));
    if (!ret) return ret;

    return ret;
  }
};

///��������ͳ��
struct CShfeFtdcOrderStatField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///������Ʒ�ֺ�Լ�������(����������ʹ��ǰ׺e:����ʽ��cu,e:SHFE,cu1105)
  TShfeFtdcString100Type	ExchangeProductInstID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///�ܱ�����
  TShfeFtdcVolumeType	TotalVol;
  ///�򱨵���
  TShfeFtdcVolumeType	BuyVol;
  ///��������
  TShfeFtdcVolumeType	SellVol;
  ///�����뱨����
  TShfeFtdcVolumeType	NetVol;
  ///�гɽ�������
  TShfeFtdcVolumeType	TradeCount;
  ///�ܱ�����
  TShfeFtdcVolumeType	TotalCount;

  bool operator==(const CShfeFtdcOrderStatField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(ExchangeProductInstID, ct.ExchangeProductInstID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (TotalVol == ct.TotalVol);
    if (!ret) return ret;
    ret = ret && (BuyVol == ct.BuyVol);
    if (!ret) return ret;
    ret = ret && (SellVol == ct.SellVol);
    if (!ret) return ret;
    ret = ret && (NetVol == ct.NetVol);
    if (!ret) return ret;
    ret = ret && (TradeCount == ct.TradeCount);
    if (!ret) return ret;
    ret = ret && (TotalCount == ct.TotalCount);
    if (!ret) return ret;

    return ret;
  }
};

///�ֱ���ϵͳ���
struct CShfeFtdcDRSysIDField
{
  ///�ֱ���ϵͳ���(ÿ����ϵͳ����һ�����)
  TShfeFtdcDRSysIDType	DRSysID;

  bool operator==(const CShfeFtdcDRSysIDField &ct) const
  {
    bool ret = true;
    ret = ret && (DRSysID == ct.DRSysID);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ������������ģ�����
struct CShfeFtdcInvestorCommModelIDField
{
  ///���͹�˾����
  TShfeFtdcBrokerIDType	BrokerID;
  ///Ͷ���ߴ���
  TShfeFtdcInvestorIDType	InvestorID;
  ///��������ģ����룬Ϊ��ɾ���ü�¼
  TShfeFtdcInvestorIDType	CommModelID;

  bool operator==(const CShfeFtdcInvestorCommModelIDField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(BrokerID, ct.BrokerID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorID, ct.InvestorID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(CommModelID, ct.CommModelID) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ߴ��뷶Χ�Ӻ�Լ
struct CShfeFtdcInstInvestorRangeField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDBeg;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDEnd;

  bool operator==(const CShfeFtdcInstInvestorRangeField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDBeg, ct.InvestorIDBeg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};

///Ͷ���ߴ��뷶Χ�Ӻ�Լ�ϵ�����Hashֵ
struct CShfeFtdcInstInvestorRangeHashField
{
  ///��Լ����
  TShfeFtdcInstrumentIDType	InstrumentID;
  ///��������ҵ�����ͣ�����������MD5ֵ
  TShfeFtdcFullMD5Type	MD5;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDBeg;
  ///Ͷ���ߴ���(Ϊ�մ�������Ͷ���ߴ���)
  TShfeFtdcInvestorIDType	InvestorIDEnd;

  bool operator==(const CShfeFtdcInstInvestorRangeHashField &ct) const
  {
    bool ret = true;
    ret = ret && (strcmp(InstrumentID, ct.InstrumentID) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(MD5, ct.MD5) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDBeg, ct.InvestorIDBeg) == 0);
    if (!ret) return ret;
    ret = ret && (strcmp(InvestorIDEnd, ct.InvestorIDEnd) == 0);
    if (!ret) return ret;

    return ret;
  }
};



#endif
