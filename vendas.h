#ifndef VENDAS_H
#define VENDAS_H

#include <limits>
#include <QString>
#include <map>
#include <QMainWindow>

using std::string;

class Vendas
{
private:
    string nomeProduto;
    string cod_produto;
    double valor;
    string nome_comprador;
    string codigo_comprador;
    int num_cart;
    string parcelas;
    int idade_comprador;

public:
    Vendas();
    Vendas(string nomeP, string codP, double valor, string nomeC, string codC, int numC, string parcelas, int idade);

    string getNome_produto() const;
    void setNome_produto(const string &value);
    string getCod_produto() const;
    double getValor() const;
    int getQuant() const;
    string getNome_comprador() const;
    bool setNome_comprador(const string &value);
    string getCodigo_comprador() const;
    int getNum_cart() const;
    bool setNum_cart(int value);
    string getParcelas() const;
    void setParcelas(const string &value);
    int getIdade_comprador() const;
    bool setIdade_comprador(int value);
    string gerar_comprador();
    const string &getNomeProduto() const;
    void setNomeProduto(const string &newNomeProduto);
    void setCod_produto(const string &newCod_produto);
    void setValor(double newValor);
    void setCodigo_comprador(const string &newCodigo_comprador);
};

#endif // VENDAS_H



