#include <iostream>
#include "Casa.h"
#include "Terreno.h"
#include "Apartamento.h"

int main() {

    Imovel *imovel[7];
    int i;

    //2 casas; 2 terrenos; 1 apartamento
    imovel[0] = new Casa(15 , 6, 850.34, 698.75);
    imovel[0]->setDescricao("Nova casa 1");
    cout << imovel[0]->getDescricao() << "\n";
    imovel[0]->setEndereco("123", "Qualquer", "CidadeX", "55789-3200", "Tanto faz");
    cout << imovel[0]->getEndereco() << "\n\n";

    imovel[2] = new Casa(35 , 7, 932.1, 764.98);
    imovel[2]->setDescricao("Nova casa 2");
    cout << imovel[2]->getDescricao() << "\n";
    imovel[2]->setEndereco("177", "Qualquer 2", "CidadeX", "55789-3200", "Tanto faz 2");
    cout << imovel[2]->getEndereco() << "\n\n";

    imovel[1] = new Terreno(456.48);
    imovel[1]->setDescricao("Novo Terreno 1");
    imovel[1]->setEndereco("456", "Teste", "Cidade N", "57907-6060", "Teste 2");
    cout << imovel[1]->getDescricao() << "\n" << imovel[1]->getEndereco() << "\n\n";

    imovel[3] = new Terreno(775.48);
    imovel[3]->setDescricao("Novo Terreno 2");
    imovel[3]->setEndereco("364", "Teste 2", "Cidade N", "57907-6060", "Teste 3");
    cout << imovel[3]->getDescricao() << "\n" << imovel[3]->getEndereco() << "\n\n";

    imovel[4] = new Apartamento("Perto do mar", 198000, 150);
    imovel[4]->setDescricao("Novo Apartamento");
    imovel[4]->setEndereco("304", "Bancarios", "Joao Pessoa", "55780-8500", "Teste 4");
    cout << imovel[4]->getDescricao() << "\n" << imovel[4]->getEndereco() << "\n\n";

    for(i = 0; i < 3; i++){
        delete imovel[i];
    }

    return 0;
}