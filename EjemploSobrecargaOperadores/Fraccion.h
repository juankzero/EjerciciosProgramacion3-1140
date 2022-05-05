#pragma once

#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>


class Fraccion
{
	friend Fraccion& operator+(const Fraccion&, const Fraccion&);
	friend std::ostream& operator<<(std::ostream&, const Fraccion&);
	friend Fraccion& operator^(const Fraccion&, const int&);
	
private:
	int numerador, denominador;
	void simplificar();
public:
	Fraccion();
	Fraccion(int, int);
};


#endif // !FRACCION_H



