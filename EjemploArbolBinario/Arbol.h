#pragma once


#ifndef ARBOL_H
#define ARBOL_H

#include "NodoArbol.h"

class Arbol
{
private:
	NodoArbol* raiz;
	bool estaVacio();

	//funcion utilitaria recursiva
	NodoArbol* agregarNodoRec(NodoArbol*, int);
	void imprimirRec(NodoArbol*);

public:
	Arbol();

	void agregarNodo(int);
	NodoArbol* buscarNodo(int);

	void imprimir();

};


#endif // !ARBOL


