#pragma once

#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

class Universidad
{
public:
	static void ingresarMaterias();
	static void lecturaMaterias();

	static void ingresarAlumnos();
	static void lecturaAlumnos();

	static void ingresarNota();
	static int calcularPromedio(int);
};


#endif // !UNIVERSIDAD_H




