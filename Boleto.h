#ifndef BOLETO_H
#define BOLETO_H

#include <iostream>
#include "FormaDePagamento.h"

using namespace std;

class Boleto : public FormaDePagamento {
private:
    int dias_;
    Data* data_venda_;
    Cliente* cliente_;
    int valor_;

public:
    Boleto(int dias);
    ~Boleto();

    void pagamento(Data data_venda, Cliente cliente, int valor);

    void pagar();

};

#endif 