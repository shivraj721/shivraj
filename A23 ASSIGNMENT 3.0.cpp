#include<iostream>
using namespace std;

class Account
{
	int accNo;
	int bal;
	
	public:
	
	
	


};

int main(){
	Account a1(126,600);
	a1.showBalance();
	a1.withdraw(100);
	a1.showBalance();
	a1.deposit(200);
	a1.showBalance();

}


