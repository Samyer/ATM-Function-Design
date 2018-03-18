#include<iostream>
using namespace std;
#include"account.h"
#include"funtions.h"


int main()
{ 
	Account list[]={{"123","aaa",100.5},{"124","bbb",200.5},{"125","ccc",300.5}};


  
   
	int n;
	n=sizeof(list[3])/sizeof(list[0]);
	while(1)
	{
		int	i= login(list,n);
	     int select;
		do
		{
			  select=menuSelect();
			switch(select)
			{
			case 1:
			 queryBalance(list[i]);
			 break;
			case 2:
			 deposit(list[i]);
			  break;
			case 3:
			 withdraw(list[i]);
			  break;
			case 4:
			 changePassword(list[i]);
			  break;
			case 5:
			;
			}
		}while(select!=5);
	}
return 0;
}