#include<iostream>
using namespace std;
#include"menu.h"

bool isValid(int number) {

	if (number <= NUMBER_OF_COMMANDS) {
		return true;
	}
	else {
		return false;
	}
}

int takeInput() {
	
	int number;

	do {
		cout << endl << "Choose number of menu: " << endl;
		cin >> number;
	} while (isValid(number) == false);

	return number;
}

void outputExpenses(double *bills,int count) {

	double totalPrice = 0.0;

	for (int i = 0; i < count; i++)
	{
		totalPrice += bills[i];
	}
	cout << totalPrice << endl;
}
void moneySpendOn(double *bills,int count,string *names) {

	double moneySpendOn = 0.0;

	for (int i = 0; i < count; i++)
	{
			cout << names[i]<<" - $";
			cout << bills[i] << endl;
			moneySpendOn += bills[i];
	}
	cout << "Total items: " << count <<" with total expenses $" << moneySpendOn<<endl;
	
}

int main() {
	double expenses = 0.0;
	int num = 0;
	showMenu();
	double bills[100];
	string names[100];
	int number = 0;

	do{
	  number = takeInput();
		switch (number)
		{
		case 1:
			outputExpenses(bills,num);
			break;
		case 2:
			cout << "Enter price:  ";
			cin >> bills[num];
			cout << "Enter name of category:  ";
			cin >> names[num];
			cout << endl;
			num++;
			break;
		case 3:
			moneySpendOn(bills, num,names);
			break;
		case 4:
			
			break;
		default:
			break;
		}
	} while (number < 4);
	
	return 0;
}