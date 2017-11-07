#include <iostream>
#include "ContaEspecial.h"
using namespace std;

int main()
{
    Conta *c1= new Conta("Maria Rosario", 500.00, 0000-0000, 40.00);
    Conta *ce1= new ContaEspecial("Juau Paulo", 0.50, 0000-0000, 500.00);

    cout << c1->getNomeCliente() << c1->getSalarioMensal() << c1->getNumeroDaConta() << c1->getSaldo() << endl;
    return 0;
}
