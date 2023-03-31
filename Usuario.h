#ifndef USUARIO_H
#define USUARIO_H

#include <vector>
#include <string>
#include "Log_Escrita.h"
#include "Log_Leitura.h"

using namespace std;

class Usuario{
private:
    Usuario();
    Log_Escrita* log_w_;
    Log_Leitura* log_r_;
    static Usuario* instancePtr_;
    string usuario_;
    string senha_;
    vector<string> permissoes_;

public:
    static Usuario* getInstance();

    bool checar_permissao(string permissao);

    string get_usuario();
    Log_Escrita getLog_Escrita();
    Log_Leitura getLog_Leitura();
};

// Usuario* Usuario::instancePtr_ = nullptr;

#endif