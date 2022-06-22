#include "Arbol.h"
#include <iostream>

bool Arbol::estaVacio()
{
    return raiz == nullptr;
}

Arbol::Arbol() : raiz(nullptr)
{
}

void Arbol::agregarNodo(int _valor)
{
    raiz = agregarNodoRec(raiz, _valor);
}

NodoArbol* Arbol::agregarNodoRec(NodoArbol* _raiz, int _valor) 
{
    if (_raiz == nullptr)
        //NodoArbol* nuevo = new NodoArbol(_valor, nullptr, nullptr);
        //_raiz = nuevo;
        _raiz = new NodoArbol(_valor, nullptr, nullptr);
    else if (_valor < _raiz->getValor())
        _raiz->setHijoIzquierdo(agregarNodoRec(_raiz->getHijoIzquierdo(), _valor));
    else if (_valor > _raiz->getValor())
        _raiz->setHijoDerecho(agregarNodoRec(_raiz->getHijoDerecho(), _valor));

    return _raiz;
}

void Arbol::imprimirRec(NodoArbol* _raiz)
{
    if (_raiz == nullptr)
        return;

    std::cout << "[ " << _raiz->getValor() << " ] ";
    imprimirRec(_raiz->getHijoIzquierdo());
    imprimirRec(_raiz->getHijoDerecho());
}

void Arbol::imprimir() 
{
    std::cout << std::endl;
    imprimirRec(raiz);
}
