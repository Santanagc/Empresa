#include "Cliente.h"

Cliente::Cliente(){}

Cliente::Cliente(string nome,
                 string matricula,
                 string num_identificador,
                 string email,
                 string tipo_de_pessoa, 
                 string telefone){
    set_nome(nome);
    set_matricula(matricula);
    if (tipo_de_pessoa == "Fisica"){
        set_cpf(num_identificador);
    } else {
        set_cnpj(num_identificador);
    }
    set_email(email);
    this->tipo_de_pessoa_ = tipo_de_pessoa;
    this->telefone_ = telefone;

    if(tipo_de_pessoa == "Fisica") log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um cliente fisico.");
    else log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um cliente judiciario.");
}

void Cliente::set_telefone(string telefone){
    this->telefone_ = telefone;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou o contato de um cliente.");
}

string Cliente::get_tipo_de_pessoa(){
    return this->tipo_de_pessoa_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o tipo de um cliente(Fisico ou juridico).");
}

string Cliente::get_telefone(){
    return this->telefone_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o contato de um cliente.");
}

