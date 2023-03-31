#ifndef ORCAMENTO_CMP_H
#define ORCAMENTO_CMP_H

#include <map>
#include "Fornecedor.h"
#include "Materia_prima.h"

using namespace std;

class Orcamento_CMP {

private:
    //Fornecedor* fornecedor_;
    map<int, Materia_prima*> qtd_materia_prima_;

public:
    Orcamento_CMP();
    void set_fornecedor(Fornecedor fornecedor);
    
    void add_mp(Materia_prima materia_prima, int quantidade);

    /**
   * @brief Calcula o total a ser pago a partir do preço e quantidade de cada produto.
   */
    void calcular_quantia();

    Fornecedor get_fornecedor();

    /**
   * @brief Fecha o orçamento e gera uma ordem de compra.
   */
  void gerar_ordem();  
};

#endif