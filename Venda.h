#ifndef VENDA_H
#define VENDA_H

#include <string>
#include "Data.h"
#include "Produto.h"
#include "Cliente.h"

using namespace std;

class Venda{
private:
	Data data_venda_;
	Produto* produto_;
	Cliente* cliente_;
	int quantidade_desejada_;

public:
	//construtores
	Venda();

	/**
   * @brief Construtor que cria um pedido de venda
   * @param quantidade_vendida Quantidade desejada pelo cliente.
   * @param produto Tipo de produto.
   * @param cliente Comprador.
   */
	Venda(int quantidade_desejada,
			Produto produto,
			Cliente cliente);

	

	//funcoes
	/**
   * @brief Checa disponibilidade do produto no estoque.
   */
	bool checar_disponibilidade();

	/**
   * @brief Checa se o número de determinado produto está abaixo do mínimo que deveria ter no estoque.
   */
	bool checar_estoque();
	
	/**
   * @brief Confirma a venda e atauliza o estoque e o histórico de vendas.
   */
	void vender();
	
};

#endif