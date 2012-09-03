#ifndef TEST_H_
#define TEST_H_

#include "config.h"
#include "api/trade/win/public/ThostFtdcMdApi.h"
#include "api/trade/win/public/ThostFtdcTraderApi.h"
#include "md/mdspi.h"
#include "order/traderspi.h"
#include "risk/riskspi.h"

#include "win_event.h"
//#include "windows.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

HANDLE g_hEvent;


void ShowTraderCommand(CtpTraderSpi* p, bool print=false){
  if(print){
    cerr<<"-----------------------------------------------"<<endl;
    cerr<<" [1] ReqUserLogin              -- ��¼"<<endl;
    cerr<<" [2] ReqSettlementInfoConfirm  -- ���㵥ȷ��"<<endl;
    cerr<<" [3] ReqQryInstrument          -- ��ѯ��Լ"<<endl;
    cerr<<" [4] ReqQryTradingAccount      -- ��ѯ�ʽ�"<<endl;
    cerr<<" [5] ReqQryInvestorPosition    -- ��ѯ�ֲ�"<<endl;
    cerr<<" [6] ReqOrderInsert            -- ����"<<endl;
    cerr<<" [7] ReqOrderAction            -- ����"<<endl;
    cerr<<" [8] PrintOrders               -- ��ʾ����"<<endl;
    cerr<<" [9] PrintOrders               -- ��ʾ�ɽ�"<<endl;
    cerr<<" [0] Exit                      -- �˳�"<<endl;
    cerr<<"----------------------------------------------"<<endl;
  }   
  TThostFtdcBrokerIDType	appId;
	TThostFtdcUserIDType	userId;
	TThostFtdcPasswordType	passwd;
  TThostFtdcInstrumentIDType instId;
  TThostFtdcDirectionType dir;
  TThostFtdcCombOffsetFlagType kpp;
  TThostFtdcPriceType price;
  TThostFtdcVolumeType vol;
  TThostFtdcSequenceNoType orderSeq;

  int cmd;  cin>>cmd;
  switch(cmd){
    case 1: {
              cerr<<" Ӧ�õ�Ԫ > ";cin>>appId;
              cerr<<" Ͷ���ߴ��� > ";cin>>userId;
              cerr<<" �������� > ";cin>>passwd;
              p->ReqUserLogin(appId,userId,passwd); break;
            }
    case 2: p->ReqSettlementInfoConfirm(); break;
    case 3: {
              cerr<<" ��Լ > "; cin>>instId; 
              p->ReqQryInstrument(instId); break;
            }
    case 4: p->ReqQryTradingAccount(); break;
    case 5: {
              cerr<<" ��Լ > "; cin>>instId; 
              p->ReqQryInvestorPosition(instId); break;
            }
    case 6: {
              cerr<<" ��Լ > "; cin>>instId; 
              cerr<<" ���� > "; cin>>dir; 
              cerr<<" ��ƽ > "; cin>>kpp;
              cerr<<" �۸� > "; cin>>price;
              cerr<<" ���� > "; cin>>vol;              
              p->ReqOrderInsert(instId,dir,kpp,price,vol); break;
            }
    case 7: { 
              cerr<<" ��� > "; cin>>orderSeq;
              p->ReqOrderAction(orderSeq);break;
            }
    case 8: p->PrintOrders();break;
    case 9: p->PrintTrades();break;
    case 0: exit(0);
  }  
  WaitForSingleObject(g_hEvent, INFINITE);
  ResetEvent(g_hEvent);
  ShowTraderCommand(p);
}


void ShowMdCommand(CtpMdSpi* p, bool print=false){
  if(print){
    cerr<<"-----------------------------------------------"<<endl;
    cerr<<" [1] ReqUserLogin              -- ��¼"<<endl;
    cerr<<" [2] SubscribeMarketData       -- ���鶩��"<<endl;
    cerr<<" [0] Exit                      -- �˳�"<<endl;
    cerr<<"----------------------------------------------"<<endl;
  }
  TThostFtdcBrokerIDType appId;
	TThostFtdcUserIDType	 userId;
	TThostFtdcPasswordType passwd;
  char instIdList[100];

  int cmd;  cin>>cmd;
  switch(cmd){
    case 1: {
              cerr<<" Ӧ�õ�Ԫ > ";cin>>appId;
              cerr<<" Ͷ���ߴ��� > ";cin>>userId;
              cerr<<" �������� > ";cin>>passwd;
              p->ReqUserLogin(appId,userId,passwd); break;
            }
    case 2: {
              cerr<<" ��Լ > "; cin>>instIdList; 
              p->SubscribeMarketData(instIdList); break;
            }
    case 0: exit(0);
  }
//  WaitForSingleObject(g_hEvent,INFINITE);
//  ResetEvent(g_hEvent);
  ShowMdCommand(p);
}

void ShowRiskCommand(CtpRiskSpi* p, bool print=false){
  if(print){
    cerr<<"-----------------------------------------------"<<endl;
    cerr<<" [1] ReqUserLogin              -- ��¼"<<endl;
    cerr<<" [2] ReqRiskQryBrokerDeposit   -- ��ѯϯλ�ʽ�"<<endl;
    cerr<<" [3] ReqRiskOrderInsert        -- ǿƽ"<<endl;
    cerr<<" [4] PrintAcounts              -- ��ʾ�ʽ��˻�"<<endl;
    cerr<<" [5] PrintPositions            -- ��ʾ�ֲ���Ϣ"<<endl;
    cerr<<" [0] Exit                      -- �˳�"<<endl;
    cerr<<"----------------------------------------------"<<endl;
  }

  TShfeFtdcBrokerIDType	appId;
  TShfeFtdcUserIDType	 userId;
  TShfeFtdcPasswordType	passwd;
  TShfeFtdcExchangeIDType exchangeId;
  TShfeFtdcSequenceNoType seqNo;
  TShfeFtdcPriceType price;
  int cmd;  cin>>cmd;
  switch(cmd){
    case 1: {
              cerr<<" Ӧ�õ�Ԫ > ";cin>>appId;
              cerr<<" ����Ա > ";cin>>userId;
              cerr<<" ���� > ";cin>>passwd;
              p->ReqUserLogin(appId,userId,passwd); break;
            }
    case 2: {
              cerr<<" ������ > ";cin>>exchangeId;
              p->ReqRiskQryBrokerDeposit(exchangeId);break;
            }
    case 3: {
              cerr<<" ��� > ";cin>>seqNo;
              cerr<<" �۸� > ";cin>>price;
              p->ReqRiskOrderInsert(seqNo,price);break;
            }
    case 4: p->PrintAcounts(); break;
    case 5: p->PrintPositions();break;
    case 0: exit(0);
  }
//  WaitForSingleObject(g_hEvent,INFINITE);
//  ResetEvent(g_hEvent);
  ShowRiskCommand(p);
}
#endif
