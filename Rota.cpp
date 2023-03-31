#include "Rota.h"

Rota::Rota(){}

Rota::~Rota(){}

void Rota::add_funcionario(Empresa empresa, Funcionario funcionario){
    this->passageiros_.push_back(&funcionario);
    vector<Funcionario*>::iterator it1 = passageiros_.begin();
    ++it1;
    string hora_f1 = calcula_hora_embarque_empresa(empresa,**it1);
    this->hora_embarque_.insert(make_pair(*it1, hora_f1));
    float horario_saida = (tempo_total_deslocamento(empresa)) - 8;
    float hora = 0;
    vector<Funcionario*>::iterator it2;
    for(it1; it1!=passageiros_.end(); ++it1){ 
        for(it2 == passageiros_.begin(); it2!=passageiros_.end(); ++it2){
            hora = hora + horario_saida + calcula_tempo_previsto_funcionarios(**it2, **it1); 
            this->hora_embarque_.insert(make_pair(*it1,to_string(hora)));
        }
    }

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo funcionario a uma rota.");
}

void Rota::remover_funcionario(Funcionario funcionario){
    for(vector<Funcionario*>::iterator it = this->passageiros_.begin(); it != this->passageiros_.end(); it++){
        if(*it == &funcionario)  
        this->passageiros_.erase(it);
    }

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Removeu um funcionario de uma rota.");
}

float Rota::calcula_distancia_empresa(Empresa empresa, Funcionario endereco_f){
    return 110.57*sqrt(pow(empresa.get_latitude() - endereco_f.get_endereco().get_latitude(), 2) + pow(empresa.get_longitude() - endereco_f.get_endereco().get_longitude(), 2));
}

float Rota::calcula_distancia_funcionarios(Funcionario endereco_f1, Funcionario endereco_f2){
    return 110.57*sqrt(pow(endereco_f1.get_endereco().get_latitude() - endereco_f2.get_endereco().get_latitude(), 2) + pow(endereco_f1.get_endereco().get_longitude() - endereco_f2.get_endereco().get_longitude(), 2));
}

float Rota::calcula_tempo_previsto_empresa(Empresa empresa, Funcionario endereco_f){
    return (calcula_distancia_empresa(empresa, endereco_f)/300);
}

float Rota::calcula_tempo_previsto_funcionarios(Funcionario endereco_f1, Funcionario endereco_f2){
    return (calcula_distancia_funcionarios(endereco_f1, endereco_f2)/300);
}

string Rota::calcula_hora_embarque_empresa(Empresa empresa, Funcionario endereco_f){
    int horas = calcula_tempo_previsto_empresa(empresa, endereco_f)*60;
    int minutos = (calcula_tempo_previsto_empresa(empresa, endereco_f)*60 - horas)*60;
    string horario_embarque;
    if(minutos < 10) horario_embarque = to_string(horas) + ":" + "0" + to_string(minutos);
    else horario_embarque = to_string(horas) + ":" + to_string(minutos);
    return horario_embarque;
}

string Rota::calcula_hora_embarque_funcionarios(Funcionario endereco_f1, Funcionario endereco_f2){
    int horas = calcula_tempo_previsto_funcionarios(endereco_f1, endereco_f2)*60;
    int minutos = (calcula_tempo_previsto_funcionarios(endereco_f1, endereco_f2)*60 - horas)*60;
    string horario_embarque;
    if(minutos < 10) horario_embarque = to_string(horas) + ":" + "0" + to_string(minutos);
    else horario_embarque = to_string(horas) + ":" + to_string(minutos);
    return horario_embarque;
}

float Rota::tempo_total_deslocamento(Empresa empresa){
    vector<Funcionario*>::iterator it1 = this->passageiros_.begin();
    float tempo_total = calcula_tempo_previsto_empresa(empresa, **it1);
    vector<Funcionario*>::iterator it2;
    for(it1 == this->passageiros_.begin() + 1; it1 != this->passageiros_.end(); it1++){
        it2 = it1 - 1;
        tempo_total = tempo_total + calcula_tempo_previsto_funcionarios(**it2, **it1);
    }
    return tempo_total; 
}