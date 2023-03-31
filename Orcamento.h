#ifndef ORCAMENTO_H
#define ORCAMENTO_H

#include "Data.h"

using namespace std;

class Orcamento {

private:
    Data data_orcamento_;
    float qnt_total_;

public:
    Orcamento();
    void set_data(Data);
    Data get_data();
    float get_qnt_total();
};

#endif