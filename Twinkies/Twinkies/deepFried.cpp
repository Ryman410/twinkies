#include <iostream>
using namespace std;

int main()
{
	double dollar = 100; //initializing variable with amount
	double quarter = 25;
	double dime = 10;
	double nickel = 5;
	double twinkie = 0;
	char total;

	cout << "Please enter $3.50 using dollars, quarters, dimes, and nickels" << endl << "to obtain your deep fried twinkie." << endl;

	while (twinkie < 350) 
	{
		cout << "Enter b for dollar bill, q for quarter, d for dime, and n for nickel" << endl;
		cin >> total;
		if (total == 'b')
		{
			int dollar = 100;
			twinkie += dollar;
			cout << "You entered a dollar and your total amount entered is: " << twinkie / 100 << endl;
			
		}
		else if (total == 'q')
		{
			int quarter = 25;
			twinkie += quarter;
			cout << "You entered a quarter and your total amount entered is: " << twinkie / 100 << endl;
		}
		else if (total == 'd')
		{
			int dime = 10;
			twinkie += dime;
			cout << "You entered a dime and your total amount entered is: " << twinkie / 100<< endl;
		}
		else if (total == 'n')
		{
			int nickel = 5;
			twinkie += nickel;
			cout << "You entered a nickel and your total amount entered is: " << twinkie / 100 << endl;
		}
	}
	cout << "Here is your heart attack. ENJOY!" << endl;
	cout << "Your change is: " << (twinkie - 350)/100 << endl;
	return 0;
}