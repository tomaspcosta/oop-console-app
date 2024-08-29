#pragma once
#include "Veiculo.h"

using namespace std;

class Carro : public Veiculo {
private:
    int numeroDePortas;

public:
    Carro(string marca, string modelo, int anoDeFabrico, string placa,
        int numeroDePortas);
    void removerCarro();
};
