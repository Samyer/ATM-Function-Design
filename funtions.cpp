#include<iostream>
using namespace std;

#include"funtions.h"
int login( Account list[], int n)
{
	char a[MAXLEN],b[MAXLEN];
	while(1)
	{
		cout<<"***中国银行ATM***"<<endl;
	cout<<"卡号：";
	cin>>a;
	cout<<"密码:";
	cin>>b;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a,list[i].card)==0&&strcmp(b,list[i].password)==0)
			return i;
		
	}
	cout<<"卡号或密码不正确"<<endl;
	}
}
int menuSelect()
{
	int c;
	cout<<"***功能菜单***"<<endl;
	cout<<"1.查询余额"<<endl;
	cout<<"2.存款"<<endl;
    cout<<"3.取款"<<endl;
	cout<<"4.修改密码"<<endl;
	cout<<"5.退卡"<<endl;
	cin>>c;
	return c;
}