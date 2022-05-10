#include <iostream>
#include <conio.h>
#include "Binario.h"

using std::cout;

int main() 
{
	Binario b1("01010011");
	Binario b2("01110010");

	cout << b1;
	cout << b2;

	Binario b3 = b1 + b2;

	cout << b3;
	
	_getch();
}