#include "Apartamento.h"

Apartamento::Apartamento(string p, long double v, int nvagas){

    posicao = p;
    valorDoCondominio = v;
    numeroDeVagasNaGaragem = nvagas;

    cout << "Posicao do apartamento: " << posicao << "\n"<<
            "Valor do condominio: " << valorDoCondominio << "\n" <<
            "Numero de vagas na garagem: " << numeroDeVagasNaGaragem << "\n";
}

Apartamento::~Apartamento(){

}

void Apartamento::setDescricao(string d){
    descricao = d;
}

string Apartamento::getDescricao(){
    return descricao;
}

void Apartamento::setEndereco(string n, string b, string c, string Cep, string l) {
    endereco.setNumero(n);
    endereco.setBairro(b);
    endereco.setCidade(c);
    endereco.setCep(Cep);
    endereco.setLogradouro(l);
}

string Apartamento::getEndereco(){
    return endereco.toString();
}