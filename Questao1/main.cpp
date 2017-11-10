#include <iostream>
#include "ContaEspecial.h"
void exibirOpcoes()
{
	std::cout <<  "1 - Sacar da conta 1\n"
		 	  <<  "2 - Sacar da conta 2\n"
		 	  <<  "3 - Depositar na conta 1\n"
		 	  <<  "4 - Depositar na conta 2\n"
		 	  <<  "5 - Fechar programa"
			  <<  "\n---------------------------------\n\n";
}
void exibirConta(Conta *conta, std::string tipo)
{
	std::cout <<  "Conta " << tipo << ":\n"
		 	  <<  "Nome: " << conta->getNomeCliente()
		      <<  "\nSalario Mensal: " << conta->getSalarioMensal()
		      <<  "\nNumero Da Conta: " << conta->getNumeroDaConta()
		      <<  "\nSaldo: " << conta->getSaldo()
		 	  <<  "\nLimite: " << conta->getLimite()
			  <<  "\n---------------------------------\n\n";
}
void sacar(Conta *conta)
{
	std::cout << "Quanto: ";
	double n;
	std::cin >> n;
	conta->sacar(n);
}
void depositar(Conta *conta)
{
	std::cout << "Quanto: ";
	double n;
	std::cin >> n;
	conta->depositar(n);
}
int main()
{
	Conta *c1 = new Conta("Maria De Lourdes",2000.00,"0000-0000",500.0);
	ContaEspecial *ce1 = new ContaEspecial("Joao Pedro",1500.00, "0000-0001", 700.0);
  	exibirConta(c1,"1 (normal)");
  	exibirConta(ce1, "2 (especial)");
  	while(1)
  	{
  		exibirOpcoes();
  		int sw;
  		std::cin >> sw;
		switch(sw)
		{
			case 1:
				sacar(c1);
				break;
			case 2:
				sacar(ce1);
				break;
			case 3:
				depositar(c1);
				break;
			case 4:
				depositar(ce1);
				break;
			default:
				std::cout << "Fim do Programa" << std::endl;
		
		}
		std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		exibirConta(c1,"1 (normal)");
  		exibirConta(ce1, "2 (especial)");
  		if(sw==5)
  		{
  			break;
		}
	}
  	
    return 0;
}
