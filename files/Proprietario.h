#pragma once
#include "Colecao.h"
#include "Veiculo.h"
#include <string>

using namespace std;

class Proprietario {
private:
	string nome;
	Colecao<Veiculo*> veiculos;

public:
	Proprietario(string nome);
	bool registarVeiculo(Veiculo* v);
	void removeVeiculo(Veiculo* v);
	void listaVeiculos();
	Veiculo* getVeiculo(string placa);
	double custoTotalServicos();
	int getNumeroVeiculos();
};
