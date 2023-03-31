#ifndef PRODUCAO_H
#define PRODUCAO_H

#include <string>
#include "Data.h"
#include "Produto.h"

using namespace std;

class Producao{
private:
	Data data_producao_;
	Produto* produto_;
	int quantidade_produzida_;

public:
	//construtores
	Producao();

	/**
   * @brief Construtor que cria um pedido de produção.
   * @param produto Tipo de produto que será produzido.
   * @param quantidade Quantidade a ser produzida.
   */
	Producao(Produto produto, int quantidade);

	//funcoes
	/**
   * @brief Confirma a produção e atauliza o estoque e o histórico de produção.
   */
	void produzir(); //atualiza o estoque e registra a venda
	
};

#endif