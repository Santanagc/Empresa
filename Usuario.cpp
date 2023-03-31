#include "Usuario.h"

Usuario* Usuario::instancePtr_ = nullptr;

Usuario::Usuario() {}

Usuario* Usuario::getInstance(){
    if(instancePtr_== 0) instancePtr_ = new Usuario;
    return instancePtr_;
}

bool Usuario::checar_permissao(string permissao){
     for(vector<string>::iterator it = permissoes_.begin(); it != permissoes_.end(); ++it){
        if(*it == permissao) return true;
     }
     return false;
}

string Usuario::get_usuario(){
    return this->usuario_;
}

Log_Escrita Usuario::getLog_Escrita(){
    return *log_w_;
}

Log_Leitura Usuario::getLog_Leitura(){
    return *log_r_;
}