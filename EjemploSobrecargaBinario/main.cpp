#include <iostream>
#include <conio.h>
#include "Binario.h"

using std::cout;

int main() 
{
	Binario b1("01010011");

	Binario b2("00001011");

	Binario b3 = b1 + b2;
	
	cout << b3.toDecimal();

	_getch();
}