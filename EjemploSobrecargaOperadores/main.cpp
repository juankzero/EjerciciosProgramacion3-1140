#include <iostream>
#include <conio.h>

#include "Fraccion.h"

using std::cout;

int main() 
{
	Fraccion f1(1, 4);
	Fraccion f2(1, 8);

	Fraccion f3 = f1 + f2;

	cout << f3;

	Fraccion f4 = f3 ^ 2; //potencia

	cout << f4;

	_getch();

}