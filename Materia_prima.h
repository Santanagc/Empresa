#ifndef MATERIA_PRIMA_H
#define MATERIA_PRIMA_H

#include <string>
#include <vector>
#include "Fornecedor.h"
#include "Estoque.h"

using namespace std;

class Materia_prima{
private:
  string nome_;
  string unidade_medida_;
  int estoque_min_;
  int compra_min_;
  vector<Fornecedor*> fornecedores_;
  Estoque* estoque_;

public:
  Materia_prima();
  Materia_prima(string nome_,
                string unidade_medida_,
                int estoque_min_,
                int compra_min_,
                Estoque estoque);

  void set_nome(string nome);
  void set_unidade_medida(string unidade_medida);
  void set_estoque_min(int estoque_min);
  void set_compra_min(int compra_min);
  //void set_estoque(int)

  string get_nome();
  string get_unidade_medida();
  int get_estoque_min();
  int get_compra_min();
  //int get_estoque();
   vector<Fornecedor*> get_fornecedores();

  /**
   * @brief Adiciona o fornecedor ao vetor de fornecedores que vendem determinada matéria-prima.
   * @param fornecedor novo fornecedor.
   */
  void add_fornecedor(Fornecedor fornecedor);
  /**
   * @brief Remove um fornecedor do vetor de fornecedores que vendem determinada matéria-prima.
   * @param fornecedor fornecedor que não venderá mais a matéria-prima.
   */
  void remover_fornecedor(Fornecedor fornecedor);
  /**
   * @brief Compara o preço de venda dos fornecedores que vendem 
   *        determinada matéria-prima e retorna o que vende ao menor preço.
   */
  Fornecedor fornecedor_mais_em_conta();
  
};

#endif