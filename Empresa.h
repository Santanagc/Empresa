#ifndef EMPRESA_H
#define EMPRESA_H

#include <vector>
#include <string>
#include "Departamento.h"
#include "Cargo.h"
#include "Funcionario.h"
#include "Cliente.h"
#include "Produto.h"
#include "Estoque.h"

using namespace std;

class Empresa{
private:
    Empresa();
    vector<Departamento*> departamentos_;
    vector<Cargo*> cargos_;
    vector<Funcionario*> funcionarios_;
    vector<Cliente*> clientes_;
    vector<Produto*> produtos_;
    vector<Estoque*> estoques_;
    float latitude_x1_;
    float longitude_y1_;
    static Empresa* instancePtr_;

public:
    //Empresa(const Empresa &other) = delete;
    static Empresa* getInstance();

    void set_latitude(float latitude_x1);
    void set_longitude(float longitude_y1);
    float get_latitude();
    float get_longitude();

    void novo_departamento(Departamento departamento);
    void novo_cargo(Cargo cargo);
    void novo_funcionario(Funcionario funcionario);
    void novo_cliente(Cliente cliente);
    void novo_produto(Produto produto);
    void novo_estoque(Estoque estoque);

    void excluir_departamento(Departamento departamento);
    void excluir_cargo(Cargo cargo);
    void excluir_funcionario(Funcionario funcionario);
    void excluir_cliente(Cliente cliente);
    void excluir_produto(Produto produto);
    void excluir_estoque(Estoque estoque);
};

// Empresa* Empresa::instancePtr_ = nullptr;

#endif