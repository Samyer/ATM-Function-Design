#include<iostream>
using namespace std;
#include"account.h"
void queryBalance(const Account &x )
{
	cout<<"��ǰ���Ϊ��"<<x.balance<<endl;
}

void deposit(Account &x )

{
	double e;
    cout<<"����������"<<endl;
	cin>>e;
	
	x.balance+=e;
	cout<<"���ɹ�,��ǰ���Ϊ:"<<x.balance<<endl;
}
void withdraw(Account &x )
{
    double f;
  cout<<"������ȡ����"<<endl;

	cin>>f;
	
	if(f>x.balance)
		cout<<"����,ȡ��ʧ��"<<endl;

	
	else
	{
	x.balance-=f;
	cout<<"ȡ��ɹ�,��ǰ���Ϊ:"<<x.balance<<endl;
	}

}
void changePassword(Account &x  )
{
	char g[MAXLEN],h[MAXLEN],k[MAXLEN];
	while(1)
	{
	cout<<"�����������"<<endl;
	cin>>g;

	if(strcmp(x.password,g)==0)
	{
		cout<<"������������"<<endl;
		
	cin>>h;
	cout<<"�ٴ�����������"<<endl;
	cin>>k;
	}
	else
		cout<<"�������"<<endl;
	if(strcmp(h,k)==0)
	{
		strcpy(x.password,k);
		break;
		cout<<"�����޸ĳɹ�"<<endl;
	}
		else
			cout<<"�����޸�ʧ��"<<endl;
}
}