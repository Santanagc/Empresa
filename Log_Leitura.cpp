#include "Log_Leitura.h"

Log_Leitura::Log_Leitura() {}

Log_Leitura::~Log_Leitura() {}

void Log_Leitura::set_log_leitura(string usuario, Data data, string log_r){
    string data_s = "[" + (to_string(data.getDia())) + "/" + (to_string(data.getMes())) + "/" + (to_string(data.getAno())) + "; " + (to_string(data.getHora())) + ":" + (to_string(data.getMin())) + ":" + (to_string(data.getSeg())) + "]";
    string log = usuario + ", " + log_r;
    this->leituras_.insert(make_pair(data_s,log));
}

void Log_Leitura::printLog(){
    map<string,string>::iterator it;
    for(it==leituras_.begin(); it!=leituras_.end(); ++it){
        cout << it->first << " " << it->second << ".\n";
    }
}