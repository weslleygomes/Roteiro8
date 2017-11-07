#ifndef CONTA_H
#define CONTA_H
#include "Iconta.h"
#include <string>
using namespace std;

class Conta : public Iconta
{
    public:
        Conta(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo);
        virtual ~Conta();
        void sacar(double valor);
        void depositar(double valor);
        void definirLimite();
        string getNomeCliente();
        double getSalarioMensal();
        string getNumeroDaConta();
        double getSaldo();
    protected:
        string nomeCliente;
        double salarioMensal;
        string numeroDaConta;
        double saldo;
        double limite;
    private:
};

#endif // CONTA_H
