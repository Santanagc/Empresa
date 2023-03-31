#ifndef REGISTROS_H
#define REGISTROS_H

#include "Data.h"
#include <vector>
#include <map>

class Registros {
    private:
    vector<float> historico_precos;
    map<string, string> historico_producao;
    map<string, string> historico_venda;

    public:
    Registros();

    vector<float> get_hist_precos();
    map<string, string> get_reg_prod();
    map<string, string> get_reg_venda();

    ~Registros();

};

#endif