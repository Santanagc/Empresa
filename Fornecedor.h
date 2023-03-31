#ifndef FORNECEDOR_H
#define FORNECEDOR_H

#include <string>
#include <map>
using namespace std;

class Fornecedor{
private:
  string nome_;
  map<string, float> tabela_de_precos_;

public:
  Fornecedor();

  void set_nome(string nome);

  string get_nome();

  void add_mp(string nome, float preco);

  map<string, float> get_tabela_precos();
  
};

#endif
