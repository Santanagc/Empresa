#include "Registros.h"

Registros::Registros(){}

vector<float> Registros::get_hist_precos(){
    return this->historico_precos;
}

map<string, string> Registros::get_reg_prod(){
    return this->historico_producao;
}

map<string, string> Registros::get_reg_venda(){
    return this->historico_venda;
}