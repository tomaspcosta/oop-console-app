#include "Carro.h"
#include <iostream>

Carro::Carro(string marca, string modelo, int anoDeFabrico, string placa,
    int numeroDePortas)
    : Veiculo(marca, modelo, anoDeFabrico, placa),
    numeroDePortas(numeroDePortas) {}

void Carro::removerCarro() {
    cout << "Carro " << marca << " " << modelo << " eliminado!" << endl;
    cout << endl;
    delete this;
}
