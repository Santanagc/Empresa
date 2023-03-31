#include "Log_Escrita.h"

Log_Escrita::Log_Escrita() {}

Log_Escrita::~Log_Escrita() {}

void Log_Escrita::set_log_escrita(string usuario, Data data, string log_w){
    string data_s = "[" + (to_string(data.getDia())) + "/" + (to_string(data.getMes())) + "/" + (to_string(data.getAno())) + "; " + (to_string(data.getHora())) + ":" + (to_string(data.getMin())) + ":" + (to_string(data.getSeg())) + "]";
    string log = usuario + ", " + log_w;
    this->escritas_.insert(make_pair(data_s,log));
}

void Log_Escrita::printLog(){
    map<string,string>::iterator it;
    for(it==escritas_.begin(); it!=escritas_.end(); ++it){
        cout << it->first << " " << it->second << ".\n";
    }
}