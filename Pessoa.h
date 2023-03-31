#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using namespace std;

class Pessoa {
private:
  string nome_;
  string matricula_;
  string cpf_;
  string cnpj_;
  string email_;

public:
  //construtore
  Pessoa();

  /**
   * @brief Constroi um objeto do tipo Pessoa.
   * @param nome Nome completo.
   * @param matricula Número de registro no sistema.
   * @param cpf Cadastro de Pessoa Física sem pontos e traços
   *            (00000000000 em caso de pessoa jurídica).
   * @param cnpj Cadastro Nacional de Pessoa Jurídica sem pontos e traços
   *            (00000000000000 em caso de pessoa física).
   * @param email e-mail.
   */
  Pessoa(string nome,
        string matricula,
        string cpf,
        string cnpj,
        string email);

  //sets
  void set_nome(string nome_);
  void set_matricula(string matricula_);
  void set_cpf(string cpf_);
  void set_cnpj(string cnpj_);
  void set_email(string email_);

  //gets
  string get_nome();
  string get_matricula();
  string get_cpf();
  string get_cnpj();
  string get_email();

  //checagem
  /**
   * @brief Checa se o CPF informado coincide com o registro da pessoa.
   * @param cpf CPF esperado.
   */
  bool check_cpf(string cpf_);
  
  /**
   * @brief Checa se o CNPJ informado coincide com o registro da empresa.
   * @param cnpj CNPJ esperado.
   */
  bool check_cnpj(string cnpj_);
};

#endif