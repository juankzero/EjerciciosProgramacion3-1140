#include "ListaSimple.h"
#include <iostream>

using std::cout;

ListaSimple::ListaSimple() : primero(nullptr)
{}

bool ListaSimple::estaVacia() 
{
	return primero == nullptr;
}

void ListaSimple::agregarElemento(int _valor) 
{

	Nodo* nuevo = new Nodo(_valor, nullptr);

	if (estaVacia())
		primero = nuevo;
	else
	{
		Nodo* actual = primero;

		while (actual->getSiguiente() != nullptr)
			actual = actual->getSiguiente();

		actual->setSiguiente(nuevo);
	}

	cout << "Nodo agregado!\n";

}

void ListaSimple::imprimirLista() 
{
	cout << std::endl;

	if (estaVacia())
	{
		cout << "Lista no tiene elementos!\n";
		return;
	}

	Nodo* actual = primero;

	while (actual != nullptr)
	{
		cout << "[ " << actual->getValor() << " ] ";
		actual = actual->getSiguiente();
	}
}

void ListaSimple::imprimirDirecciones()
{
	cout << std::endl;

	if (estaVacia())
	{
		cout << "Lista no tiene elementos!\n";
		return;
	}

	Nodo* actual = primero;

	while (actual != nullptr)
	{
		cout << "[ " << actual << " ] ";
		actual = actual->getSiguiente();
	}
}

bool ListaSimple::eliminarElemento(int _valor) 
{
	if (estaVacia())
	{
		cout << "Imposible eliminar: Lista vacia!\n";
		return false;
	}

	Nodo* actual = primero;
	Nodo* anterior = nullptr;

	while (actual != nullptr) 
	{
		if (actual->getValor() == _valor) 
		{
			if (actual == primero)
			{
				primero = primero->getSiguiente();
				delete actual;
			}
			else
			{
				anterior->setSiguiente(actual->getSiguiente());
				delete actual;
			}

			return true;
		}

		anterior = actual;
		actual = actual->getSiguiente();
	}

	return false;
}
