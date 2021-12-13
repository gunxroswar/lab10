#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main()
{	
	double loan,interest,ppy;
	int year=1;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> ppy;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	double nbl=0;

	do{
		double total=loan+loan*interest/100;
		if(total <= ppy ){
			ppy=total;
		}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << loan*interest/100;
		total=loan+loan*interest/100;
		cout << setw(13) << left << total;
		cout << setw(13) << left << ppy;
		nbl=(loan+(loan*interest/100))-ppy;
		cout << setw(13) << left << nbl;
		loan = nbl;
		year=year+1;
		cout << "\n";	
		}while(nbl > 0);
	return 0;
}
