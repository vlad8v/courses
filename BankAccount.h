#pragma once
#include <string>
using namespace std;
class BankAccount {
private:
	string Name;
	string Surname;
	unsigned int balance;
	unsigned int balanceBYN;
	unsigned int balanceUSD;
	string ID;
public:
	BankAccount();
	BankAccount(string, string, unsigned int, unsigned int, string);
	void setName(string);
	void setSurname(string);
	void setBalanceUSD(unsigned int);
	void setBalanceBYN(unsigned int);
	void setID(string);
	string getName(string);
	string getSurName(string);
	unsigned int getBalanceUSD(unsigned int);
	unsigned int getBalanceBYN(unsigned int);
	string getID(string);
	void print();
	void TopUpBalanceUSD(unsigned int);
	void TakeOfBalanceUSD(unsigned int);
	void TopUpBalanceBYN(unsigned int);
	void TakeOfBalanceBYN(unsigned int);
	void buyUSDfromBYN(unsigned int);
};