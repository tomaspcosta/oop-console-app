#include "Servico.h"

#include <iostream>

Servico::Servico(int id, string data, string tipoDeServico, string notas,
    double custo)
    : id(id), data(data), tipoDeServico(tipoDeServico), notas(notas),
    custo(custo) {}

int Servico::getId() { return id; }

void Servico::atualizaNotas(string novasNotas) { notas = novasNotas; }

void Servico::atualizaCusto(double novoCusto) { custo = novoCusto; }

double Servico::getCusto() { return custo; }

string Servico::getNotas() { return notas; }

string Servico::getTipoDeServico() { return tipoDeServico; }

string Servico::getData() { return data; }