#include <iostream>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){}

Funcionario::Funcionario(
                string nome,
                string matricula,
                string cpf,
                string email,
                Data data_admissao, 
                string data_nascimento, 
                Departamento departamento, 
                Cargo cargo, 
                Endereco endereco, 
                float salario){
    set_nome(nome);
    set_matricula(matricula);
    set_cpf(cpf);
    set_email(email);
    string data_ad = to_string(data_admissao.getDia()) + "/" +
                     to_string(data_admissao.getMes() )+ "/" +
                     to_string(data_admissao.getAno());
    this->dt_admissao_.push_back(data_ad);
    this->dt_nascimento_ = data_nascimento;
    this->dt_alteracao_salarial_ = data_admissao;
    this->departamento_ = &departamento;
    this->cargo_ = &cargo;
    this->endereco_ = &endereco;
    this->ativo_ = true;
    this->salario_atual_ = salario;
    this->historico_salarios_.insert(make_pair(data_ad, salario));
    
    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um funcionario.");
}

void Funcionario::set_dt_admissao(Data dt_admissao) {
  string data_ad = to_string(dt_admissao.getDia()) + "/" + 
                   to_string(dt_admissao.getMes() )+ "/" + 
                   to_string(dt_admissao.getAno());
  this->dt_admissao_.push_back(data_ad);

  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Readmitiu um funcionario.");
}

void Funcionario::set_dt_demissao(Data dt_demissao) {
  string data_de = to_string(dt_demissao.getDia()) + "/" + 
                   to_string(dt_demissao.getMes() )+ "/" + 
                   to_string(dt_demissao.getAno());
  this->dt_demissao_.push_back(data_de);

  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Demitiu um funcionario.");
}

void Funcionario::set_dt_nascimento(string dt_nascimento) {
  this->dt_nascimento_ = dt_nascimento;
}

void Funcionario::set_dt_alteracao_salarial(Data dt_alteracao_salarial) {
  this->dt_alteracao_salarial_ = dt_alteracao_salarial;

  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Alterou o salario de um funcionario.");
}

void Funcionario::set_endereco(Endereco endereco) {
  this->endereco_ = &endereco;

  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Alterou endereco de um funcionario.");
}

void Funcionario::set_departamento(Departamento departamento) {
  this->departamento_ = &departamento;
  
  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo departamento a um funcionario.");
}

void Funcionario::set_cargo(Cargo cargo) {
  this->cargo_ = &cargo;

  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo cargo a um funcionario.");
}

void Funcionario::promover(Data data_promocao, Cargo cargo, float salario) {
  string data_pr = to_string(data_promocao.getDia()) + "/" + 
                   to_string(data_promocao.getMes() )+ "/" + 
                   to_string(data_promocao.getAno());
  this->cargo_ = &cargo;
  historico_salarios_.insert(make_pair(data_pr, salario));

  log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Promoveu um funcionario.");
}

string Funcionario::get_dt_admissao(){
  return this->dt_admissao_.back();

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou a data de admissao de um funcionario.");
}

string Funcionario::get_dt_demissao(){
  return this->dt_demissao_.back();

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou a data de demissao de um funcionario.");
}

string Funcionario::get_dt_nascimento(){
  return this->dt_nascimento_;

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou a data de nascimento de um funcionario.");
}

Data Funcionario::get_dt_alteracao_salarial(){
  return this->dt_alteracao_salarial_;

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou a alteraçao salarial de um funcionario.");
}

Endereco Funcionario::get_endereco(){
  return *endereco_;

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o endereco de um funcionario.");
}

Departamento Funcionario::get_departamento(){
  return *departamento_;

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o departamento de um funcionario.");
}

Cargo Funcionario::get_cargo(){
  return *cargo_;

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o cargo de um funcionario.");
}

float Funcionario::get_salario_inicial(){
  return historico_salarios_.begin()->second;

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o salario inicial de um funcionario.");
}

void Funcionario::demitir(Data data_demissao){
  string data_de = to_string(data_demissao.getDia()) + "/" + 
                   to_string(data_demissao.getMes() )+ "/" + 
                   to_string(data_demissao.getAno());
  this->dt_demissao_.push_back(data_de);

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Demitiu um funcionario.");
}

void Funcionario::readmitir(Data dt_admissao, Cargo cargo, float salario){
  string data_ad = to_string(dt_admissao.getDia()) + "/" + 
                   to_string(dt_admissao.getMes() )+ "/" + 
                   to_string(dt_admissao.getAno());
  this->dt_admissao_.push_back(data_ad);
  this->cargo_ = &cargo;
  this->historico_salarios_.insert(make_pair(data_ad, salario));

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Readmitiu um funcionario.");
}