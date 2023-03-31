#include "Produto.h"

//construtores
  Produto::Produto(){}

  Produto::Produto(string nome,
                   string codigo,
                   float preco,
                   int lote_min,
                   int estoque_min,
                   Estoque estoque,
                   Registros registro){
    this->nome_do_produto_ = nome;
    this->codigo_ = codigo;
    this->preco_atual_ = preco;
    this->lote_minimo_ = lote_min;
    this->estoque_minimo_ = estoque_min;
    this->estoque_ = &estoque;
    this->registro_ = &registro;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo produto.");
  }

  //sets
  void Produto::set_nome(string nome){
    this->nome_do_produto_ = nome;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo nome de um produto.");
  }
  void Produto::set_codigo(string codigo){
    this->codigo_ = codigo;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo codigo de um produto.");
  }
  void Produto::set_preco(float preco){
    this->preco_atual_ = preco;
    this->atualizar_preco(preco);

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo preco de um produto.");
  }
  void Produto::set_lote_minimo(int lote_minimo){
    this->lote_minimo_ = lote_minimo;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo lote minimo de um produto.");
  }
  void Produto::set_estoque_minimo(int estoque_minimo){
    this->estoque_minimo_ = estoque_minimo;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo estoque minimo de um produto.");
  }
  void Produto::set_estoque(Estoque estoque){
    this->estoque_ = &estoque;

    log_->getLog_Escrita().set_log_escrita(log_->get_usuario(), dt_.dateNow(), "Cadastrou um novo estoque de um produto.");
  }
  
  //gets
  string Produto::get_nome(){
    return this->nome_do_produto_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o nome de um produto.");
  }
  string Produto::get_codigo(){
    return this->codigo_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o codigo de um produto.");
  }
  float Produto::get_preco(){
    return this->preco_atual_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o preco atual de um produto.");
  }
  int Produto::get_lote_minimo(){
    return this->lote_minimo_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o lote minimo de um produto.");
  }
  int Produto::get_estoque_minimo(){
    return this->estoque_minimo_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o estoque minimo de um produto.");
  }
  Estoque Produto::get_estoque(){
    return *estoque_;

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Visualizou o estoque de um produto.");
  }


  void Produto::atualizar_preco(float preco){
   this->registro_->get_hist_precos().push_back(preco);

   log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Atualizou o preco de um produto.");
  }

  void Produto::atualizar_estoque_prod(int quantidade_produzida){
	this->estoque_->get_map().insert(make_pair(this->estoque_->get_map().size() + 1, quantidade_produzida));

  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Atualizou o estoque de um produto.");
}

void Produto::atualizar_estoque_venda(int quantidade_vendida){
	map<int, int>::iterator it;
	int quantidade_a_ser_vendida = quantidade_vendida;
	for(it==this->estoque_->get_map().begin();quantidade_a_ser_vendida != 0;it++){
		if(it->second != 0){
			if(it->second >= quantidade_a_ser_vendida){
				it->second = it->second - quantidade_a_ser_vendida;
			} else {
			it->second = 0;
			quantidade_a_ser_vendida = quantidade_a_ser_vendida - it->second;
			}
		}
	}
  log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Atualizou o estoque de venda de um produto.");
}
void Produto::registrar_producao(Data data, int quantidade){
    string data_p = to_string(data.getDia()) + "/" +
                    to_string(data.getMes() )+ "/" +
                    to_string(data.getAno());
    string infos;
    infos = to_string(quantidade) + " " + this->get_nome() + "s";
    this->registro_->get_reg_prod().insert(make_pair(data_p, infos));

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Registrou a producao de um produto.");
}

void Produto::registrar_venda(Data data, string infos){
    string data_p = to_string(data.getDia()) + "/" +
                    to_string(data.getMes() )+ "/" +
                    to_string(data.getAno());
    this->registro_->get_reg_venda().insert(make_pair(data_p, infos));

    log_->getLog_Leitura().set_log_leitura(log_->get_usuario(), dt_.dateNow(), "Registrou a venda de um produto.");
}