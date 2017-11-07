#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:
        ContaEspecial(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo);
        virtual ~ContaEspecial();
        void definirLimite();

    protected:

    private:
};

#endif
