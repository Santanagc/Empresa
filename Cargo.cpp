#include "Cargo.h"

Cargo::Cargo(){}

Cargo::Cargo(string nome_do_cargo){
  this->nome_cargo_ = nome_do_cargo;
}

void Cargo::set_nome_cargo(string cargo){
  this->nome_cargo_ = cargo;
}

string Cargo::get_nome_cargo(){
  return this-> nome_cargo_;
}
