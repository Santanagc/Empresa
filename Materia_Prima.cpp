#include "Materia_prima.h"

Materia_prima::Materia_prima(){}

Materia_prima::Materia_prima(string nome,
                             string unidade_medida,
                             int estoque_min,
                             int compra_min,
                             Estoque estoque){
  this->nome_ = nome;
  this->unidade_medida_ = unidade_medida;
  this->estoque_min_ = 20;
  this->compra_min_ = 10;
  this->estoque_ = &estoque;
}

void Materia_prima::set_nome(string nome){
  this->nome_ = nome;
}

void Materia_prima::set_unidade_medida(string unidade_medida){
  this->unidade_medida_ = unidade_medida;
}

void Materia_prima::set_estoque_min(int estoque_min){
  this->estoque_min_ = estoque_min;
}

void Materia_prima::set_compra_min(int compra_min){
  this->compra_min_ = compra_min;
}


string Materia_prima::get_nome(){
  return this->nome_;
}

string Materia_prima::get_unidade_medida(){
  return this->unidade_medida_;
}

int Materia_prima::get_estoque_min(){
  return this->estoque_min_;
}

int Materia_prima::get_compra_min(){
  return this->compra_min_;
}

vector<Fornecedor*> Materia_prima::get_fornecedores(){
  return this->fornecedores_;
}

void Materia_prima::add_fornecedor(Fornecedor fornecedor){
  this->fornecedores_.push_back(&fornecedor);
}

void Materia_prima::remover_fornecedor(Fornecedor fornecedor){
  for(vector<Fornecedor*>::iterator it = this->fornecedores_.begin(); it != this->fornecedores_.end(); ++it){
    if(*it == &fornecedor){
      this->fornecedores_.erase(it);
      break;
    }
  }
}

Fornecedor Materia_prima::fornecedor_mais_em_conta(){
  Fornecedor mais_em_conta = *fornecedores_[0];
  float menor_preco;
  vector<Fornecedor*>::iterator zero = this->fornecedores_.begin();
  for(vector<Fornecedor*>::iterator it = this->fornecedores_.begin(); it != this->fornecedores_.end(); ++it){
    int indice = distance(zero,it) - 1;
    if(menor_preco < fornecedores_[indice]->get_tabela_precos().find(this->nome_)->second){
      mais_em_conta = *fornecedores_[indice];
    }
  }

}

//criar as funções set_estoque e get_estoque depois de ter implementado a lógica de estoque para matéria prima