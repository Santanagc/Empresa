#include "Producao.h"
#include <string>

using namespace std;

Producao::Producao() {}

/*
Producao::Producao(int qnt_desejada) {
	this->produto_->atualizar_estoque_prod(qnt_desejada_);
}
*/

Producao::Producao(Produto produto, int quantidade) {
	this->data_producao_ = data_producao_.dateNow();
	this->produto_ = &produto;
	this->quantidade_desejada_ = quantidade;
}

void Producao::produzir(){
	if (this->quantidade_desejada_ < this->produto_->get_lote_minimo()){
		this->quantidade_desejada_ = this->produto_->get_lote_minimo();
	}
	this->produto_->atualizar_estoque_prod(quantidade_desejada_);
	this->produto_->registrar_producao(data_producao_, quantidade_desejada_);
}