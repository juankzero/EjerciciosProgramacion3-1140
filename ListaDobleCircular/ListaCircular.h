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

	//capacidad maxima de nodos a agregar
	//no permitir insertar/agregar nodos si sobrepasa su capacidad
	ListaCircular(int);

	void agregarElemento(int);
	void imprimirLista();
	void imprimirListaRev();
	bool eliminarElemento(int);

	//Inserta un nuevo nodo en una posicion
	//Las posiciones inician en 0
	void insertarElemento(int pos, int valor);

	//Obtiene la cantidad de nodos agregados en la Lista
	int obtenerCantidad();
};

#endif 

