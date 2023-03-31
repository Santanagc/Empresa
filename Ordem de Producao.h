#ifndef ORDEM_DE_PRODUCAO_H
#define ORDEM_DE_PRODUCAO_H

#include <string>
#include "Produto.h"

using namespace std;

class Ordem_de_Producao{
private:
    Produto* produto;
    int qnt_a_produzir;

public:
    void pedido_prod();
};

#endif