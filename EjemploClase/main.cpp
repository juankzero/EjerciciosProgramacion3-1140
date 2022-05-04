#include <iostream>
#include <conio.h>

using std::cout;

class Numero
{
private:
	int valor;

public:
	//constructores
	Numero() : valor(0)
	{}
	Numero(int _valor) : valor(_valor)
	{}
	//destructores
	~Numero() //metodo para liberar la memoria asignada 
	{}

	void imprimirNumero()
	{
		cout << "Numero { " << valor << " }\n";
	}

	void sumar(Numero _b)
	{
		valor += _b.valor;
	}

	bool esPar()
	{
		return valor % 2 == 0;
	}

	bool esPrimo()
	{
		for (int i = 2; i < valor; i++)
		{
			if (valor % i == 0)
				return false;
		}

		return true;
	}

	bool esMultiplo(Numero _b)
	{
		int mayor = valor > _b.valor ? valor : _b.valor;
		int menor = valor < _b.valor ? valor : _b.valor;

		return mayor % menor == 0;

	}
};

int main() 
{
	Numero n1(5); //llamada al constructor sin param
	Numero n2(11); //llamada al constructor con param

	n1.imprimirNumero();
	n2.imprimirNumero();

	n1.sumar(n2);

	n1.imprimirNumero(); //16

	Numero n3(2);

	n2.sumar(Numero(11));
	
	n2.imprimirNumero(); //23

	cout << (n2.esPrimo() ? "n2 es primo\n" : "n2 no es primo\n");
	cout << (n2.esPar() ? "n2 es par\n" : "n2 no es par\n");

	Numero n4(4);
	Numero n5(15);

	cout << (n4.esMultiplo(n5) ? "ambos son multiplos" : "no son multiplos");

	_getch();
}

