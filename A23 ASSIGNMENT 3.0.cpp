#include<iostream>
using namespace std;

class Account
{
	int accNo;
	int bal;
	
	public:
	
	Account(){
		accNo = 0;
		bal = 0;
	}
	Account(int an, int b){
		accNo = an;
		bal = b;
	}
	void setAn(int an){
		accNo = an;
	}
	= bal - amt;
		}
		else{
			cout<<"Insufficient Balance"<<endl;
		}	
		return bal;
	}
	void showBalance(){
		cout<<"Account No.: "<<accNo<<endl<<"Balance: "<<bal<<endl;
		cout<<"-------------------------------------------"<<endl;
	}

};

int main(){
	Account a1(126,600);
	a1.showBalance();
	a1.withdraw(100);
	a1.showBalance();
	a1.deposit(200);
	a1.showBalance();

}


