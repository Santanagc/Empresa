#ifndef ROTA_H
#define ROTA_H

#include <map>
#include <vector>
#include <cmath>
#include <string>
#include "Turno.h"
#include "Funcionario.h"
#include "Empresa.h"
#include "Endereco.h"

using namespace std;

class Rota{
private:
    Usuario* log_;
    Data dt_;
    vector<Funcionario*> passageiros_;
    map<Funcionario*,string> hora_embarque_;
    Turno* turno_;

public:
    Rota();

    ~Rota();

    void add_funcionario(Empresa empresa, Funcionario funcionario);
    void remover_funcionario(Funcionario funcionario);
    float calcula_distancia_empresa(Empresa empresa, Funcionario endereco_f);
    float calcula_distancia_funcionarios(Funcionario endereco_f1, Funcionario endereco_f2);
    float calcula_tempo_previsto_funcionarios(Funcionario endereco_f1, Funcionario endereco_f2);
    float calcula_tempo_previsto_empresa(Empresa empresa, Funcionario endereco_f);
    string calcula_hora_embarque_empresa(Empresa empresa, Funcionario endereco_f); 
    string calcula_hora_embarque_funcionarios(Funcionario endereco_f1, Funcionario endereco_f2);
    float tempo_total_deslocamento(Empresa empresa);
};

#endif