#include <iostream>
#include <conio.h>

using namespace std;

int cuboPorValor(int);
void cuboPorReferencia(int*);

int main() 
{
	/*int x = 15;
	char y = 'H';

	int* xPtr = nullptr; 

	/*cout << "Valor de x: " << x << endl;
	cout << "Valor de xPtr: " << xPtr << endl;

	//&: Obtiene la direccion de memoria de una instancia
	
	xPtr = &x;
	
	cout << "Valor de x: " << x << endl;
	cout << "Valor de xPtr: " << xPtr << endl;

	/*cout << "Direccion de x: " << &x << endl;
	cout << "Direccion de xPtr: " << &xPtr << endl;
	
	cout << "Direccion de xPtr: " << &xPtr << endl;
	cout << "xPtr apunta a: " << xPtr << endl;*/

	//*: Accedemos para modificar el contenido de una instancia
	//en una direccion de memoria

	/**xPtr = 9;

	cout << "Valor de x: " << x << endl;
	cout << "Valor de xPtr: " << *xPtr << endl;*/

	//=================================
	/*
	int base = 5;
	cout << "Memory Dir Base before function: " << &base << endl;
	int resultado = cuboPorValor(base);
	cout << "Memory Dir Base after function: " << &resultado << endl;
	cout << "Cubo de " << base << ": " << resultado << endl;
	*/

	int base = 5;
	cout << "Memory Dir Base before function: " << &base << endl;
	cuboPorReferencia(&base);
	cout << "Memory Dir Base after function: " << &base << endl;
	cout << "Cubo de 5" << ": " << base << endl;

	_getch();
}

int cuboPorValor(int _base) 
{
	cout << "Memory Dir Base in function: " << &_base << endl;
	return _base * _base * _base;
}

void cuboPorReferencia(int* _base) 
{
	cout << "Memory Dir Base in function: " << _base << endl;
	*_base = *_base * *_base * *_base;
}