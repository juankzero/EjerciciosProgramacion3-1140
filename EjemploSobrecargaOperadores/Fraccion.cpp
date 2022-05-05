#include "Fraccion.h"
#include <cmath>

void Fraccion::simplificar()
{
	int mayor = this->numerador > this->denominador ? this->numerador : this->denominador;

	for (int i = 2; i <= mayor; i++) 
	{
		if (this->numerador % i == 0 && this->denominador % i == 0)
		{
			this->numerador /= i;
			this->denominador /= i;
			i = 1;
		}
	}
}

Fraccion::Fraccion() : numerador(1), denominador(1)
{
}

Fraccion::Fraccion(int _numerador, int _denominador)
	: numerador(_numerador), denominador(_denominador)
{
	simplificar();
}

Fraccion& operator+(const Fraccion& _f1, const Fraccion& _f2)
{
	Fraccion resultado;
	if (_f1.denominador == _f2.denominador)
	{
		resultado.numerador = _f1.numerador + _f2.numerador;
		resultado.denominador = _f2.denominador;
	}
	else
	{
		resultado.numerador = (_f1.denominador * _f2.numerador) +
			(_f1.numerador * _f2.denominador);
		resultado.denominador = _f1.denominador * _f2.denominador;
	}

	resultado.simplificar();
	return resultado;
	
}

std::ostream& operator<<(std::ostream& out, const Fraccion& _f1)
{
	out << "{ " << _f1.numerador << "/" << _f1.denominador << ", "
		<< float(_f1.numerador) / float(_f1.denominador) << " }\n";

	return out;
}

Fraccion& operator^(const Fraccion& _f1, const int& _exp)
{
	Fraccion resultado;
	resultado.numerador = pow(_f1.numerador, _exp);
	resultado.denominador = pow(_f1.denominador, _exp);

	resultado.simplificar();
	return resultado;
}
