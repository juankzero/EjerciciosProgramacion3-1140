#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int paresCalcetines(vector<int> conjunto) 
{
	int totalPares = 0;
	vector<int> contados;

	for (int i = 0; i < conjunto.size(); i++) 
	{
		int calcetinActual = conjunto.at(i);
		int cuentaActual = 1;
		bool contado = false;

		for (int j = 0; j < contados.size(); j++) 
		{
			if (calcetinActual == contados.at(j))
				contado = true;
		}

		if (!contado)
		{
			contados.push_back(calcetinActual);
			for (int j = i + 1; j < conjunto.size(); j++) 
			{
				if (calcetinActual == conjunto.at(j))
					cuentaActual++;
			}
		}

		totalPares += cuentaActual / 2;
	}

	return totalPares;

}

int main() 
{
	vector<int> conjunto;
	conjunto.push_back(3);
	conjunto.push_back(1);
	conjunto.push_back(2);
	conjunto.push_back(108);
	conjunto.push_back(1);
	conjunto.push_back(108);
	conjunto.push_back(2);
	conjunto.push_back(1);
	conjunto.push_back(108);
	conjunto.push_back(3);
	conjunto.push_back(2);
	conjunto.push_back(108);

	int cantidad = paresCalcetines(conjunto);

	cout << "El numero de pares de calcetines que coinciden son: " <<
		cantidad << "\n";

	_getch();
}