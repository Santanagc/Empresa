#ifndef CARGO_H
#define CARGO_H

#include <string>
#include <map>

using namespace std;

class Cargo {
private:
	string nome_cargo_;

public:
	//construtor
	Cargo();
	Cargo(string nome_do_cargo);

	//sets
	
	void set_nome_cargo(string novo_cargo);
	
	//gets
	string get_nome_cargo();
	
};

#endif