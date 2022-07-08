#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_botaogerar_clicked()
{
    string aux = ui-> in_nome -> text().toStdString();

       if(!venda.setNome_comprador(aux)){
           QMessageBox::warning(this, "Compra","Título inválido, mínimo 3 caracteres");
           return;
}



       int ano = ui->in_id->text().toInt();
       if(!venda.setIdade_comprador(ano)){
           QMessageBox::warning(this, "Compra","ano inválido");
           return;
}

       venda.gerar_comprador();
       ui-> botaogerar ->setText(QString::fromStdString(venda.getCodigo_comprador()));
       ui->lineEdit->setEnabled(true);
       QMessageBox::information(this, "Compra","Confira os dados e clique em comprar");
       //

       ui->tableWidget_2->clearContents();
       int i = 0;
       for(const auto [codigo_comprador, venda] : this->Compra){
                 if(i >= ui->tableWidget_2->rowCount()){
                      ui->tableWidget_2->insertRow(i);
                  }
                  ui->tableWidget_2->setItem(i,0,new QTableWidgetItem(QString::fromStdString(venda.getNome_comprador())));
                 } i++;

}





void MainWindow::on_botaocompra_clicked()
{
    string nomeProduto;
    string cod_produto;
    double valor = 0.0;
    string nome_comprador = ui->in_nome->text().toStdString();
    string codigo_comprador;
    int num_cart =stoi( ui->in_cart->text().toStdString() );
    string parcelas = ui->in_par->currentText().toStdString();
    int idade_comprador = ui->in_id->text().toInt();

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
       }
}


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

}

