#ifndef Q2RT8_IMOVEL_H
#define Q2RT8_IMOVEL_H

#include "Endereco.h"
#include <iostream>

using namespace std;

class Imovel {
    protected:
        Endereco endereco;
        string descricao;
    public:
        Imovel();
        virtual ~Imovel();

        virtual string getEndereco();
        virtual void setEndereco(string n, string b, string c, string Cep, string l);
        virtual void setDescricao(string) = 0;
        virtual string getDescricao() = 0;
};


#endif //Q2RT8_IMOVEL_H
