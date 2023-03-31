#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <string>
#include <map>

using namespace std;

class Estoque{
private:
	map<int, int> estoque_p_lote_;

public:
	//construtores
	Estoque();
	
	map<int,int> get_map();

	/**
   * @brief Conta o número de determinado produto no estoque.
   */
	int conta_estoque();
};

#endif