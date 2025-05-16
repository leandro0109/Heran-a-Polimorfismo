#pragma once
#include <iostream>
#include <math.h>
using namespace std;

// Classe base 
// _________________________________________________________
class Forma
{
protected:
	double comprimento, largura;

public:
	Forma(double compriment = 0, double larg = 0)
	{
		comprimento = compriment;
		largura = larg;
	}

	virtual double calcularArea() { return comprimento * largura; }
};

// Classes derivadas
// _________________________________________________________

class Tampo : public Forma
{
public:
	Tampo(double compriment, double altur) : Forma(compriment, altur){}
};

class Azulejo : public Forma
{
private:
	int calcularQuant(double areaTampo)
	{
		return (int)ceil(areaTampo / calcularArea());
	}

public:
	Azulejo(double compriment, double altur) : Forma(compriment, altur) {}

	double calcularValorPagar(double areaTampo, double preco, int &quantidade)
	{
		quantidade = calcularQuant(areaTampo);
		return preco * quantidade;
	}
};
