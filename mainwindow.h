#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "Vendas.h"
#include "carrinho.h"
#include <limits>
#include <QString>
#include <map>
#include <QMainWindow>
#include <QMessageBox>
#include <iostream>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:

    void on_botaogerar_clicked();

    void on_botaocompra_clicked();

    void on_botao_alto_clicked();
    
    void on_botao_driver_clicked();

    void on_botao_inver_clicked();

    void on_botao_proc_clicked();

private:
    Ui::MainWindow *ui;
    std::map<QString,Vendas> Compra;
    Vendas venda;
    Carrinho carrinho ;

    void atualizar_tabela();
};

#endif // MAINWINDOW_H
