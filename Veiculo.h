#pragma once
#include "Colecao.h"
#include "Servico.h"
#include <string>

using namespace std;

class Veiculo {
protected:
    string marca;
    string modelo;
    int anoDeFabrico;
    string matricula;
    Colecao<Servico*> servicos;

public:
    Veiculo(string marca, string modelo, int anoDeFabricacao, string placa);
    string getMatricula();
    string getMarca();
    string getModelo();
    int getAnoDeFabrico();
    bool registarServico(Servico* s);
    bool removeServico(int id);
    void listarServico();
    Servico* getServico(int id);
    double custoTotalServicos();
    void addServico(int id, std::string data, std::string descricao,
        std::string notas, double custo);
    void listarTodosServicos();
};
