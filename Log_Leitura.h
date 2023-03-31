#ifndef LOG_LEITURA_H
#define LOG_LEITURA_H

#include <map>
#include "Log.h"

class Log_Leitura : public Log{
private:
    string log_r_;
    map<string,string> leituras_;

public:
    Log_Leitura();
    ~Log_Leitura();
    void set_log_leitura(string usuario, Data data, string log_r);
    void printLog();
};

#endif


