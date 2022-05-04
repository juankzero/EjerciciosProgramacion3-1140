
#include "Racional.h"
#include <iostream>

#include <cmath>

using std::cout;
using std::cerr;

//implementacion del constructor sin
//parametros de la clase
Racional::Racional() : numerador(1), denominador(1)
{
	cout << "...Construyendo Racional...\n";
}

//implementacion del constructor con parametros
Racional::Racional(int _numerador, int _denominador)
	:  numerador(_numerador), denominador(_denominador)
{
	cout << "...Construyendo Racional...\n";
}

Racional::~Racional() 
{
	cout << "...Destruyendo Racional...\n";
}

void Racional::imprimirRacional() 
{
	if (numerador == 0 && denominador == 0)
	{
		cerr << "Resultado es indefinido\n";
		return;
	}
	else if (denominador == 0)
	{
		cerr << "No se puede dividir por cero\n";
		return;
	}

	cout << "{ " << numerador << "/" << denominador << " }\n";
}

void Racional::imprimirDecimal() 
{
	if (numerador == 0 && denominador == 0)
	{
		cerr << "Resultado es indefinido\n";
		return;
	}
	else if (denominador == 0)
	{
		cerr << "No se puede dividir por cero\n";
		return;
	}

	cout << "{ " << float(numerador) / float(denominador) << " }\n";
}


Racional Racional::sumar(Racional _r2)
{
	//caso con denominadores iguales	
	if (this->denominador == _r2.denominador)
		return Racional(this->numerador + _r2.numerador, _r2.denominador);
	else //caso con denominadores distintos
		return Racional((this->numerador * _r2.denominador) + (this->denominador * _r2.numerador),
						this->denominador * _r2.denominador);
}

Racional Racional::restar(Racional _r2)
{
	//caso con denominadores iguales	
	if (this->denominador == _r2.denominador)
		return Racional(this->numerador - _r2.numerador, _r2.denominador);
	else //caso con denominadores distintos
		return Racional((this->numerador * _r2.denominador) - (this->denominador * _r2.numerador),
			this->denominador * _r2.denominador);
}

Racional Racional::multiplicar(Racional _r2)
{
	return Racional(this->numerador * _r2.numerador, this->denominador * _r2.denominador);
}

Racional Racional::dividir(Racional _r2)
{
	return Racional(this->numerador * _r2.denominador, this->denominador * _r2.numerador);
}

Racional Racional::potencia(int _exp)
{
	return Racional(pow(this->numerador, _exp), pow(this->denominador, _exp));
}
