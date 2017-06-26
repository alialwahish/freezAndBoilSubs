// Name: Ali Bayati
//Freezing and Boiling Points

#include<iostream>
#include"points.h"

using namespace std;


int main()
{
	int t;

	
	
	points test;

	cout << "Enter the temprature you want to test:";
	cin >> t;
	test.settemp(t);
	cout << endl;
	
	cout << "Substances at temprerature :"<<test.gettemp()<<" f"<<endl;
	cout << "========================================================\n";
	
	test.isAlcfreez(t);
	test.isO2freez(t);
	test.iswaterfreez(t);
	test.isAlcboil(t);
	test.isO2boil(t);
	test.iswaterboil(t);
	

	return 0;
}
/*Output
Enter the temprature you want to test:212

Substances at temprerature :212 f
========================================================
Ethyl Alcohol will boil
Oxygen will boil
Water will boil
Press any key to continue . . .
*/