#include <iostream>
#include <iomanip>
using namespace std;

int calc_change(double change)
{
	int dollars = 0;
	int cents = 0;
	int quarters = 0;
	int dimes = 0;
	int nickels = 0;
	int pennies= 0;

	dollars = static_cast<int>(change);
	cents = (change - dollars) * 100;
	while (cents >= 25)
	{
		cents = cents - 25;
		quarters ++;
	}
	while (cents >= 10)
	{
		cents = cents - 10;
		dimes ++;
	}
	while (cents >= 5)
	{
		cents = cents - 5;
		nickels ++;
	}
	while (cents >= 1)
	{
		cents = cents - 1;
		pennies ++;
		cout << cents << endl;
	}

	cout << endl;
	cout << "dollars "  << dollars  << endl;
	cout << "quarters " << quarters << endl; 
	cout << "dimes "    << dimes    << endl;
	cout << "nickels "  << nickels  << endl;
	cout << "pennies "  << pennies  << endl;

	return 0;
}

int main()
{
	double purchase, received, change;
	int dollars = 0;
	int cents = 0;
	cout.precision(2);

	cout << "Enter a purchase amount: ";
	cin >> purchase;
	cout << endl;

	cout << "Enter amount recieved: ";
	cin >> received;
	cout << endl;

	change = received - purchase;
	if (change >= 0)
	{
		cout << "Total Change: $" << fixed << change << endl;
		calc_change(change);
	}
	else
	{
		change = change * -1;
		cout << "You owe: $" << fixed << change << endl;
		calc_change(change);
	}
	
	return 0;
}
