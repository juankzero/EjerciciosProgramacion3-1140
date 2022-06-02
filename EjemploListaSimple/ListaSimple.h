#pragma once

#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

#include "Nodo.h"

class ListaSimple
{
private:
	Nodo* primero;

	bool estaVacia();

public:
	ListaSimple();

	void agregarElemento(int);
	void imprimirLista();
	void imprimirDirecciones();

	bool eliminarElemento(int);

	//Devuelve la cantidad de elementos agregados a la lista
	int obtenerCantidad();
	//Devuelve la sumatoria de cada elemento en la lista
	int sumaElementos();

	//Agrega un nuevo elemento de forma ordenada (ASC) en la lista
	void agregarElementoOrdenado(int);
};


#endif // !LISTASIMPLE_H


