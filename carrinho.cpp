#include "carrinho.h"

Carrinho::Carrinho()
{
     this->nome_arquivo = "dados.csv";
}

bool Carrinho::salvar_nomepro(Vendas venda)
{
     std::ofstream arquivo(this->nome_arquivo,std::ios::app);
     if(arquivo.is_open()){
         arquivo << venda.getCod_produto()<< " , ";
         arquivo << venda.getNome_produto() << " , " ;
         arquivo << venda.getValor()<< " , ";
         arquivo.close();
         return true;

     }
     return false;
}

bool Carrinho::salvar_dados(std::map<std::string, Vendas> dados)
    for(const auto &[codigo_comprador,venda] : dados){
            if(!this->salvar_nomepro(venda)){
                return false;
            }
        }
        return true;
}

std::map<std::string, Vendas> Carrinho::obter_dados()
{
    Vendas venda;
      std::map<string, Vendas> dados;
      std::ifstream arquivo(nome_arquivo);
      string aux;
      string cod;
      if(arquivo.is_open()){
          while(std::getline(arquivo,aux,',')){
              Vendas.setNome_comprador(aux);

              getline(arquivo,aux,',');
              Vendas.setNome_produto(aux);

              getline(arquivo,aux,',');
              Vendas.setValor(QString::fromStdString(aux).toDouble());


              dados[cod] = venda;
          }

      }
      arquivo.close();
      return dados;
}
