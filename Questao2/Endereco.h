#ifndef Q2RT8_ENDERECO_H
#define Q2RT8_ENDERECO_H

#include <string>
using namespace std;

class Endereco {

    protected:
        string numero, rua, bairro, cidade, cep, logradouro;

    public:
        Endereco();
        virtual ~Endereco();
        string toString();

        string getNumero();
        string getCidade();
        string getBairro();
        string getCep();
        string getLogradouro();

        void setNumero(string);
        void setCidade(string);
        void setBairro(string);
        void setCep(string);
        void setLogradouro(string);

};


#endif //Q2RT8_ENDERECO_H
