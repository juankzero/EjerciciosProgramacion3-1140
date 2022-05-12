#pragma once

#ifndef BINARIO_H
#define BINARIO_H

#include <iostream>

class Binario
{
	//funciones no miembro
	friend Binario& operator+(const Binario&, const Binario&);
	friend std::ostream& operator<<(std::ostream&, const Binario&);

	//operaciones bit a bit

	friend Binario& operator-(const Binario&, const Binario&);
	friend Binario& operator*(const Binario&, const Binario&);
	friend Binario& operator/(const Binario&, const Binario&);

	//operaciones logicas
	friend bool& operator&(const Binario&, const Binario&);
	friend bool& operator|(const Binario&, const Binario&);
	friend Binario& operator<<(const Binario&, const int&);
	friend Binario& operator>>(const Binario&, const int&);


private:
	int byte[8];

public:
	Binario();
	Binario(const char*);

	void operator~();//negacion

	Binario& operator++();//preincremento
	Binario& operator++(int);//posincremento

	int toDecimal();
};

#endif // !BINARIO_H


