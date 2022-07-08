#ifndef CARRINHO_H
#define CARRINHO_H
#include "Vendas.h"
#include <fstream>
#include <string>
#include <map>
#include <iostream>
#include <limits>
#include <QString>


class Carrinho
{
private:
    std::string nome_arquivo;
public:
    Carrinho();

        bool salvar_nomepro(Vendas venda);
        bool salvar_dados(std::map<string,Vendas> dados);
        std::map<string,Vendas> obter_dados();
};

#endif // CARRINHO_H
