#include "Veiculo.h"

#include <iostream>

Veiculo::Veiculo(string marca, string modelo, int anoDeFabrico,
    string matricula)
    : marca(marca), modelo(modelo), anoDeFabrico(anoDeFabrico),
    matricula(matricula) {}

string Veiculo::getMatricula() { return matricula; }

string Veiculo::getMarca() { return marca; }

string Veiculo::getModelo() { return modelo; }

bool Veiculo::registarServico(Servico* s) { return servicos.insert(s); }

bool Veiculo::removeServico(int id) {
    for (auto s : servicos) {
        if (s->getId() == id) {
            std::cout << "Servico " << id << " foi removido!" << std::endl;
            delete s;
            servicos.erase(s);
            return true;
        }
    }
    return false;
}

int Veiculo::getAnoDeFabrico() { return anoDeFabrico; }

void Veiculo::listarServico() {
    for (auto s : servicos) {
        cout << endl;
        cout << "Servico numero " << s->getId() << " ";
        cout << "[Veiculo " << getMatricula() << "]: " << endl;
        cout << "\t"
            << "Data: " << s->getData() << endl;
        cout << "\t"
            << "Tipo de servico: " << s->getTipoDeServico() << endl;
        cout << "\t"
            << "Notas: " << s->getNotas() << endl;
        cout << endl;
    }
}

Servico* Veiculo::getServico(int id) {
    for (auto s : servicos) {
        if (s->getId() == id) {
            return s;
        }
    }
    return nullptr;
}

double Veiculo::custoTotalServicos() {
    double total = 0;
    for (auto s : servicos) {
        total += s->getCusto();
    }
    return total;
}

void Veiculo::addServico(int id, std::string data, std::string descricao,
    std::string notas, double custo) {
    Servico* servico = new Servico(id, data, descricao, notas, custo);
    this->registarServico(servico);
}

void Veiculo::listarTodosServicos() {
    Colecao<Servico*>::iterator it;
    for (it = servicos.begin(); it != servicos.end(); it++) {
        cout << "Servico numero " << (*it)->getId() << endl;
        cout << "\t"
            << "Data: " << (*it)->getData() << endl;
        cout << "\t"
            << "Tipo de servico: " << (*it)->getTipoDeServico() << endl;
        cout << "\t"
            << "Notas: " << (*it)->getNotas() << endl;
        cout << "\t"
            << "Custo: " << (*it)->getCusto() << endl;
        cout << endl;
    }
}
