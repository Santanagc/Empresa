#include "Orcamento.h"

Orcamento::Orcamento(){}

void Orcamento::set_data(Data data){
    this->data_orcamento_ = data;
}

Data Orcamento::get_data(){
    return this->data_orcamento_;
}

float Orcamento::get_qnt_total(){
    return this->qnt_total_;
}