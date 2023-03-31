#include "Departamento.h"
#include <string>

using namespace std;

Departamento::Departamento() {}
Departamento::Departamento(string nome){
	this->nome_do_departamento_ = nome;
}

void Departamento::set_departamento(string nome_do_departamento){ 
	this->nome_do_departamento_ = nome_do_departamento;
}

string Departamento::get_nome(){
	return this->nome_do_departamento_;
}