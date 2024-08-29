#pragma once
#include "Veiculo.h"

using namespace std;

class Motociclo : public Veiculo {
private:
    int numeroDeRodas;

public:
    Motociclo(string marca, string modelo, int anoDeFabrico, string placa,
        int numeroDeRodas);
    void removerMotociclo();
};
