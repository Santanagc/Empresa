#include "Boleto.h"

Boleto::Boleto(int dias) {}

void Boleto::pagamento(Data data_venda, Cliente cliente, int valor){
    this->data_venda_ = &data_venda;
    this->cliente_ = &cliente;
    this->valor_ = valor;
}

void Boleto::pagar() {
    cout << "\n Pagamento em boleto realizado:" << endl;
    cout << "\n Data : " << this->data_venda_ << endl;
    cout << "\n Cliente : " << this->cliente_ << endl;
    cout << "\n Valor : " << this->valor_ << endl;
    cout << "\n Prazo : " << this->dias_ << "dias" << endl;
}