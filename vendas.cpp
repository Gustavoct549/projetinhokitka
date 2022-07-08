#include "Vendas.h"
#include <QMessageBox>
#include <QString>

string Vendas::getCod_produto() const
{
    return cod_produto;
}

double Vendas::getValor() const
{
    return valor;
}


string Vendas::getNome_comprador() const
{
    return nome_comprador;
}

bool Vendas::setNome_comprador(const string &value)
{
    if(nome_comprador.size() > 2){
        nome_comprador = value;
          return true;
      }
      return false;
   }

string Vendas::getCodigo_comprador() const
{
    return codigo_comprador;
}

int Vendas::getNum_cart() const
{
    return num_cart;
}

bool Vendas::setNum_cart(int value)
{
        if(num_cart > 3){
            num_cart = value;
            return true;
        }
        return false;
}

string Vendas::getParcelas() const
{
    return parcelas;
}

void Vendas::setParcelas(const string &value)
{
    parcelas = value;
}

int Vendas::getIdade_comprador() const
{
    return idade_comprador;
}

bool Vendas::setIdade_comprador(int value)
{
    if(idade_comprador > 18){
        idade_comprador = value;
        return true;
    }
    return false;

}


std::string Vendas::gerar_comprador(){
string temp = this->nome_comprador;
std::remove(temp.begin(),temp.end(),' ');

int numero = (rand() % 5000) + 1;
this->codigo_comprador= temp.substr(0,3) + std::to_string(numero);

return this->codigo_comprador;

}

const string &Vendas::getNomeProduto() const
{
    return nomeProduto;
}

void Vendas::setNomeProduto(const string &newNomeProduto)
{
    nomeProduto = newNomeProduto;
}

void Vendas::setCod_produto(const string &newCod_produto)
{
    cod_produto = newCod_produto;
}

void Vendas::setValor(double newValor)
{
    valor = newValor;
}

void Vendas::setCodigo_comprador(const string &newCodigo_comprador)
{
    codigo_comprador = newCodigo_comprador;
}

Vendas::Vendas(std::string nomeP, std::string codP, double valor, std::string nomeC, std::string codC, int numC, std::string parcelas, int idade)
{
    this->setNome_produto(nomeP);
    this->setCod_produto(codP);
    this->setValor(valor);
    this->setNome_comprador(nomeC);
    this->setCodigo_comprador(codC);
    this->setNum_cart(numC);
    this->setParcelas(parcelas);
    this->setIdade_comprador(idade);

}

string Vendas::getNome_produto() const
{
    return nomeProduto;
}

void Vendas::setNome_produto(const string &value)
{
    nomeProduto = value;
}
