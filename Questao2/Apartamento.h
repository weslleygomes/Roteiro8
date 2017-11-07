#ifndef Q2RT8_APARTAMENTO_H
#define Q2RT8_APARTAMENTO_H


#include "Imovel.h"

class Apartamento : public Imovel{

    protected:
        string posicao;
        long double valorDoCondominio;
        int numeroDeVagasNaGaragem;

    public:
        Apartamento(string p, long double v, int nvagas);
        virtual ~Apartamento();

        string getEndereco();
        void setEndereco(string n, string b, string c, string Cep, string l);
        void setDescricao(string);
        string getDescricao();

};


#endif //Q2RT8_APARTAMENTO_H
