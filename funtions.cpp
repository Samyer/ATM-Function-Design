#include<iostream>
using namespace std;

#include"funtions.h"
int login( Account list[], int n)
{
	char a[MAXLEN],b[MAXLEN];
	while(1)
	{
		cout<<"***�й�����ATM***"<<endl;
	cout<<"���ţ�";
	cin>>a;
	cout<<"����:";
	cin>>b;
	for(int i=0;i<n;i++)
	{
		if(strcmp(a,list[i].card)==0&&strcmp(b,list[i].password)==0)
			return i;
		
	}
	cout<<"���Ż����벻��ȷ"<<endl;
	}
}
int menuSelect()
{
	int c;
	cout<<"***���ܲ˵�***"<<endl;
	cout<<"1.��ѯ���"<<endl;
	cout<<"2.���"<<endl;
    cout<<"3.ȡ��"<<endl;
	cout<<"4.�޸�����"<<endl;
	cout<<"5.�˿�"<<endl;
	cin>>c;
	return c;
}