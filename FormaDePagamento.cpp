#include "FormaDePagamento.h"

#include <iostream>
using namespace std;

FormaDePagamento::FormaDePagamento(){}

FormaDePagamento::FormaDePagamento(Data data, Cliente cliente,
                                   int quantidade_de_parcelas,
                                   string forma_de_pagamento) {
  this->data_ = data;
  this->cliente_ = &cliente;
  this->forma_de_pagamento_ = forma_de_pagamento;
  this->quantidade_de_parcelas_ = quantidade_de_parcelas;
}

FormaDePagamento::~FormaDePagamento() {}

void FormaDePagamento::set_cliente(Cliente cliente) {
  this->cliente_ = &cliente;
}

void FormaDePagamento::set_data(Data data) { this->data_ = data; }

void FormaDePagamento::set_quantidade_de_parcelas(int quantidade_de_parcelas) {
  this->quantidade_de_parcelas_ = quantidade_de_parcelas;
}

void FormaDePagamento::set_forma_de_pagamento(string forma_de_pagamento) {
  this->forma_de_pagamento_ = forma_de_pagamento;
}

Data FormaDePagamento::get_data()
{
  return this->data_; 
}

string FormaDePagamento::get_forma_de_pagamento() {
  return this->forma_de_pagamento_;
}

int FormaDePagamento::get_quantidade_de_parcelas() {
  return this->quantidade_de_parcelas_;
}

Cliente FormaDePagamento::get_cliente() 
{ return *cliente_; 
}
