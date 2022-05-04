#pragma once

#ifndef RACIONAL_H
#define RACIONAL_H

class Racional 
{
private:
	int numerador;
	int denominador;

	void simplificar();

public:
	Racional(); //prototipo de constructor
	Racional(int, int); //prototipo de constructor

	~Racional(); //prototipo de destructor

	void imprimirRacional();
	void imprimirDecimal();

	//operaciones aritmeticas
	Racional sumar(Racional);
	Racional restar(Racional);
	Racional multiplicar(Racional);
	Racional dividir(Racional);

	Racional potencia(int);

};

#endif
