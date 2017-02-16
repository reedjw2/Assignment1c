// Assignment1ATM.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip> 
using namespace std;



int main()
{
	double initialBalance;
	double subTotDeposits = 0.00;
	double subTotWithdrawals = 0.00;
	double subTotChecks = 0.00;
	double endBalance = 0.00;
	char spacerBanner[25] = "_______________________";
	char prompt[200] = "(W)ithdrawal, (D)eposit, (C)heck  (Q)uit";
	char choice;
	double withdrawalAmount;
	double depositAmount;
	double checksAmount;
	char tab[23] = "     ";

	cout << "Please Enter Account Balance" << endl;
	cin >> initialBalance;
	cout << "Enter Transactions:" << endl;
	cout << spacerBanner << endl;
	cout << prompt << endl;

	cin >> choice;
	while (choice != 'q' && choice != 'Q')
	{
		switch (choice)
		{
		case 'w':
		case 'W':
			cout << "Enter amount for withdrawal ---->";
			cin >> withdrawalAmount;
			subTotWithdrawals = subTotWithdrawals + withdrawalAmount;
			cout << spacerBanner << endl;
			cout << prompt << endl;
			cin >> choice;
			continue;
		case 'd':
		case 'D':
			cout << "Enter amount for deposit ---->";
			cin >> depositAmount;
			subTotDeposits = subTotDeposits + depositAmount;
			cout << spacerBanner << endl;
			cout << prompt << endl;
			cin >> choice;
			continue;
		case 'c':
		case 'C':
			cout << "Enter amount for check ---->";
			cin >> checksAmount;
			subTotChecks = subTotChecks + checksAmount;
			cout << spacerBanner << endl;
			cout << prompt << endl;
			cin >> choice;
			continue;
		default:
			cout << "Invalid Entry";
			cout << spacerBanner << endl;
			cout << prompt << endl;
			cin >> choice;
			continue;
		case 'q':
		case 'Q':

			break;
		}
	}
	cout << "Transaction Summary:" << endl;
	cout << spacerBanner << endl;
	std::cout << std::fixed;
	std::cout << std::setprecision(2);
	std::cout.width(22); std::cout << std::right << "Beginning Balance:"<< tab << initialBalance << std::endl;
	std::cout.width(22); std::cout << std::right << "Total Withdrawals:" << tab << subTotWithdrawals << endl;
	std::cout.width(17); std::cout << std::right << "Total Checks:" << tab << subTotChecks << endl;
	std::cout.width(19); std::cout << std::right << "Total Deposits:" << tab << subTotDeposits << endl;
	endBalance = initialBalance + subTotDeposits - subTotChecks - subTotWithdrawals;
	std::cout.width(22); std::cout << std::right << spacerBanner << endl;
	std::cout.width(19); std::cout << std::right << "Ending Balance:" << tab << endBalance << endl;
	return 0;
}


	


	// the more I work to make this look better the more things I mess up






	


