#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <string>
#include <vector>
#include "Produto.h"

using namespace std;

class Categoria {

private:
    string nome_categ_;
    vector<Produto*> produtos_;

public:
    Categoria();

    void set_nome(string);
    
    string get_nome();
    
    /**
   * @brief Retorna o vetor de produtos relacionados à categoria.
    */
    vector<Produto*> get_produtos();
    
    /**
   * @brief Adiciona um produto.
   * @param Produto Produto a ser adicionado.
   */
    void add_produto(Produto);
};

#endif