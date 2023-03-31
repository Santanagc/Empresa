#ifndef LOG_ESCRITA_H
#define LOG_ESCRITA_H

#include "Log.h"
#include <map>

class Log_Escrita : public Log{
private:
    string log_w_;
    map<string,string> escritas_;
    
public:
    Log_Escrita();
    ~Log_Escrita();
    void set_log_escrita(string usuario, Data data, string log_w);
    void printLog();
};

#endif