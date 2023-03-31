#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Pessoa.h"
#include "Usuario.h"

using namespace std;

class Cliente: public Pessoa{
private:
    Usuario* log_;
    Data dt_;
    string tipo_de_pessoa_;
    string telefone_;

public:
    //construtores
    Cliente();
    /**
   * @brief Construtor que cria um cliente.
   * @param tipo_de_pessoa String "Fisica" ou "Juridica".
   * @param telefone Telefone de contato do cliente.
   */
    Cliente(string nome,
            string matricula,
            string num_identificador,
            string email,
            string tipo_de_pessoa, 
            string telefone);

    //sets
    void set_telefone(string telefone);

    //get
    string get_telefone();
    string get_tipo_de_pessoa();

};

#endif