// HerancaPessoa.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Classes.h"

int main()
{
	Pessoa p("David", "92592139", 25);
	p.trabalhar();
	
	Aluno al("Maria", "925010103", 36);
	al.setNumero(154);
	al.setCurso("Programacao");
	al.setBolsa(false);
	al.trabalhar();
	al.emAvaliacao();

	Professor prof("Rui", "912391923", 35);
	prof.setGrauAcademico("Mestrado");
	prof.setGrauDepartamento("Redes");
	prof.setAssuntoLecionado("Administracao de redes");
	prof.trabalhar();
	prof.emReuniao();
}
