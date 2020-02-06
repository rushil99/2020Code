#include <iostream>
using namespace std;

int main (int argc, char *argv)
	
	float vin, R1, R2, Vout;

	if (arc == 4)
	{
		Vin = (float)strtod(argv[1], NULL);
		R1 = (float)strtod(argv[2], NULL);
		R2 = (float)strtod(argv[3], NULL);
	}
	else
{
	//Vin = 5;
	//R1 = 10;
	//R2 = 5;


/*
	cout << "Enter Vin";
	cin >> Vin;

	cout << endl << "Enter R1: ";
	cin >> R1;

	cout << endl << "Enter R2: ";
	cin >> R2;
*/

	Vout (R2/(R1+R2))*Vin;
	cout << endl << Vout << endl;
	cout << argc << endl;

	return 0;

}