#include <conio.h>
#include "ListaCircular.h"

int main() 
{
	ListaCircular lc(10);

	lc.agregarElemento(7);
	lc.agregarElemento(3);
	lc.agregarElemento(2);

	lc.imprimirLista();
	lc.imprimirListaRev();

	lc.eliminarElemento(3);
	lc.imprimirLista();

	lc.eliminarElemento(2);
	lc.imprimirLista();

	lc.eliminarElemento(7);
	lc.imprimirLista();

	lc.agregarElemento(11);
	lc.agregarElemento(9);
	lc.agregarElemento(3);
	lc.imprimirLista();

	//(posicion, valor de nodo)
	lc.insertarElemento(0, 5);
	lc.insertarElemento(3, 2);

	//[5] [11] [9] [3]
	//[5] [11] [9] [2] [3]

	_getch();
}