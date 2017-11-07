#include "Casa.h"

Casa::Casa(int ndp, int qdq, double adt, double ac){

    numeroDePavimentos = ndp;
    quantidadeDeQuartos = qdq;
    areaDoTerreno = adt;
    areaConstruida = ac;

    cout << "Numero de Pavimentos: " << numeroDePavimentos << "\n" <<
            "Quantidade de Quartos: " << quantidadeDeQuartos << "\n" <<
            "Area do Terreno da casa: " << areaDoTerreno << "m²\n" <<
            "Area Construida: " << areaConstruida << "m²\n";
}

Casa::~Casa(){

}

void Casa::setDescricao(string d){
    descricao = d;
}

string Casa::getDescricao(){
    return descricao;
}

void Casa::setEndereco(string n, string b, string c, string Cep, string l) {
    endereco.setNumero(n);
    endereco.setBairro(b);
    endereco.setCidade(c);
    endereco.setCep(Cep);
    endereco.setLogradouro(l);
}

string Casa::getEndereco(){
    return endereco.toString();
}