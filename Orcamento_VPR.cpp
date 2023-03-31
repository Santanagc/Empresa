#include "Orcamento_VPR.h"
#include "Pedido_de_Compra.h"

Orcamento_VPR::Orcamento_VPR(){};

void Orcamento_VPR::set_cliente(Cliente cliente){
    this->cliente_ = &cliente;
}

Cliente Orcamento_VPR::get_cliente(){
    return *cliente_;
}

void Orcamento_VPR::add_produto(int qtd, Produto produto){
    this->qtd_produto_.insert(make_pair(qtd, &produto));
}

void Orcamento_VPR::calcular_quantia(){
    float total=0;
    map<int, Produto*>::iterator it;
    for(it==qtd_produto_.begin();it!=qtd_produto_.end();it++){
        total+=(it->first*it->second->get_preco());
    }
}

void Orcamento_VPR::gerar_pedido(){
     
}