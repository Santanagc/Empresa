#include "Turno.h"

Turno::Turno(){}

Turno::~Turno(){}

void Turno::set_periodo(string periodo){
    this->periodo_ = periodo;
}

void Turno::set_horario_entrada(Data entrada){
    this->horario_entrada_ = &entrada;
}

void Turno::set_horario_saida(Data saida){
    this->horario_saida_ = &saida;
}

string Turno::get_periodo(){
    return this->periodo_;
}

Data Turno::get_horario_entrada(){
    return *horario_entrada_;
}

Data Turno::get_horario_saida(){
    return *horario_saida_;
}

//Data Turno::calcular_carga_horaria(){}