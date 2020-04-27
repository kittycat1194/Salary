
#include <iostream>
#include <conio.h>

using namespace std;

void main() {
	double salary1, salary2, salary3, salesLvl1, salesLvl2, salesLvl3, 
		totalSalary, salesPercentage;
	const int award = 200;
	string name1, name2, name3;

	
	cout << "Please enter first seller's name: \n";
	cin >> name1;
	cout << "Please enter his (her) sales level: \n";
	cin >> salesLvl1;
	if (salesLvl1 >= 1000) {
		salesPercentage = salesLvl1 * 0.08;
		cout << "Your sales percentage is 8%, " << salesPercentage << " $.\n";
		salary1 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary1 << " $.\n";
	}
	else if (salesLvl1 < 1000 && salesLvl1 >= 500) {
		salesPercentage = salesLvl1 * 0.05;
		cout << "Your sales percentage is 5%, " << salesPercentage << " $.\n";
		salary1 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary1 << " $.\n";
	}
	else {
		salesPercentage = salesLvl1 * 0.03;
		cout << "Your sales percentage is 3%, " << salesPercentage << " $.\n";
		salary1 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary1 << " $.\n";
	}
	cout << "\nPlease enter second seller's name: \n";
	cin >> name2;
	cout << "Please enter his (her) sales level: \n";
	cin >> salesLvl2;
	if (salesLvl2 >= 1000) {
		salesPercentage = salesLvl2 * 0.08;
		cout << "Your sales percentage is 8%, " << salesPercentage << " $.\n";
		salary2 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary2 << " $.\n";
	}
	else if (salesLvl2 < 1000 && salesLvl2 >= 500) {
		salesPercentage = salesLvl2 * 0.05;
		cout << "Your sales percentage is 5%, " << salesPercentage << " $.\n";
		salary2 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary2 << " $.\n";
	}
	else {
		salesPercentage = salesLvl2 * 0.03;
		cout << "Your sales percentage is 3%, " << salesPercentage << " $.\n";
		salary2 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary2 << " $.\n";
	}
	cout << "\nPlease enter third seller's name: \n";
	cin >> name3;
	cout << "Please enter his (her) sales level: \n";
	cin >> salesLvl3;
	if (salesLvl3 >= 1000) {
		salesPercentage = salesLvl3 * 0.08;
		cout << "Your sales percentage is 8%, " << salesPercentage << " $.\n";
		salary3 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary3 << " $.\n";
	}
	else if (salesLvl3 < 1000 && salesLvl3 >= 500) {
		salesPercentage = salesLvl3 * 0.05;
		cout << "Your sales percentage is 5%, " << salesPercentage << " $.\n";
		salary3 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary3 << " $.\n";
	}
	else {
		salesPercentage = salesLvl3 * 0.03;
		cout << "Your sales percentage is 3%, " << salesPercentage << " $.\n";
		salary3 = 200 + salesPercentage;
		cout << "Yout total salary makes " << salary3 << " $.\n";
	}

	if (salesLvl1 > salesLvl2&& salesLvl1 > salesLvl3) {
		cout << "\nThe best seller of the month is " << name1 << endl;
		totalSalary = salary1 + award;
		cout << "He receives an award of " << award <<
			" and his total salary makes " << totalSalary << endl;
	}
	else if (salesLvl2 > salesLvl1&& salesLvl2 > salesLvl3) {
		cout << "\nThe best seller of the month is " << name2 << endl;
		totalSalary = salary2 + award;
		cout << "He receives an award of " << award <<
			" and his total salary makes " << totalSalary << endl;
	}
	else if (salesLvl3 > salesLvl1&& salesLvl3 > salesLvl2) {
		cout << "\nThe best seller of the month is " << name3 << endl;
		totalSalary = salary3 + award;
		cout << "(S)he receives an award of " << award <<
			" and his (her) total salary makes " << totalSalary << endl;
	}
	else
		cout << "\nThere's no winner this time. You're all best!\n";
	_getch();
}