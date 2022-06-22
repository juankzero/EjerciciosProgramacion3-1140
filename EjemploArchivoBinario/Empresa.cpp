#include "Empresa.h"

#include <fstream>
#include <iostream>

using std::fstream;
using std::ios;
using std::cout;
using std::cin;

//lectura de datos-> ifstream
//escritura de datos-> ofstream
//lectura/escritura de datos -> fstream

struct empleado 
{
	int codigo;		 //4 bytes
	char nombre[20]; //20 bytes
	char cargo[10];  //10 bytes
	float salario;   //4 bytes
	bool estado;     //1 byte
};// sizeof >> 39 bytes


void Empresa::agregarEmpleados()
{
	fstream empresaFile("empleados.bin", ios::out | ios::app | ios::binary);

	if (!empresaFile)
	{
		cout << "Error al intentar abrir el archivo empleados.bin\n";
		return;
	}

	cout << "***  I N G R E S O  D E  E M P L E A D O S ***\n\n";
	
	cout << "Indique la cantidad de empleados a crear: ";
	int cantidadEmpleados;
	cin >> cantidadEmpleados;

	empleado nuevo;

	//empresaFile.seekp(0, ios::end);

	for (int i = 0; i < cantidadEmpleados; i++) 
	{
		cout << "Indique codigo de empleado: ";
		cin >> nuevo.codigo;

		cout << "Indique nombre de empleado: ";
		cin >> nuevo.nombre;

		cout << "Indique cargo del empleado: ";
		cin >> nuevo.cargo;

		cout << "Indique salario del empleado: ";
		cin >> nuevo.salario;

		nuevo.estado = 1;

		empresaFile.write(reinterpret_cast<const char*>(&nuevo), sizeof(empleado));
	}

	empresaFile.close();


}

void Empresa::consultarEmpleados()
{
	fstream empresaFile("empleados.bin", ios::in | ios::binary);

	if (!empresaFile)
	{
		cout << "Error, imposible abrir el archivo empleados.bin\n";
		return;
	}

	//posicionar para lectura sobre archivo bin

	empresaFile.seekg(0, ios::beg);

	empleado lectura;
	
	empresaFile.read(reinterpret_cast<char*>(&lectura), sizeof(empleado));

	while (!empresaFile.eof()) 
	{
		if(lectura.estado)
			cout << "Empleado { codigo: " << lectura.codigo << ", nombre: " << lectura.nombre
				<< ", cargo: " << lectura.cargo << ", salario: " << lectura.salario << " }\n";
		
		empresaFile.read(reinterpret_cast<char*>(&lectura), sizeof(empleado));
	}

	empresaFile.close();


}

void Empresa::modificarEmpleado(int _codigoEmpleado)
{
	fstream empresaFile("empleados.bin", ios::in | ios::out | ios::binary);

	if (!empresaFile)
	{
		cout << "Error al intentar abrir el archivo empleados.bin\n";
		return;
	}

	//pos = 0

	empresaFile.seekg(0, ios::beg);

	empleado busqueda;

	empresaFile.read(reinterpret_cast<char*>(&busqueda), sizeof(empleado));

	//pos = 39

	while (!empresaFile.eof()) 
	{
		if (busqueda.codigo == _codigoEmpleado)
		{
			//modificar el estado del empleado
			busqueda.estado = 0;


			empresaFile.seekp((int)empresaFile.tellg() - sizeof(empleado), ios::beg);
			empresaFile.write(reinterpret_cast<const char*>(&busqueda), sizeof(empleado));

			cout << "Empleado Modificado\n";
			empresaFile.close();
			return;
		}

		empresaFile.read(reinterpret_cast<char*>(&busqueda), sizeof(empleado));
	}
	
	cout << "Empleado no existe!\n";
	empresaFile.close();
}

void Empresa::imprimirEmpleadoPos(int _posicion) //0, 1, 2, 3, ...
{

	fstream empresaFile("empleados.bin", ios::in | ios::binary);

	if (!empresaFile)
	{
		cout << "Error, imposible abrir el archivo empleados.bin\n";
		return;
	}

	//posicionar para lectura sobre archivo bin

	empresaFile.seekg(_posicion * sizeof(empleado), ios::beg);

	
	empleado lectura;
	
	empresaFile.read(reinterpret_cast<char*>(&lectura), sizeof(empleado));

	if (lectura.estado)
		cout << "Empleado { codigo: " << lectura.codigo << ", nombre: " << lectura.nombre
		<< ", cargo: " << lectura.cargo << ", salario: " << lectura.salario << " }\n";

	empresaFile.close();
}

int Empresa::cantidadTotalEmpleados()
{
	fstream empresaFile("empleados.bin", ios::in | ios::binary);

	if (!empresaFile)
	{
		cout << "Error, imposible abrir el archivo empleados.bin\n";
		return -1;
	}

	empresaFile.seekg(0, ios::end);

	int posicionFinal = empresaFile.tellg();
	
	int cantidadEmpleados = posicionFinal / sizeof(empleado);
	empresaFile.close();

	return cantidadEmpleados;
}
