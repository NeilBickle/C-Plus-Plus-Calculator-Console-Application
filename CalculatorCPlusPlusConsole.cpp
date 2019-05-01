// CalculatorCPlusPlusConsole.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	
	
	//Introduction 
	cout << "\r\n Welcome To The C++ Calculator In Console This App Is Designed To Add, Divide, Times And Subtract Enter The Operators" << endl;

		// Variables
		char Operator;
		float NumOne, NumTwo;

		// entering Operator
		cout << "Enter A Operator:";
		cin >> Operator;

		// entering the numbers
		cout << "Enter Two Numbers:" << endl;

		
		cin >> NumOne >> NumTwo;
		
		
		// start of switch 

		switch (Operator) {
		case '+':
			cout << NumOne + NumTwo << endl;
			break;
		case '-':
			cout << NumOne - NumTwo << endl;
			break;
		case '*':
			cout << NumOne * NumTwo << endl;
			break;
		case '/':
			cout << NumOne / NumTwo << endl;
			break;
		default:
			cout << "Error! Operator Is Wrong" << endl;
			break;
		} // End Of Switch Statement
        system("pause");
		return 0;
		
	}


