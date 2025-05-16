#pragma once
#include <iostream>
using namespace std;

class Pessoa
{
	// Atributos comuns a todas as classes
	string nome;
	string telefone;
	int idade;

public:
	Pessoa(string nom, string tele, int idad)
	{
		nome = nom;
		telefone = tele;
		idade = idad;
	}

	string getNome() { return nome; }
	string getTelefone() { return telefone; }
	int getIdade() { return idade; }

	// Funções que implementam o comportamento 
	void trabalhar()
	{
		cout << "\n\t" << nome << " esta a trabalhar" << endl;
	} 

	void descansar()
	{
		cout << "\n\t" << nome << " esta a descansar" << endl;
	}

};

// _______________________________________ Classes filhas ______________________________________
class Aluno : public Pessoa
{
	// Atributos especificos do aluno
	int numero;
	string curso;
	bool bolsa;

public:
	Aluno(string nom, string tele, int idad) : Pessoa(nom, tele, idad) {}

	void setNumero(int num){ numero = num; }

	void setCurso(string curs) { curso = curs; }

	void setBolsa(bool bols){ bolsa = bols; }

	void emAvaliacao()
	{
		cout << "\n\t" << getNome() << " com o nº " << numero << " está em avaliacao" << endl;
	}
};

class Professor : public Pessoa
{
	string grauAcademico;
	string departamento;
	string assuntoLecionado;

public:
	Professor(string nom, string tele, int idad) : Pessoa(nom, tele, idad) {}

	void setGrauAcademico(string grau) { grauAcademico = grau; }
	void setGrauDepartamento(string depart) { departamento = depart; }
	void setAssuntoLecionado(string assunto) { assuntoLecionado = assunto; }

	void emReuniao()
	{
		cout << "\n\t" << getNome() << " esta numa reuniao de notas" << endl;
	}
};

