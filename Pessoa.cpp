#include "Pessoa.h"
#include <string>

using namespace std;

Pessoa::Pessoa() {
  // NÃO TENHO CERTEZA
  this->nome_ = "Não Cadastrado";
  this->matricula_ = "Não Cadastrado";
  this->cpf_ = "Não Cadastrado";
  this->cnpj_ = "Não Cadastrado";
  this->email_ = "Não Cadastrado";
}

Pessoa::Pessoa(string nome,
              string matricula,
              string cpf,
              string cnpj,
              string email){
  this->nome_ = nome;
  this->matricula_ = matricula;
  this->cpf_ = cpf;
  this->cnpj_ = cnpj;
  this->email_ = email;
}

void Pessoa::set_nome(string nome) { this->nome_ = nome; }

void Pessoa::set_matricula(string matricula) { this->matricula_ = matricula; }

void Pessoa::set_cpf(string cpf) { this->cpf_ = cpf; }

void Pessoa::set_cnpj(string cnpj) { this->cnpj_ = cnpj; }

void Pessoa::set_email(string email) { this->email_ = email; }

string Pessoa::get_nome(){
  return this->nome_;
}

string Pessoa::get_matricula(){
  return this->matricula_;
}

string Pessoa::get_cpf(){
  return this->cpf_;
}

string Pessoa::get_cnpj(){
  return this->cnpj_;
}

string Pessoa::get_email(){
  return this->email_;
}

bool Pessoa::check_cpf(string cpf) {
  if (this->cpf_ == cpf)
    return true;
  return false;
}

bool Pessoa::check_cnpj(string cnpj) {
  if (this->cnpj_ == cnpj)
    return true;
  return false;
}