#include "Empresa.h"

Empresa* Empresa::instancePtr_ = nullptr;

Empresa::Empresa() {}

Empresa* Empresa::getInstance(){
    if(instancePtr_== 0) instancePtr_ = new Empresa;
    return instancePtr_;
}

void Empresa::set_latitude(float latitude_x1){
    this->latitude_x1_ = latitude_x1;
}

void Empresa::set_longitude(float longitude_y1){
    this->longitude_y1_ = longitude_y1;
}

float Empresa::get_latitude(){
    return this->latitude_x1_;
}

float Empresa::get_longitude(){
    return this->longitude_y1_;
}

void Empresa::novo_departamento(Departamento departamento){
    this->departamentos_.push_back(&departamento);
}

void Empresa::novo_cargo(Cargo cargo){
    this->cargos_.push_back(&cargo);
}

void Empresa::novo_funcionario(Funcionario funcionario){
    this->funcionarios_.push_back(&funcionario);
}

void Empresa::novo_cliente(Cliente cliente){
    this->clientes_.push_back(&cliente);
}

void Empresa::novo_produto(Produto produto){
    this->produtos_.push_back(&produto);
}

void Empresa::novo_estoque(Estoque estoque){
    this->estoques_.push_back(&estoque);
}

void Empresa::excluir_departamento(Departamento departamento){
    for(vector<Departamento*>::iterator it = this->departamentos_.begin(); it != this->departamentos_.end(); it++){
        if(*it == &departamento)  
        this->departamentos_.erase(it);
    }
}

void Empresa::excluir_cargo(Cargo cargo){
    for(vector<Cargo*>::iterator it = this->cargos_.begin(); it != this->cargos_.end(); it++){
        if(*it == &cargo)  
        this->cargos_.erase(it);
    }
}

void Empresa::excluir_funcionario(Funcionario funcionario){
    for(vector<Funcionario*>::iterator it = this->funcionarios_.begin(); it != this->funcionarios_.end(); it++){
        if(*it == &funcionario)  
        this->funcionarios_.erase(it);
    }
}

void Empresa::excluir_cliente(Cliente cliente){
    for(vector<Cliente*>::iterator it = this->clientes_.begin(); it != this->clientes_.end(); it++){
        if(*it == &cliente)  
        this->clientes_.erase(it);
    }
}

void Empresa::excluir_produto(Produto produto){
    for(vector<Produto*>::iterator it = this->produtos_.begin(); it != this->produtos_.end(); it++){
        if(*it == &produto)  
        this->produtos_.erase(it);
    }
}

void Empresa::excluir_estoque(Estoque estoque){
    for(vector<Estoque*>::iterator it = this->estoques_.begin(); it != this->estoques_.end(); it++){
        if(*it == &estoque)  
        this->estoques_.erase(it);
    }
}