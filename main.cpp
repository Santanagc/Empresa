#include "Boleto.h" // e Cliente,Data,ExecaoCustomizada,Formato,FormaDePagamento,PedidoDeCompra.h
#include "Cartao.h"
#include "Categoria.h" // e Produto.h
#include "Empresa.h" // e Cargo,Departamento,Funcionario,Endereco,Cliente,Produto,Registros,Estoque,Pessoa.h
#include "Orcamento_CMP.h" // e Materia_prima,Fornecedor,Estoque.h
#include "Orcamento_VPR.h" // e Produto,Cliente,Orcamento.h
#include "Ordem_de_Producao.h" // e Data,Produto.h
#include "Pedido_de_Compra.h" // e Data,Produto,Cliente.h
#include "Veiculo.h" // e Rota,Turno,Funcionario,Empresa,Endereco.h
#include "Usuario.h"

#include <iostream>
#include <map>

using namespace std;

int main() {
    Data aux;
    Departamento Manutencao;
    Departamento Marketing;
    Departamento Administracao;
    Cargo Operador_de_Maquina;
    Cargo Gestor_de_redes_sociais;
    Cargo Gerente;

    Endereco end_homero_castro("Antonio Aleixo",
                                122,
                                "casa",
                                "Belo Horizonte",
                                "Minas Gerais",
                                "Brasil",
                                "30110070",
                                110,
                                30);
    
    Endereco end_gustavo_santana("Gonçalves Dias",
                                567,
                                "ap 1201",
                                "Belo Horizonte",
                                "Minas Gerais",
                                "Brasil",
                                "30315760",
                                20,
                                65);
    
    Endereco end_fernanda_albuquerque("Alameda das flores",
                                1013,
                                "casa",
                                "Belo Horizonte",
                                "Minas Gerais",
                                "Brasil",
                                "32150700",
                                90,
                                100);

    Funcionario Homero_Castro ("Homero Brina Castro",
                                "123456",
                                "12345678910",
                                "homero@gmail.com",
                                aux.dateNow(),
                                "12/02/2002",
                                Manutencao,
                                Operador_de_Maquina,
                                end_homero_castro,
                                2500);

    Funcionario Gustavo_Santana ("Gustavo Santana",
                                  "654321",
                                  "01987654321",
                                  "gustavo@gmail.com",
                                  aux.dateNow(),
                                  "04/06/2001",
                                  Marketing,
                                  Gestor_de_redes_sociais,
                                  end_gustavo_santana,
                                  3400);

    Funcionario Fernanda_Albuquerque ("Fernanda Souza de Albuquerque",
                                      "162534",
                                      "13298745619",
                                      "fernanda@gmail.com",
                                       aux.dateNow(),
                                       "20/11/2001",
                                       Administracao,
                                       Gerente,
                                       end_fernanda_albuquerque,
                                       7000);


    Cliente Bar_do_Ze ("Bar do Ze",
                        "123749",
                        "11122223333444",
                        "bardoze@gmail.com",
                        "Juridica",
                        "3133457891");

    Cliente Alessandra_Lopes ("Alessandra Carvalho Lopes",
                        "345113",
                        "11122233345",
                        "alelopes@gmail.com",
                        "Juridica",
                        "3133457891");

    Fornecedor Atacado_vianas;
    Fornecedor Atacado_Julio_Simoes;
    Fornecedor Fabrica_Tendi_Tudo;
    Fornecedor Fabrica_Procurou_Achou;


    Estoque Estoque_madeira;
    Estoque Estoque_aluminio;
    Estoque Estoque_plastico;
    Estoque Estoque_parafuso;
    
    Materia_prima Madeira ("Madeira",
                            "Kg",
                            100,
                            25,
                            Estoque_madeira);

    Materia_prima Plastico ("Madeira",
                            "Kg",
                            100,
                            25,
                            Estoque_madeira);

    Materia_prima Aluminio ("Madeira",
                            "Kg",
                            100,
                            25,
                            Estoque_madeira);
    
    Materia_prima Parafuso ("Madeira",
                            "Kg",
                            100,
                            25,
                            Estoque_madeira);


    return 0;
}