#include "NodoArbol.h"

NodoArbol::NodoArbol() : valor(-1), hijoIzquierdo(nullptr), hijoDerecho(nullptr)
{
}

NodoArbol::NodoArbol(int _valor, NodoArbol* _hIzquierdo, NodoArbol* _hDerecho)
	: valor(_valor), hijoIzquierdo(_hIzquierdo), hijoDerecho(_hDerecho)
{
}

void NodoArbol::setValor(int _valor)
{
	this->valor = _valor;
}

void NodoArbol::setHijoDerecho(NodoArbol* _hDerecho)
{
	this->hijoDerecho = _hDerecho;
}

void NodoArbol::setHijoIzquierdo(NodoArbol* _hIzquierdo)
{
	this->hijoIzquierdo = _hIzquierdo;
}

int NodoArbol::getValor()
{
	return valor;
}

NodoArbol* NodoArbol::getHijoDerecho()
{
	return hijoDerecho;
}

NodoArbol* NodoArbol::getHijoIzquierdo()
{
	return hijoIzquierdo;
}
