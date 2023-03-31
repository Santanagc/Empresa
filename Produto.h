#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include <vector>
#include <map>
#include "Data.h"
#include "Estoque.h"
#include "Registros.h"
#include "Usuario.h"

using namespace std;

class Produto {
private:
  Usuario* log_; //
  Data dt_; //
  string nome_do_produto_;
  string codigo_;
  float preco_atual_;
  int lote_minimo_;
  int estoque_minimo_;
  int lote_mais_novo_;
  Estoque* estoque_;
  Registros* registro_;

public:
  // construtores
  Produto();

   Produto::Produto(string nome,
                   string codigo,
                   float preco,
                   int lote_min,
                   int estoque_min,
                   Estoque estoque,
                   Registros registro);

  // sets
  void set_nome(string nome);
  void set_codigo(string codigo);
  void set_preco(float preco);
  void set_lote_minimo(int lote_minimo);
  void set_estoque_minimo(int estoque_minimo);
  void set_estoque(Estoque estoque);

  // gets
  string get_nome();
  string get_codigo();
  float get_preco();
  int get_lote_minimo();
  int get_estoque_minimo();
  Estoque get_estoque();


  	/**
   * @brief Atualiza o historico de preços do produto.
   * @param preco Novo preç com a correção feita.
   * */
	void atualizar_preco(float preco);

  	/**
   * @brief Atualiza o estoque após uma produção, adicionando um novo lote com a quantidade produzida.
   * @param Quantidade_produto Quantidade de produto produzido.
   * */
	void atualizar_estoque_prod(int quantidade_produto);
	
	/**
   * @brief Atualiza o estoque após uma venda, subtraindo da quantidade atual o número de produtos,
   * 		priorizando lotes mais antigos.
   * @param Quantidade_produto Quantidade de produto vendido.
   */
	void atualizar_estoque_venda(int quantidade_produto);
  
  /**
   * @brief Atualiza o histórico de produção.
   * @param data Data na qual o lote de produtos foi produzido.
   * @param quantidade Quantidade produzido.
   */
  void registrar_producao(Data data, int quatidade);
  
  /**
   * @brief Atualiza o histórico de vendas.
   * @param data Data na qual os produtos foram vendidos.
   * @param infos String que concatena a quantidade vendida e o cliente que comprou.
   */
  void registrar_venda(Data data, string infos);
};

#endif