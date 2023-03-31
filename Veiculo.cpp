#include "Veiculo.h"

Veiculo::Veiculo(){}

Veiculo::~Veiculo(){}

void Veiculo::set_modelo(string modelo){
    this->modelo_ = modelo;
}

void Veiculo::set_placa(string placa){
    this->placa_ = placa;
}

void Veiculo::set_capacidade(int capacidade){
    this->capacidade_ = capacidade;
}

string Veiculo::get_modelo(){
    return this->modelo_;
}

string Veiculo::get_placa(){
    return this->placa_;
}

int Veiculo::get_capacidade(){
    return this->capacidade_;
}