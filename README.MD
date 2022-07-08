# Projetinho 

## Codigos de exemplo 

Funcionamento do programa;

**PASSO 1** - Cliente abrirá o app e escolherá um produto para comprar;

**PASSO 2** - Dados: pessoais e da compra para ser realizada;
```
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
``` 

**PASSO 3** - Geração de um codigo que valida os o fornecimeto dos dados; 
```
  std::string Vendas::gerar_comprador(){
string temp = this->nome_comprador;
std::remove(temp.begin(),temp.end(),' ');

int numero = (rand() % 5000) + 1;
this->codigo_comprador= temp.substr(0,3) + std::to_string(numero);

return this->codigo_comprador;

}
```
```
}

bool Carrinho::salvar_dados(std::map<std::string, Vendas> dados)
    for(const auto &[codigo_comprador,venda] : dados){
            if(!this->salvar_nomepro(venda)){
                return false;
            }
        }
        return true;
}
```

**PASSO 4** - Apresentação dos dados em csv: dos produtos selecionados e do cliente;

```
void MainWindow::atualizar_tabela()
{
    void MainWindow::on_botao_proc_clicked()
    {
        ui->tableWidget_2->clearContents();
        int i = 0;
        for(const auto [codigo_comprador, venda] : this->Compra){
                  if(i >= ui->tableWidget_2->rowCount()){
                       ui->tableWidget_2->insertRow(i);
                   }
                     ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(QString::fromStdString(this->venda.getNome_produto("Processador stesom 12v 8 canais"))));
                   ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(QString::fromStdString(this->venda.setValor(399.99))));
        } i++;
    }
    void MainWindow::on_botao_inver_clicked()
    {
        ui->tableWidget_2->clearContents();
        int i = 0;
        for(const auto [codigo_comprador, carrinho] : this->Compra){
                  if(i >= ui->tableWidget_2->rowCount()){
                       ui->tableWidget_2->insertRow(i);
                   }

                   ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(QString::fromStdString(venda.getNome_produto("Inversor power 12v/220v dc-1"))));
                   ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(QString::fromStdString(venda.setValor(149,99))));
                  } i++;
    }
    void MainWindow::on_botao_driver_clicked()
    {
        ui->tableWidget_2->clearContents();
        int i = 0;
        for(const auto [codigo_comprador, venda] : this->Compra){
                  if(i >= ui->tableWidget_2->rowCount()){
                       ui->tableWidget_2->insertRow(i);
                   }

                   ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(QString::fromStdString(venda.getNome_produto("Driver - jbl 2 pol 150wrms"))))
                   ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(QString::fromStdString(venda.setValor(649,99))))
                   }i++;
    }
    void MainWindow::on_botao_alto_clicked()
    {
        ui->tableWidget_2->clearContents();
        int i = 0;
        for(const auto [codigo_comprador, venda] : this->Compra){
                  if(i >= ui->tableWidget_2->rowCount()){
                       ui->tableWidget_2->insertRow(i);
                   }

                   ui->tableWidget_2->setItem(i,1,new QTableWidgetItem(QString::fromStdString(venda.getNome_produto("Alto-falante 12 pol 600wrms"))));
                   ui->tableWidget_2->setItem(i,2,new QTableWidgetItem(QString::fromStdString(venda.setValor(999,99))));
                 }  i++;
    }
```

**PASSO 5** - Realização da compra;
```
Vendas vendaAtual(nomeProduto,cod_produto,valor,nome_comprador,codigo_comprador,num_cart,parcelas,idade_comprador);
    this->Compra[QString::fromStdString(this->venda.getCodigo_comprador())] = vendaAtual;
    QMessageBox::information(this, "Compra"," Comprar realizada!!");

    auto teste = compra.insert(std::make_pair(venda.getCodigo_comprador(),venda));

       if(teste.second){
           QMessageBox::information(this, "Compra","Compra Efetuada com Sucesso!");
           this->atualizar_tabela();
           carrihno.salvar_nomepro(venda);
           ui->valor->clear();
       }else{
           QMessageBox::information(this, "Compra","Código repetido, gere um novo código!");
       } .
 
 ```

