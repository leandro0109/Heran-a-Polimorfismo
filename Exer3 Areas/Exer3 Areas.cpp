// Exer3 Areas.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 3. Elabore um programa para calcular a área de figuras geométricas, aplicando os três
// principais pilares da POO, encapsulamento, herança e polimorfismo.
// O programa deverá apresentar as seguintes opções :
// 1 - Escolher a figura geométrica
// 2 - Criar a figura com base na escolha do utilizador
// 3 - Apresentar o resultado da área
// 4 - Apresentar novamente o menu

#include <iostream>
#include "Classes.h"

int main()
{
    Triangulo t1(1, 2);

    t1.mostrarForma();
}