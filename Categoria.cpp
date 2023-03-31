#include "Categoria.h"

Categoria::Categoria(){}

void Categoria::set_nome(string nome){
    this->nome_categ_ = nome;
}

string Categoria::get_nome(){
    return this->nome_categ_;
}

vector<Produto*> Categoria::get_produtos(){
    return this->produtos_;
}

void Categoria::add_produto(Produto produto){
    this->produtos_.push_back(&produto);
}

