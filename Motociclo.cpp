#include "Motociclo.h"
#include <iostream>

Motociclo::Motociclo(string marca, string modelo, int anoDeFabrico,
    string placa, int numeroDeRodas)
    : Veiculo(marca, modelo, anoDeFabrico, placa),
    numeroDeRodas(numeroDeRodas) {}

void Motociclo::removerMotociclo() {
    cout << "Motociclo " << marca << " " << modelo << " eliminado!" << endl;
    cout << endl;
    delete this;
}