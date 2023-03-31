#ifndef FORMA_DE_PAGAMENTO_H
#define FORMA_DE_PAGAMENTO_H
#include "Cliente.h"
#include "Data.h"
#include "Pedido_de_Compra.h"

using namespace std;

class FormaDePagamento {

private:
  string forma_de_pagamento_;
  Data data_;
  Cliente *cliente_;
  int quantidade_de_parcelas_;

public:
  FormaDePagamento();
  FormaDePagamento(Data data, Cliente cliente, int quantidade_de_parcelas,
                   string forma_de_pagamento);
  ~FormaDePagamento();

  // sets
  void set_cliente(Cliente cliente);
  void set_data(Data data);
  void set_quantidade_de_parcelas(int quantidade_de_parcelas);
  void set_forma_de_pagamento(string forma_de_pagamento);

  // gets
  Data get_data();
  string get_forma_de_pagamento();
  int get_quantidade_de_parcelas();
  Cliente get_cliente();
};

#endif
