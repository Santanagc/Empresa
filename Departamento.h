#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <string>

using namespace std;

class Departamento {
private:
	string nome_do_departamento_;

public:
	//construtor
	Departamento();
	Departamento(string nome);

	//sets
	void set_departamento(string nome_do_departamento_);

	//gets
	string get_nome();
};

#endif