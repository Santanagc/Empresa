#include "Endereco.h"

Endereco::Endereco() {}

Endereco::Endereco (string rua, 
                    int numero,
                    string complemento, 
                    string cidade,
                    string estado,
                    string pais,
                    string cep,
                    float latitude_x2,
                    float longitude_y2) {
  this->rua_ = rua;
  this->numero_ = numero;
  this->complemento_ = complemento;
  this->cidade_ = cidade;
  this->estado_ = estado;
  this->pais_ = pais;
  this->CEP_ = cep;
  this->latitude_x2_ = latitude_x2;
  this->longitude_y2_ = longitude_y2;
  }

void Endereco::set_rua(string rua) { this->rua_ = rua; }

void Endereco::set_numero(int numero) { this->numero_ = numero; }

void Endereco::set_complemento(string complemento) {
  this->complemento_ = complemento;
}

void Endereco::set_estado(string estado) { this->estado_ = estado; }

void Endereco::set_CEP(string cep) { this->CEP_ = cep; }

void Endereco::set_pais(string pais) { this->pais_ = pais; }

void Endereco::set_latitude(float latitude_x2) { this->latitude_x2_ = latitude_x2; }

void Endereco::set_longitude(float longitude_y2) { this->longitude_y2_ = longitude_y2; }

string Endereco::get_rua(){
  return this->rua_;
}

int Endereco::get_numero(){
  return this->numero_;
}

string Endereco::get_complemento(){
  return this->complemento_;
}

string Endereco::get_estado(){
  return this->estado_;
}

string Endereco::get_pais(){
  return this->pais_;
}

string Endereco::get_cep(){
  return this->CEP_;
}

float Endereco::get_latitude(){
  return this->latitude_x2_;
}

float Endereco::get_longitude(){
  return this->longitude_y2_;
}