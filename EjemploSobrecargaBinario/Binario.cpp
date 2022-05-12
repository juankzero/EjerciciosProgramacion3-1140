#include "Binario.h"
#include <cmath>

Binario::Binario()
{
	for (int i = 0; i < 8; i++)
		byte[i] = 0;
}

Binario::Binario(const char* _byte) 
{
	for (int i = 0; i < 8; i++)
		byte[i] = _byte[i] - 48;

}

void Binario::operator~()
{
	//invertir los valores del binario this

	for (int i = 0; i < 8; i++) 
	{
		this->byte[i] = this->byte[i] == 1 ? 0 : 1;
	}
}

Binario& Binario::operator++()
{
	// preincremento

	*this = *this + Binario("00000001");
	return *this;
}

Binario& Binario::operator++(int)
{
	// posincremento

	Binario anterior = *this;
	*this = *this + Binario("00000001");

	return anterior;

}

int Binario::toDecimal()
{
	int resultadoDecimal = 0;
	for (int i = 8 - 1, j = 0; i >= 0; i--, j++) 
	{
		resultadoDecimal += byte[i] * pow(2, j);
	}
	return resultadoDecimal;
}

Binario& operator+(const Binario& _b1, const Binario& _b2)
{
	int acarreo = 0;
	Binario resultado;

	for (int i = 8 - 1; i >= 0; i--) 
	{
		if (acarreo == 0)
		{
			if (_b1.byte[i] == 0 && _b2.byte[i] == 0)
			{
				resultado.byte[i] = 0;
				acarreo = 0;
			}
			else if (_b1.byte[i] == 1 && _b2.byte[i] == 1)
			{
				resultado.byte[i] = 0;
				acarreo = 1;
			}
			else
			{
				resultado.byte[i] = 1;
				acarreo = 0;
			}
		}
		else
		{
			int resultadoAcarreo = 0;

			if (_b1.byte[i] == 1)
			{
				resultadoAcarreo = 0;
				acarreo = 1;
			}
			else
			{
				resultadoAcarreo = 1;
				acarreo = 0;
			}

			if (resultadoAcarreo == _b2.byte[i] )
			{
				resultado.byte[i] = 0;
				acarreo = 1;
			}
			else if (resultadoAcarreo == 1 && _b2.byte[i] == 0)
			{
				resultado.byte[i] = 1;
				acarreo = 0;
			}
			else if (resultadoAcarreo == 0 && _b2.byte[i] == 1)
				resultado.byte[i] = 1;
		}
	}

	return resultado;


}

std::ostream& operator<<(std::ostream& out, const Binario& _b1)
{
	out << "{ ";
	for (int i = 0; i < 8; i++)
		out << _b1.byte[i];

	out << " }\n";
	return out;
}
