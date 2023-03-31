#ifndef CARTAO_H
#define CARTAO_H

#include "FormaDePagamento.h"
using namespace std;

class Cartao : public FormaDePagamento {

private:
  string numero_do_cartao_;
  Data data_de_validade_;
  string nome_do_titular_;
  int cvv_;
  int quantidade_de_parcelas_;

public:
  Cartao();
  Cartao(Data data, Cliente cliente, string forma_de_pagamento,
         string numero_do_cartao, Data data_de_validade, string nome_do_titular,
         int cvv, int quantidade_de_parcelas);

  ~Cartao();
  // sets
  void set_numero_do_cartao(string numero_do_cartao);
  void set_data_de_validade(Data data_de_validade);
  void set_nome_do_titular(string nome_do_titular);
  void set_cvv(int cvv);
  void set_quantidade_de_parcelas(int quantidade_de_parcelas);

  // gets
  string get_numero_do_cartao();
  Data get_data_de_validade();
  string get_nome_do_titular();
  int get_cvv();
  int get_quantidade_de_parcelas();
};

#endif