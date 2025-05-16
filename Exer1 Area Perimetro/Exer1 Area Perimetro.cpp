// Exer1 Area Perimetro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Classes.h"

int main()
{
    Forma f;
    f.imprimirDimensoes();

    Forma f1(12, 15);
    f1.imprimirDimensoes();

    Retangulo r1(32, 45);
    cout << "\n\tMedidas do retangulo:  ";
    r1.imprimirDimensoes();
    
    cout << "\n\tArea do retangulo:  " << r1.calcularArea() << endl;
    cout << "\n\tPerimetro do retangulo:  " << r1.calcularPerimetro() << endl;
   
    Triangulo t1(32, 45);
    cout << "\n\tMedidas do Triangulo:  ";
    t1.imprimirDimensoes();

    cout << "\n\tArea do triangulo:  " << t1.calcularArea() << endl;
    cout << "\n\tPerimetro do triangulo:  " << t1.calcularPerimetro() << endl;
}
