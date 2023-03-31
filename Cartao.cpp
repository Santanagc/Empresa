#include "Cartao.h"
#include <iostream>

using namespace std;

  Cartao::Cartao(Data data_, Cliente cliente_,
         string forma_de_pagamento_, string numero_do_cartao,
         Data data_de_validade, string nome_do_titular, int cvv, int quantidade_de_parcelas)
{
    this->numero_do_cartao_ = numero_do_cartao;
    this->data_de_validade_ = data_de_validade;
    this->nome_do_titular_ = nome_do_titular;
    this->cvv_ = cvv;
    this->quantidade_de_parcelas_ = quantidade_de_parcelas;
    
}
// sets
  void Cartao::set_numero_do_cartao(string numero_do_cartao){
  this->numero_do_cartao_ = numero_do_cartao;
  }
  void Cartao::set_data_de_validade(Data data_de_validade){
  this->data_de_validade_ = data_de_validade;
  }
  void Cartao::set_nome_do_titular(string nome_do_titular){ 
  this->nome_do_titular_ = nome_do_titular;
  }
  void Cartao::set_cvv(int cvv){
    this->cvv_ = cvv; 
  }
 void Cartao::set_quantidade_de_parcelas(int quantidade_de_parcelas){
   this->quantidade_de_parcelas_ = quantidade_de_parcelas;
 }

// gets

  string Cartao::get_numero_do_cartao(){
    return numero_do_cartao_;
  }
  Data Cartao::get_data_de_validade(){
    return data_de_validade_;
  }
  string Cartao::get_nome_do_titular(){
    return nome_do_titular_;
  }
  int Cartao::get_cvv(){
    return cvv_;
  }
  int Cartao::get_quantidade_de_parcelas(){
    return quantidade_de_parcelas_;
  }