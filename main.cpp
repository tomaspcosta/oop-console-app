#include <iostream>

#include "Carro.h"
#include "Motociclo.h"
#include "Proprietario.h"
#include "Servico.h"

using namespace std;

int main() {
    Proprietario p1("Joao");
    Proprietario p2("Manuel");
    Carro* carro = new Carro("Toyota", "Corolla", 2012, "XY-12-32", 4);
    Carro* carro2 = new Carro("Tesla", "Prius", 2023, "AX-AS-12", 4);
    Carro* carro3 = new Carro("Toyota", "Corolla", 2012, "XY-12-32", 4);
    Motociclo* motociclo = new Motociclo("Honda", "CBR600RR", 2020, "LS-PW-12", 2);
    Motociclo* motociclo2 = new Motociclo("Zundap", "Goat", 1991, "IW-32-AS", 2);
    carro->addServico(1, "18/02/2018", "Mudanca de Oleo", "Oleo trocado", 50.0);
    carro2->addServico(2, "28/02/2019", "Testagem", "Teste feito, NOTAS, NOTAS , NOTAS", 15.0);
    motociclo2->addServico(3, "27/03/2011", "Troca de Pneus", "Pneus trocados", 2.0);

    p1.registarVeiculo(carro); // REGISTAR O CARRO "carro" EM NOME DO (p1 - Joao)
    p1.registarVeiculo(motociclo); // REGISTAR O MOTOCICLO "motociclo" EM NOME DO (p1 - Joao)
    p2.registarVeiculo(carro2); // REGISTAR O CARRO "carro" EM NOME DO (p2 - Manuel)
    p2.registarVeiculo(motociclo2); // REGISTAR O MOTOCICLO "motociclo" EM NOME DO (p2 - Manuel)
    p1.listaVeiculos(); // LISTAR TODOS OS VEICULOS DO "p1 - Joao"
    p2.listaVeiculos(); // LISTAR TODOS OS VEICULOS DO "p2 - Manuel"
    carro->listarServico(); // LISTAR TODOS OS SERVICOS COM O "carro1"
    carro2->listarServico(); // LISTAR TODOS OS SERVICOS PARA O "carro2"
    motociclo2->listarServico(); // LISTAR TODOS OS SERVICOS PARA O "motociclo2"
    p2.custoTotalServicos(); // CUSTO TOTAL DOS SERVICOS EFETUADO PELO "p2 - Manuel" ANTES DE REMOVER UM SERVICO
    carro2->removeServico(2); // REMOVER O SERVICO 2
    carro2->listarServico(); // LISTAR OS SERVICOS DO CARRO PARA TESTAR SE O SERVIÇO 2 AINDA APARECE
    p1.custoTotalServicos(); // CUSTO TOTAL DOS SERVICOS EFETUADO PELO "p1"
    p2.custoTotalServicos(); // CUSTO TOTAL DOS SERVICOS EFETUADO PELO "p2"
    p1.getNumeroVeiculos(); // NUMERO TOTAL DE VEICULOS DE UM PROPRIETARIO, ANTES DE ADICIONAR OUTRO VEICULO
    p1.registarVeiculo(carro3); // ADD VEICULO TESTE getNumeroVeiculos()
    p1.getNumeroVeiculos(); // DEPOIS DE ADICIONAR OUTRO VEICULO *VALOR DIFERENTE*

    return 0;
}