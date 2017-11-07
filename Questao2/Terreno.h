#ifndef Q2RT8_TERRENO_H
#define Q2RT8_TERRENO_H


#include "Imovel.h"

class Terreno : public Imovel{

    protected:
        double area;

    public:
        Terreno(double a);
        virtual ~Terreno();

        string getEndereco();
        void setEndereco(string n, string b, string c, string Cep, string l);
        void setDescricao(string);
        string getDescricao();

};


#endif //Q2RT8_TERRENO_H
