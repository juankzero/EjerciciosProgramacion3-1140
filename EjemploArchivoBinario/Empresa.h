#pragma once

#ifndef EMPRESA_H
#define EMPRESA_H

class Empresa
{
public:
	static void agregarEmpleados();
	static void consultarEmpleados();
	static void modificarEmpleado(int);

	static void imprimirEmpleadoPos(int);

	static int cantidadTotalEmpleados();

};

#endif // !EMPRESA_H




