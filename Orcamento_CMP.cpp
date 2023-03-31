#include "Orcamento_CMP.h"

Orcamento_CMP::Orcamento_CMP(){}

// void Orcamento_CMP::set_fornecedor(Fornecedor fornecedor){
//     this->fornecedor_ = &fornecedor;
// }

// Fornecedor Orcamento_CMP::get_fornecedor(){
//     return *fornecedor_;
// }

void Orcamento_CMP::add_mp(Materia_prima materia_prima, int quantidade){
    this->qtd_materia_prima_.insert(make_pair(quantidade, &materia_prima));
}

void Orcamento_CMP::calcular_quantia(){
    float total = 0;
    map<int, Materia_prima*>::iterator it;
    for(it==qtd_materia_prima_.begin();it!=qtd_materia_prima_.end();it++){
        total+=(it->first*it->second->fornecedor_mais_em_conta().get_tabela_precos().find(it->second->get_nome())->second);
    }
}