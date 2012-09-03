#include "test.h"

void test_md(void){
  //��ʼ��UserApi
  CThostFtdcMdApi* pUserApi=CThostFtdcMdApi::CreateFtdcMdApi();
  CtpMdSpi* pUserSpi=new CtpMdSpi(pUserApi); //�����ص����������MdSpi
  pUserApi->RegisterSpi(pUserSpi);			// �ص�����ע��ӿ���
  pUserApi->RegisterFront(mdFront);		  // ע������ǰ�õ�ַ

  pUserApi->Init();      //�ӿ��߳�����, ��ʼ����
  ShowMdCommand(pUserSpi,true); 
  pUserApi->Join();      //�ȴ��ӿ��߳��˳�
  //pUserApi->Release(); //�ӿڶ����ͷ�
}

void test_order(void)
{
  //��ʼ��UserApi
  CThostFtdcTraderApi* pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi();
  CtpTraderSpi* pUserSpi = new CtpTraderSpi(pUserApi);
  pUserApi->RegisterSpi((CThostFtdcTraderSpi*)pUserSpi);			// ע���¼���
  pUserApi->SubscribePublicTopic(THOST_TERT_RESTART);					// ע�ṫ����
  pUserApi->SubscribePrivateTopic(THOST_TERT_RESTART);			  // ע��˽����
  pUserApi->RegisterFront(tradeFront);							// ע�ύ��ǰ�õ�ַ
  
  pUserApi->Init();
  ShowTraderCommand(pUserSpi,true); 
  pUserApi->Join();  
  //pUserApi->Release();
}

//void test_risk()
//{
//  CShfeFtdcRiskUserApi* pUserApi=CShfeFtdcRiskUserApi::CreateFtdcRiskUserApi();
//  CtpRiskSpi* pUserSpi=new CtpRiskSpi(pUserApi);
//  pUserApi->RegisterSpi(pUserSpi);
//  pUserApi->RegisterFront(riskFront);
  
//  pUserApi->Init();
//  ShowRiskCommand(pUserSpi,true);
//  pUserApi->Join();
//  //pUserApi->Release();
//}

int main(int argc, const char* argv[]){
  g_hEvent=CreateEvent(NULL, true, false, NULL);

  if(argc < 2)  cerr<<"��ʽ: ���� ����, ��������."<<endl;  
  else if(strcmp(argv[1],"--md")==0)    test_md();
  else if(strcmp(argv[1],"--order")==0) test_order();
//  else if(strcmp(argv[1],"--risk")==0)  test_risk();

  return 0;
}
