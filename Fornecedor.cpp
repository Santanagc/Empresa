#include "Fornecedor.h"

Fornecedor::Fornecedor(){}

void Fornecedor::set_nome(string nome){
    this->nome_ = nome;
}

string Fornecedor::get_nome(){
    return this->nome_;
}

void Fornecedor::add_mp(string nome, float preco){
    this->tabela_de_precos_.insert(make_pair(nome, preco));
}

map<string, float> Fornecedor::get_tabela_precos(){
    return this->tabela_de_precos_;
}