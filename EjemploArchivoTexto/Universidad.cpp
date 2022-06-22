#include "Universidad.h"

#include <fstream>
#include <iostream>

//escritura en archivos
using std::ofstream;
using std::ifstream;
using std::ios;
using std::cout;
using std::cin;

//Se encarga de crear diferentes materias y almacenarlas
//en archivo materias.dat
void Universidad::ingresarMaterias()
{
	//ios::out -> modo de apertura para escritura
	//ios::in -> modo de apertura para lectura
	ofstream materiasFile("materias.dat", ios::out | ios::app);

	if (!materiasFile)
	{
		std::cout << "Error al intentar abrir archivo materias.dat";
		return;
	}

	int codigoMateria;
	char nombreMateria[20];
	int uvs;

	int cantidadMaterias;

	cout << "*** I N G R E S O  D E  M A T E R I A S ***\n\n";

	cout << "Ingrese la cantidad de materias: ";
	cin >> cantidadMaterias;

	for (int i = 0; i < cantidadMaterias; i++) 
	{
		cout << "Materia " << (i + 1) << "\n";
		
		cout << "Codigo de materia: ";
		cin >> codigoMateria;

		cout << "Nombre de materia: ";
		cin >> nombreMateria;

		cout << "Uvs de Materia: ";
		cin >> uvs;

		materiasFile << codigoMateria << ' ' << nombreMateria << ' ' << uvs << '\n';
	}

	materiasFile.close();

}

void Universidad::lecturaMaterias()
{
	ifstream archivoMateria("materias.dat", ios::in);

	if (!archivoMateria)
	{
		cout << "Error de lectura en archivo materias.dat\n";
		return;
	}

	int codigoMateria;
	char nombreMateria[20];
	int uvsMateria;

	archivoMateria >> codigoMateria >> nombreMateria >> uvsMateria;

	while (!archivoMateria.eof()) 
	{
		cout << codigoMateria << "\t" << nombreMateria << "\t" << uvsMateria << std::endl;
		archivoMateria >> codigoMateria >> nombreMateria >> uvsMateria;
	}

	archivoMateria.close();

}
