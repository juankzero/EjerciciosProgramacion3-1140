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
	cout << std::endl;
	if (estaVacia())
	{
		cout << "{ lista vacia }\n";
		return;
	}


	Nodo* actual = primero;
	
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

bool ListaCircular::eliminarElemento(int _valor)
{
	if (estaVacia())
		return false;

	Nodo* actual = primero;

	do 
	{
		if (actual->getValor() == _valor)
		{
			if (actual == primero && actual == ultimo)
			{
				primero = ultimo = nullptr;
			}else if (actual == primero)
			{
				primero = actual->getSiguiente();
				primero->setAnterior(ultimo);
				ultimo->setSiguiente(primero);		
			}
			else if (actual == ultimo)
			{
				ultimo = actual->getAnterior();
				ultimo->setSiguiente(primero);
				primero->setAnterior(ultimo);
			}
			else
			{
				actual->getAnterior()->setSiguiente(actual->getSiguiente());
				actual->getSiguiente()->setAnterior(actual->getAnterior());
			}

			delete actual;
			return true;
		}

		actual = actual->getSiguiente();

	} while (actual != primero);

	return false;
}
