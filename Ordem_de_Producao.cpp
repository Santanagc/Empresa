#include "Ordem_de_Producao.h"
#include <string>

using namespace std;

Producao::Producao() {}

Producao::Producao(Produto produto, int quantidade) {
	this->data_producao_ = data_producao_.dateNow();
	this->produto_ = &produto;
	this->quantidade_produzida_ = quantidade;
}

void Producao::produzir(){
	if (this->quantidade_produzida_ < this->produto_->get_lote_minimo()){
		this->quantidade_produzida_ = this->produto_->get_lote_minimo();
	}
	this->produto_->atualizar_estoque_prod(quantidade_produzida_);
	this->produto_->registrar_producao(data_producao_, quantidade_produzida_);
}