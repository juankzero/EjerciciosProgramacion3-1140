#include "ListaCircular.h"

#include <iostream>

using std::cout;

ListaCircular::ListaCircular(): primero(nullptr), ultimo(nullptr)
{}

bool ListaCircular::estaVacia() 
{
	return primero == nullptr;
}

void ListaCircular::agregarElemento(int _valor) 
{
	Nodo* nuevo = new Nodo(_valor, nullptr, nullptr);

	if (estaVacia()) 
	{
		primero = nuevo;
		ultimo = nuevo;

		primero->setAnterior(ultimo);
		ultimo->setSiguiente(primero);
	}
	else 
	{
		nuevo->setAnterior(ultimo);
		ultimo->setSiguiente(nuevo);

		ultimo = nuevo;

		ultimo->setSiguiente(primero);
		primero->setAnterior(ultimo);
	}
}

void ListaCircular::imprimirLista() 
{
	if (estaVacia())
		return;


	Nodo* actual = primero;
	
	cout << std::endl;

	
	do{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	} while (actual != primero);
}

void ListaCircular::imprimirListaRev()
{
	if (estaVacia())
		return;


	Nodo* actual = ultimo;

	cout << std::endl;


	do {
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getAnterior();
	} while (actual != ultimo);
}
