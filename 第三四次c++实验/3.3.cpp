#include<iostream>
#include"mytemperature.h"

using namespace std;

double celsius_to_fah(double cel)
{
	cout << cel << "    " << cel * 1.8 + 32;
	return 0;
}

double fahrenheit_to_cels(double fah)
{
	cout << fah << "    " << (fah - 32) / 1.8 << endl;
	return 0;
}

int main()
{
	cout << "Celsius"<<"    "<<"Fahrenheit"<<"   "<<"|"<<"   "<<"Fahrenheit"<<"    "<<"Celsius"<< endl;
	for (int i = 0; i < 10; i++)
	{
		celsius_to_fah(40-i);
		cout << "   " << "|" << "   ";
		fahrenheit_to_cels(120-10*i);
	}
	return 0;
}