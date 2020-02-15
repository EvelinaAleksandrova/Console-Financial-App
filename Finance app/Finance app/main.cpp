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
		cout << "Choose number of menu: " << endl;
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

int main() {
	double expenses = 0.0;
	int num = 0;
	showMenu();
	double bills[100];
	string names[100];


	do{

		int number = takeInput();
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
			break;
		default:
			break;
		}
	} while (true);
	

	return 0;
}