#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <vector>
#include <map>
#include "Data.h"
#include "Departamento.h"
#include "Cargo.h"
#include "Endereco.h"
#include "Pessoa.h"
#include "Usuario.h"

using namespace std;

class Funcionario: public Pessoa{
  private:
    Usuario* log_;
    Data dt_;
    vector<string> dt_admissao_;
    vector<string> dt_demissao_;
    string dt_nascimento_;
    Data dt_alteracao_salarial_;
    Departamento* departamento_;
    Cargo* cargo_;
    Endereco* endereco_;
    bool ativo_;
    float salario_atual_;
    map<string, float> historico_salarios_;

  public:
    //construtor
    Funcionario();

   /** @brief Construtor que cria um funcionário com as seguintes informações:.
   * @param data_demissão Data na qual o funcionário foi admitido.
   * @param data_nascimento Data de nascimento do funcionário.
   * @param departamento Departamento no qual o funcionário ingressará.
   * @param cargo Cargo inicial do funcinário.
   * @param endereco Endereço atual do funcionário.
   * @param salario Salário inicial do funcionário.
   */
    Funcionario(string nome,
                string matricula,
                string cnpj,
                string email,
                Data data_admissao, 
                string data_nascimento, 
                Departamento departamento, 
                Cargo cargo, 
                Endereco endereco, 
                float salario);

    //sets
    void set_dt_admissao(Data dt_admissao);
    void set_dt_demissao(Data dt_demissao);
    void set_dt_alteracao_salarial(Data dt_alteracao_salarial);
    void set_dt_nascimento(string dt_nascimento);
    void set_endereco(Endereco endereco);
    void set_departamento(Departamento departamento);
    void set_cargo(Cargo cargo);
    void promover(Data data_promocao, Cargo cargo, float salario);
    
    //gets
    string get_dt_admissao();
    string get_dt_demissao();
    Data get_dt_alteracao_salarial();
    string get_dt_nascimento();
    Endereco get_endereco();
    Departamento get_departamento();
    Cargo get_cargo();
    float get_salario_inicial();

    /**
   * @brief Demite o funcionário e armazena a data de demissão.
   * @param data_demissão Data na qual o funcionário foi demitido.
   */
    void demitir(Data data_demissao);
    
    /**
   * @brief Readmite um funcionário anteriormente demitido e armazena a data de readmissão,
            assim como o seu novo cargo e novo salário.
   * @param dt_admissao Data de readmissão.
   * @param cargo Novo cargo do funcionário.
   * @param salario Novo salário do funcionário.
   */
    void readmitir(Data dt_admissao, Cargo cargo, float salario);

};

#endif