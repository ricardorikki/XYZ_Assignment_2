//Ricardo Knight, Jodian Wong, Oshane Roberts

#include "Accounts.h"
#include <fstream>
#include <iostream>

using std::vector;
using std::string;
using std::to_string;


Accounts::Accounts() : balance(0) {}


bool Accounts::Deposit(double amount)
{

	if (amount >= 0)
	{

		balance += amount;
		log.push_back(Transaction(amount, "Deposit"));
		return true;
	}
	else
	{
		return false;
	}
}

bool Accounts::Withdraw(double amount)
{

	if (amount <= 0)
	{
		return false;
	}
	if (balance >= amount)
	{

		balance -= amount;
		log.push_back(Transaction(amount, "Withdrawal"));
		return true;
	}
}
