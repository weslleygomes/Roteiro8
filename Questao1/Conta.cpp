#include "Conta.h"

Conta::Conta(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo)
{
    this->nomeCliente=nomeCliente;
    this->salarioMensal=salarioMensal;
    this->numeroDaConta=numeroDaConta;
    this->saldo=saldo;
}
string Conta::getNomeCliente()
{
    return nomeCliente;
}
double Conta::getSalarioMensal()
{
    return salarioMensal;
}
string Conta::getNumeroDaConta()
{
    return numeroDaConta;
}
double Conta::getSaldo()
{
    return saldo;
}
void Conta::sacar(double valor)
{
    saldo-=valor;
}
void Conta::depositar(double valor)
{
    saldo+=valor;
}
void Conta::definirLimite()
{
    limite=2*salarioMensal;
}
Conta::~Conta()
{
}
