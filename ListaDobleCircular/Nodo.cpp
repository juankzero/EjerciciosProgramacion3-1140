#include "Nodo.h"

Nodo::Nodo(void) : valor(-1), siguiente(nullptr), anterior(nullptr)
{}

Nodo::Nodo(int _valor, Nodo* _anterior, Nodo* _siguiente)
	: valor(_valor), anterior(_anterior), siguiente(_siguiente)
{}

void Nodo::setValor(int _valor)
{
	this->valor = _valor;
}

void Nodo::setSiguiente(Nodo* _siguiente)
{
	this->siguiente = _siguiente;
}

void Nodo::setAnterior(Nodo* _anterior) 
{
	this->anterior = _anterior;
}

int Nodo::getValor()
{
	return valor;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}

Nodo* Nodo::getAnterior() 
{
	return anterior;
}