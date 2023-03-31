#ifndef TURNO_H
#define TURNO_H

#include <string>
#include "Data.h"

using namespace std;

class Turno{
private:
    string periodo_;
    Data* horario_entrada_;
    Data* horario_saida_;

public:
    Turno();

    ~Turno();

    void set_periodo(string periodo);
    void set_horario_entrada(Data entrada);
    void set_horario_saida(Data saida);

    string get_periodo();
    Data get_horario_entrada();
    Data get_horario_saida();

    //Data calcular_carga_horaria();
};

#endif