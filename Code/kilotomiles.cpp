#include <iostream>
using namespace std;

int main(){
	// init
	float kilos;
	float miles;	

	// user inputs # of kilos
	cout << "Enter the number of kilometers traveled: " << endl;
	cin >> kilos;

	// convert kilos to miles
	miles = kilos * 0.621;

	// output # of miles
	cout << "You traveled " << miles << " miles." << endl;

	return 0;
}
