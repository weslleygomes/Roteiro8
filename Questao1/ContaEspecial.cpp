#include "ContaEspecial.h"

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, string numeroDaConta, double saldo):Conta(nomeCliente, salarioMensal, numeroDaConta, saldo)
{

}
void ContaEspecial::definirLimite()
{
    limite=3*salarioMensal;
}
ContaEspecial::~ContaEspecial()
{
    //dtor
}
