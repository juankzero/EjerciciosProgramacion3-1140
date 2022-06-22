#pragma once

#ifndef NODO_ARBOL_H
#define NODO_ARBOL_H

class NodoArbol
{
private:
	int valor;
	NodoArbol* hijoDerecho;
	NodoArbol* hijoIzquierdo;

public:
	NodoArbol();
	NodoArbol(int, NodoArbol*, NodoArbol*);

	void setValor(int);
	void setHijoDerecho(NodoArbol*);
	void setHijoIzquierdo(NodoArbol*);

	int getValor();
	NodoArbol* getHijoDerecho();
	NodoArbol* getHijoIzquierdo();
};


#endif // !NODO_ARBOL_H
