#include<iostream>
using namespace std;
#include"account.h"
void queryBalance(const Account &x )
{
	cout<<"当前余额为："<<x.balance<<endl;
}

void deposit(Account &x )

{
	double e;
    cout<<"请输入存款金额"<<endl;
	cin>>e;
	
	x.balance+=e;
	cout<<"存款成功,当前余额为:"<<x.balance<<endl;
}
void withdraw(Account &x )
{
    double f;
  cout<<"请输入取款金额"<<endl;

	cin>>f;
	
	if(f>x.balance)
		cout<<"余额不足,取款失败"<<endl;

	
	else
	{
	x.balance-=f;
	cout<<"取款成功,当前余额为:"<<x.balance<<endl;
	}

}
void changePassword(Account &x  )
{
	char g[MAXLEN],h[MAXLEN],k[MAXLEN];
	while(1)
	{
	cout<<"请输入旧密码"<<endl;
	cin>>g;

	if(strcmp(x.password,g)==0)
	{
		cout<<"请输入新密码"<<endl;
		
	cin>>h;
	cout<<"再次输入新密码"<<endl;
	cin>>k;
	}
	else
		cout<<"密码错误"<<endl;
	if(strcmp(h,k)==0)
	{
		strcpy(x.password,k);
		break;
		cout<<"密码修改成功"<<endl;
	}
		else
			cout<<"密码修改失败"<<endl;
}
}