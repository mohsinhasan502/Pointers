#include<iostream>
using namespace std;

int main()
{
	int *pntr, orgnl;
	
	cout << "Enter any number : ";

	cin >> orgnl;

	pntr = &orgnl;

	cout << "\n\nAddress of " << *pntr << " is " << pntr;

	cout << "\n\nEntered number is " << *pntr;



	system("pause>0");
}