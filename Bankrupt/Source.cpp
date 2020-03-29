#include <iostream>

using namespace std;

// Create two functions to check bank balances, one normal balance check transaction, 
// and one balance check hacked transaction.
void accountTestHack(int firstScore, int secondScore);
void accountHack(int& firstScore, int& secondScore);

int main()
{
	// Display Title
	cout << "\n\n\t\t ** Hacking the Bank of Terror ** \n\n" << endl;

	// Create the amounts in each of the bank accounts
	int bankOfTerror = 1000000;
	int joesCoffeeShop = 1500;

	// Show the Original balances
	cout << "\n\n\t ** Bank of Terror ** \n\n" << endl;
	cout << "Joe's Coffee Shop Account balance: $" << joesCoffeeShop << "." << endl;
	cout << "Terrorist's balance: $" << bankOfTerror << "." << endl;

	// Call the test hack
	accountTestHack(bankOfTerror, joesCoffeeShop);

	// Then test the hack, phase 1 of 2, which is not permanent and does not work
	// since the int's are not references

	cout << "\n\n\t ** Initializing Bank Balance hack (1/2) ** \n\n" << endl;
	cout << "Joe's Coffee Shop Account balance: $" << joesCoffeeShop << "." << endl;
	cout << "Terrorist's balance: $" << bankOfTerror << "." << endl;

	// Then use the real hack, with references to actually switch the amounts
	accountHack(bankOfTerror, joesCoffeeShop);

	// Then finally print the scores to show the balances have switched properly
	cout << "\n\n\t ** Initializing Bank Balance hack (2/2) ** \n\n" << endl;
	cout << "Joe's Coffee Shop Account balance: $" << joesCoffeeShop << "." << endl;
	cout << "Terrorist's balance: $" << bankOfTerror << "." << endl;
	cout << "\n\n>> Hack successful..." << endl;
	cout << ">> Exiting program..." << endl;
}

// Use the function to test swapping the scores
void accountTestHack(int firstScore, int secondScore)
{
	// Create a int to hold a score for a short amount of time
	int offShoreAccount = firstScore;

	firstScore = secondScore;

	secondScore = offShoreAccount;
}

void accountHack(int& firstScore, int& secondScore)
{
	// Create a int to hold a score for a short amount of time
	int offShoreAccount = firstScore;

	firstScore = secondScore;

	secondScore = offShoreAccount;
}