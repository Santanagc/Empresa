#ifndef ORCAMENTO_VPR_H
#define ORCAMENTO_VPR_H

#include <map>
#include "Produto.h"
#include "Cliente.h"
#include "Orcamento.h"

using namespace std;

class Orcamento_VPR: public Orcamento
{
private:
    Cliente* cliente_;
    map<int, Produto*> qtd_produto_;

public:
    Orcamento_VPR();
    
    void set_cliente(Cliente);
    void add_produto(int, Produto);

      /**
   * @brief Calcula o total a ser pago a partir do preço e quantidade de cada produto.
   */
    void calcular_quantia();

    Cliente get_cliente();

      /**
   * @brief Fecha o orçamento e gera um pedido de compra.
   */
    void gerar_pedido();

};

#endif