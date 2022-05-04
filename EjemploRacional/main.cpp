#include <conio.h>
#include "Racional.h"
#include <iostream>

int main() 
{
	Racional r1(1, 2);
	Racional r2(4, 3);

	r1.imprimirRacional();
	r2.imprimirRacional();
	
	Racional r3(11, 9);

	r3.imprimirRacional();
	r3.imprimirDecimal();

	Racional r4 = r3.multiplicar(r1);

	Racional r5 = r4.potencia(3);

	r5.imprimirRacional();
	r5.imprimirDecimal();

	Racional r6 = r1.sumar(r2).multiplicar(r3).potencia(2);


	_getch();
}