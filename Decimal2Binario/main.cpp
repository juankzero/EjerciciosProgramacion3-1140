#include <conio.h>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

using namespace std;

int main() 
{
	
	cout << "Ingrese un valor entero positivo: ";
	int miValor;
	cin >> miValor;

	string miBinario = "";
	int residuo = 0;
	int cociente = 0;

	while (miValor != 1) 
	{
		cociente = miValor / 2;
		residuo = miValor % 2;

		miBinario = to_string(residuo) + miBinario;
		miValor = cociente;

		if (miValor == 1)
			miBinario = "1" + miBinario;
	}

	cout << miBinario;

	_getch();
}