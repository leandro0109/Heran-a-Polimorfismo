// Exer3 Areas.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 3. Elabore um programa para calcular a �rea de figuras geom�tricas, aplicando os tr�s
// principais pilares da POO, encapsulamento, heran�a e polimorfismo.
// O programa dever� apresentar as seguintes op��es :
// 1 - Escolher a figura geom�trica
// 2 - Criar a figura com base na escolha do utilizador
// 3 - Apresentar o resultado da �rea
// 4 - Apresentar novamente o menu

#include <iostream>
#include "Classes.h"

int main()
{
    Triangulo t1(1, 2);

    t1.mostrarForma();
}