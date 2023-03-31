#ifndef LOG_H
#define LOG_H

#include <string>
#include <iostream>
#include "Data.h"

using namespace std;

class Log{
private:
    string usuario_;
    Data* data_;
    //vector<Data*,string> escritas_;
    //vector<Data*,string> leituras_;

public:
    Log() = default;
    virtual void set_log_leitura(string usuario, Data data, string log_r);
    virtual void set_log_escrita(string usuario, Data data, string log_w);
    virtual void printLogs();
};

#endif

//criar o .cpp