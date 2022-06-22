#include <conio.h>
#include "Arbol.h"


int main() 
{
	Arbol arbolito;

	arbolito.agregarNodo(60);
	arbolito.agregarNodo(85);
	arbolito.agregarNodo(45);
	arbolito.agregarNodo(20);
	arbolito.agregarNodo(30);
	arbolito.agregarNodo(66);
	arbolito.agregarNodo(92);

	arbolito.imprimir();


	_getch();
}