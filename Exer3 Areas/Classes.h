#pragma once
#include <iostream>
using namespace std;

class Forma
{
public: 
	virtual double calcularArea() { return 0; }
};

class Triangulo : public Forma
{
public:
	Triangulo(double compriment, double altur) : Forma(compriment, altur) {};

	void mostrarForma() {
		cout << "\n\t/odosad\
					asda _";
	}
};

class Quadrado : public Forma
{
	double lado;

public:
	void setLado(double ladoQuad)
	{
		lado = ladoQuad;
	}

	double getLado() { return lado; }
	double calcularArea() { return lado * lado; }
};

class Retangulo : public Forma
{
	double comprimento, largura;

public:
	void setLado(double ladoQuad)
	{
		lado = ladoQuad;
	}

	double getLado() { return lado; }
	double calcularArea() { return lado * lado; }
};

