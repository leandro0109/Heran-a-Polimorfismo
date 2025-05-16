#pragma once
#include <iostream>
using namespace std;

class Forma
{
protected:
	float comprimento, largura;

public:
	Forma(float compriment = 0, float altur = 0)
	{
		comprimento = compriment;
		largura = altur;
	}

	void imprimirDimensoes()
	{
		cout << comprimento << " x " << largura << endl;
	}

	virtual float calcularArea() { return 0; }
	virtual float calcularPerimetro() { return 0; }
};

class Retangulo : public Forma
{
public:
	Retangulo(float compriment, float altur) : Forma(compriment, altur){}

	float calcularArea()
	{
		return comprimento * largura;
	}

	float calcularPerimetro()
	{
		return 2 * (comprimento + largura);
	}
};

class Triangulo : public Forma
{
public:
	Triangulo(float compriment, float altur) : Forma(compriment, altur) {}

	float calcularArea()
	{
		return (comprimento * largura) / 2;
	}

	float calcularPerimetro()
	{
		return 2 * (comprimento + largura);
	}
};

