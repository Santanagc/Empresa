#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

using namespace std;

class Endereco
{
  private:
    string rua_;
    int numero_;
    string complemento_;
    string cidade_;
    string estado_;
    string pais_;
    string CEP_;
    float latitude_x2_;
    float longitude_y2_;

  public:
    //construtores:
    Endereco();
    /**
   * @brief Construtor que cria um endereço completo.
   * @param rua Rua de residência.
   * @param numero Numero da residencia.
   * @param complemento Número do apartamento ou "Casa" em caso de não ser um ap.
   * @param estado Estado de residência.
   * @param pais Pais de residêcia.
   * @param CEP Código de Endereçamento Postal.
   */
    Endereco(string rua, int numero, string complemento, 
              string cidade, string estado, string pais,
              string cep, float latitude_x2, float longitude_y2);
    
    //sets
    void set_rua(string rua);
    void set_numero(int numero);
    void set_complemento(string complemento);
    void set_estado(string estado);
    void set_pais(string pais);
    void set_CEP(string cep);
    void set_latitude(float latitude_x2);
    void set_longitude(float longitude_y2);

    //gets
    string get_rua();
    int get_numero();
    string get_complemento();
    string get_estado();
    string get_pais();
    string get_cep();
    float get_latitude();
    float get_longitude();
};

#endif