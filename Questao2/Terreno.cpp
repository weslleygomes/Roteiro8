#include "Terreno.h"

Terreno::Terreno(double a){
    area = a;

    cout << "Area do terreno: " << area << "m²\n";
}

Terreno::~Terreno(){

}

void Terreno::setDescricao(string d){
    descricao = d;
}

string Terreno::getDescricao(){
    return descricao;
}

void Terreno::setEndereco(string n, string b, string c, string Cep, string l) {
    endereco.setNumero(n);
    endereco.setBairro(b);
    endereco.setCidade(c);
    endereco.setCep(Cep);
    endereco.setLogradouro(l);
}

string Terreno::getEndereco(){
    return endereco.toString();
}