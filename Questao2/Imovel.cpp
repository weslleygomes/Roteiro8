#include "Imovel.h"

Imovel::Imovel(){

}

Imovel::~Imovel(){

}

void Imovel::setEndereco(string n, string b, string c, string Cep, string l){
    /*endereco.setNumero(n);
    endereco.setBairro("Qualquer um");
    endereco.setCidade("Desconhecida");
    endereco.setCep("55780-3518");
    endereco.setLogradouro("Sem informacao");*/
}

string Imovel::getEndereco(){
    return endereco.toString();
}

void Imovel::setDescricao(string d){
    descricao = d;
}

string Imovel::getDescricao(){
    return descricao;
}