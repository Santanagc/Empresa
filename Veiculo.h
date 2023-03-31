#ifndef VEICULO_H
#define VEICULO_H

#include <string>
#include "Rota.h"

using namespace std;

class Veiculo{
private:
    string modelo_;
    string placa_;
    int capacidade_;
    Rota* rota_;

public:
    Veiculo();

    ~Veiculo();

    void set_modelo(string modelo);
    void set_placa(string placa);
    void set_capacidade(int capacidade);

    string get_modelo();
    string get_placa();
    int get_capacidade();
};

#endif