#pragma once

#ifndef BINARIO_H
#define BINARIO_H

#include <iostream>

class Binario
{
	friend Binario& operator+(const Binario&, const Binario&);
	friend std::ostream& operator<<(std::ostream&, const Binario&);

private:
	int byte[8];

public:
	Binario();
	Binario(const char*);
};

#endif // !BINARIO_H


