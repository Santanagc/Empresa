#include "Venda.h"
#include "Produto.h"
#include "Producao.h"
#include <string>

using namespace std;

Venda::Venda() {}

Venda::Venda(int quantidade_vendida, Produto produto, Cliente cliente){
	this->data_venda_ = data_venda_.dateNow();
	this->quantidade_desejada_ = quantidade_vendida;
	this->produto_ = &produto;
	this->cliente_ = &cliente;

	map<Produto, map<int,int>> Fudeu;
}

bool Venda::checar_disponibilidade(){
	if (this->quantidade_desejada_ < this->produto_->get_estoque().conta_estoque()){
		return false;
	} else {
		return true;
	}
}

bool Venda::checar_estoque(){
	if (this->produto_->get_estoque().conta_estoque() < this->produto_->get_estoque_minimo()){
		if (this->produto_->get_estoque_minimo() - this->produto_->get_estoque().conta_estoque() > this->produto_->get_lote_minimo()){
			int diferenca = this->produto_->get_estoque_minimo() - this->produto_->get_estoque().conta_estoque();
			Producao repor_estoque (*produto_, diferenca);
			repor_estoque.produzir();
		} else {
			Producao repor_estoque (*produto_, this->produto_->get_lote_minimo());
			repor_estoque.produzir();
		}
		return true;
	} else {
		return false;
		}
}

void Venda::vender() {
	if(this->checar_disponibilidade() == true){
		this->produto_->atualizar_estoque_venda(quantidade_desejada_);
		string infos;
		infos = to_string(quantidade_desejada_) + "->" + this->cliente_->get_nome();
		this->produto_->registrar_venda(data_venda_, infos);
	}
	this->checar_estoque();
}



