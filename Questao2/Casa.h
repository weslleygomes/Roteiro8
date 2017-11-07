#ifndef Q2RT8_CASA_H
#define Q2RT8_CASA_H

#include "Imovel.h"

class Casa : public Imovel{

    protected:
        int numeroDePavimentos, quantidadeDeQuartos;
        double areaDoTerreno, areaConstruida;

    public:
        Casa(int ndp, int qdq, double adt, double ac);
        virtual ~Casa();

        string getEndereco();
        void setEndereco(string n, string b, string c, string Cep, string l);
        void setDescricao(string);
        string getDescricao();

};


#endif //Q2RT8_CASA_H
