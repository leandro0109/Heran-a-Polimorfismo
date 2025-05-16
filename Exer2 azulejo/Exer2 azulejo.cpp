// Exer2 azulejo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>
#include <iomanip>
#include "Classes.h"

// Prototipos
void lerValor(string str, double& valor);
void lerDimensoes(string str, double& comp, double& larg);

int main()
{
	SetConsoleOutputCP(1252);

	double comp, larg;

	lerDimensoes("\n\tDimensões do tampo da mesa (cm):		", comp, larg);
	Tampo t(comp, larg);

	lerDimensoes("\n\tDimensões do azulejo (cm):		", comp, larg);
	Azulejo az(comp, larg);

	cout << "\n\tArea do azulejo:	" << az.calcularArea() << endl;
	cout << "\n\tArea do tampo:	" << t.calcularArea() << endl;

	// Calculos
	double precoAzulejo;
	int quant;
	lerValor("\n\tPreco de cada azulejo:	", precoAzulejo);
	double precoTotal = az.calcularValorPagar(t.calcularArea(), precoAzulejo, quant);
	cout << "\n\tQuantidade de azulejos necessaria:		" << quant << endl;
	cout << "\n\tTotal a pagar:		" << fixed << setprecision(2) << precoTotal << " €" << endl;
}

// ___________________________________________
// Ler e validar o valor de entrada
void lerValor(string str, double& valor)
{
	while (true)
	{
		cout << str;
		if (cin >> valor && valor > 0)
			break;
		cin.clear();
		cin.ignore(10, '\n');
	}
}

// ___________________________________________
// Ler os dois valores para as dimensões
void lerDimensoes(string str, double& comp, double& larg)
{
	cout << str;
	lerValor("\n\tComprimento:	", comp);
	lerValor("\n\tLargura:	", larg);
}