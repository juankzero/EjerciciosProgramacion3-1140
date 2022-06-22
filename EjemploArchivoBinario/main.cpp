#include <conio.h>
#include <iostream>

#include "Empresa.h"

int main() 
{

	//Empresa::agregarEmpleados();
	Empresa::consultarEmpleados();

	//Empresa::modificarEmpleado(1005);

	//Empresa::consultarEmpleados();

	//Empresa::imprimirEmpleadoPos(15);

	std::cout << "Cantidad de Empleados en Archivo: " << Empresa::cantidadTotalEmpleados();

	_getch();
}