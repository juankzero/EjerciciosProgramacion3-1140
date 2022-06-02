#include <conio.h>
#include "ListaCircular.h"

int main() 
{
	ListaCircular lc;

	lc.agregarElemento(7);
	lc.agregarElemento(3);
	lc.agregarElemento(2);

	lc.imprimirLista();
	lc.imprimirListaRev();

	_getch();
}