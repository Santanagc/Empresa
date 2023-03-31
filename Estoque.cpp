#include "Produto.h"
#include "Estoque.h"
#include <string>
#include <utility>

using namespace std;

Estoque::Estoque() {}

//Estoque::Estoque() {}

map<int,int> Estoque::get_map(){
	return this->estoque_p_lote_;
}

int::Estoque::conta_estoque(){
	map<int,int>::iterator it;
	int total_de_produtos;
	for(it==this->estoque_p_lote_.begin();it!=this->estoque_p_lote_.end();it++){
		total_de_produtos += it->second;
	}
	return total_de_produtos;
}
