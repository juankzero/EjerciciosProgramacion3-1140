#include <conio.h>
#include "ListaSimple.h"

#include <iostream>

using std::cout;

int main() 
{
	ListaSimple ls;

	ls.agregarElemento(7);
	ls.agregarElemento(4);
	ls.agregarElemento(3);
	ls.agregarElemento(9);

	ls.imprimirLista();
	ls.imprimirDirecciones();

	cout << std::endl;

	cout << (ls.eliminarElemento(9) ? "Nodo eliminado!\n" : "Imposible eliminar. Nodo no existe!\n");

	ls.imprimirLista();
	ls.imprimirDirecciones();

	_getch();
}