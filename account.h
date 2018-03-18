#include<iostream>
using namespace std;
#ifndef ACCOUNT  
#define ACCOUNT  

const MAXLEN = 20;

struct Account
{
	char card[MAXLEN];char password[MAXLEN];double balance;
};

void queryBalance(const Account &x ); 
void changePassword(Account &x ); 
void withdraw(Account &x ); 
void deposit(Account &x);
#endif