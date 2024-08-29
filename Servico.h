#pragma once
#include <string>

using namespace std;

class Servico {
private:
    int id;
    string data;
    string tipoDeServico;
    string notas;
    double custo;

public:
    Servico(int id, string data, string tipoDeServico, string notas,
        double custo);
    int getId();
    void atualizaNotas(string novasNotas);
    void atualizaCusto(double novoCusto);
    double getCusto();
    string getNotas();
    string getTipoDeServico();
    string getData();
};