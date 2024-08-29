#include "Proprietario.h"
#include <iostream>

Proprietario::Proprietario(string nome) : nome(nome) {}

bool Proprietario::registarVeiculo(Veiculo* v) { return veiculos.insert(v); }

void Proprietario::removeVeiculo(Veiculo* v) { veiculos.erase(v); }

void Proprietario::listaVeiculos() {
    cout << "Veiculos de " << nome << ":" << endl;
    Colecao<Veiculo*>::iterator it;
    for (it = veiculos.begin(); it != veiculos.end(); it++) {
        cout << "\t"
            << "Matricula: " << (*it)->getMatricula() << endl;
        cout << "\t"
            << "Marca: " << (*it)->getMarca() << endl;
        cout << "\t"
            << "Modelo: " << (*it)->getModelo() << endl;
        cout << "\t"
            << "Ano de Fabrico: " << (*it)->getAnoDeFabrico() << endl;
        cout << endl;
    }
}

Veiculo* Proprietario::getVeiculo(string placa) {
    for (auto v : veiculos) {
        if (v->getMatricula() == placa) {
            return v;
        }
    }
    return nullptr;
}

double Proprietario::custoTotalServicos() {
    double total = 0;
    for (auto v : veiculos) {
        total += v->custoTotalServicos();
    }

    cout << "Custo total dos servicos de " << nome << ": " << endl;
    cout << "\t" << total;
    if (total == 1) {
        cout << " euro";
    }
    else {
        cout << " euros";
    }
    cout << endl;
    cout << endl;

    return total;
}

int Proprietario::getNumeroVeiculos() {
    int numVeiculos = veiculos.size();
    cout << "Numero total de Veiculos: " << numVeiculos << endl;
    return numVeiculos;
}
