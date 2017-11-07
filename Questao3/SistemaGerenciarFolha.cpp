#include "SistemaGerenciarFolha.h"

SistemaGerenciarFolha::SistemaGerenciarFolha()
{
    int opcao, opcao2;
    do{
       opcao = this->menu();
       if( opcao == 1){
            do{
                opcao2 = this->menuCadastro();
                this->setFuncionarios(opcao2);
            }while( opcao2 != 0);
          }
       if( opcao == 2)
       {
           cout << "O valor total da folha semanal eh: " << this->calculaValorTotalFolha() << "$" << endl;
           cout << "O valor total da folha mensal eh: " << this->calculaValorTotalFolha()*4 << "$" << endl;
       }
       if(opcao == 3){
            do{
               opcao2 = this->menuPesquisa();
               this->pesquisa(opcao2);
            }while( opcao2 != 0);
       }
    }while(opcao != 0);
}

int SistemaGerenciarFolha::menu(){
    int opcao;
    do{
        cout << "Sistema de Gerenciamento de Folha" << endl;
        cout << "---------------------------------" << endl;
        cout << "1-----------Cadastrar Funcionario" << endl;
        cout << "2---Calcular Valor Total da Folha" << endl;
        cout << "3----------------Consulta Salario" << endl;
        cout << "0----------------------------Sair" << endl;
        cout << "---------------------------------" << endl;
        cout << "Opcao: ";
         cin >> opcao;
    }while(opcao < 0 || opcao > 3);
    return opcao;
}

int SistemaGerenciarFolha::menuCadastro(){
    int opcao;
    do{
        cout << "Cadastro de Funcionarios" << endl;
        cout << "------------------------" << endl;
        cout << "1------------Assalariado" << endl;
        cout << "2----------------Horista" << endl;
        cout << "3-----------Comissionado" << endl;
        cout << "0-----------------Voltar" << endl;
        cout << "Numero de Funcionarios: " << this->contador << endl; // teste
        cout << "------------------------" << endl;
        cout << "Opcao: ";
         cin >> opcao;
    }while( opcao < 0 || opcao > 3);
    return opcao;
}

int SistemaGerenciarFolha::menuPesquisa(){
    int opcao;
    do{
        cout << " Pesquisa de Funcionarios " << endl;
        cout << "--------------------------" << endl;
        cout << "1-------Pesquisar por Nome" << endl;
        cout << "2--Pesquisar por matricula" << endl;
        cout << "0-------------------Voltar" << endl;
        cout << "--------------------------" << endl;
        cout << "Opcao: ";
         cin >> opcao;
    }while( opcao < 0 || opcao > 2);
    return opcao;
}

void SistemaGerenciarFolha::setFuncionarios(int opcao){
    string nome;
    int matricula;
    double a, b, c;
    switch( opcao){
    case 1:
        cout << "Nome: ";
         cin >>nome;
        cout << "Nome: ";
         cin >>nome;
        cout << "Matricula: ";
         cin >> matricula;
        cout << "Salario: ";
         cin >> a;
        funcionarios[this->contador] = new Assalariado(nome, matricula, a);
        this->contador++;
        cout << "Matricula: ";
         cin >> matricula;
        cout << "Salario: ";
         cin >> a;
        funcionarios[this->contador] = new Assalariado(nome, matricula, a);
        this->contador++;
    break;
    case 2:
        cout << "Nome: ";
         cin >> nome;
        cout << "Matricula: ";
         cin >> matricula;
        cout << "Salario Por Hora: ";
         cin >> a;
        cout << "Horas Trabalhadas: ";
         cin >> b;
        funcionarios[this->contador] = new Horista(nome, matricula, a, b);
        this->contador++;
        break;
    case 3:
        cout << "Nome: ";
         cin >>nome;
        cout << "Matricula: ";
         cin >> matricula;
        cout << "Salario Base: ";
         cin >> a;
        cout << "Vendas Semanais: ";
         cin >> b;
        cout << "Percentual de Comissao: ";
         cin >> c;
        cout << "Nome: ";
         cin >>nome;
        cout << "Matricula: ";
         cin >> matricula;
        cout << "Salario: ";
         cin >> a;
        funcionarios[this->contador] = new Assalariado(nome, matricula, a);
        this->contador++;
        funcionarios[this->contador] = new Comissionado(nome, matricula, b, c, a);
        this->contador++;
    break;
    default:
        break;
    }
}

double SistemaGerenciarFolha::calculaValorTotalFolha(){
    double  total = 0;
    int i;
    for( i = 0; i < contador; i++){
        total += funcionarios[i]->calculaSalario();
    }
    return total;
}

void SistemaGerenciarFolha::pesquisa(int opcao){
    int matricula, i;
    string nome;

    if( opcao == 1){
        cout << "Digite o Nome: ";
         cin >> nome;
        
        for( i = 0; i<contador; i++){
             if( nome == this->funcionarios[i]->getNome()){
                cout << "Nome: " << funcionarios[i]->getNome() << endl;
                cout << "Matricula: " << funcionarios[i]->getMatricula() << endl;
                cout << "Salario: " << funcionarios[i]->calculaSalario() << endl;

            }
        }
        
    }
    if( opcao == 2){
        cout << "Digite a Matricula: ";
         cin >> matricula;
        for( i = 0; i<contador; i++){
            if( matricula == this->funcionarios[i]->getMatricula()){
                cout << "Nome: " << funcionarios[i]->getNome() << endl;
                cout << "Matricula: " << funcionarios[i]->getMatricula() << endl;
                cout << "Salario: " << funcionarios[i]->calculaSalario() << endl;

            }
        }
    }
}
