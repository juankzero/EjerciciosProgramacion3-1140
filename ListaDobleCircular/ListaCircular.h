#pragma once

#ifndef LISTA_CIRCULAR_H
#define LISTA_CIRCULAR_H

#include "Nodo.h"

class ListaCircular
{
private:
	Nodo* primero;
	Nodo* ultimo;

	bool estaVacia();

public:
	ListaCircular();

	void agregarElemento(int);
	void imprimirLista();
	void imprimirListaRev();
	bool eliminarElemento(int);

};

#endif 

