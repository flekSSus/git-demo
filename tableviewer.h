#ifndef TABLEVIEWER_H
#define TABLEVIEWER_H
#include<QWidget>
#include<QTableWidget>
#include <QFile>
#include<QTextStream>
#include <QPushButton>
#include <QFileDialog>

class TableViewer:public QWidget
{

    Q_OBJECT
public:
    TableViewer();

    QTableWidget *_pTable;
    QPushButton * _pLoadButton;

public slots:
    void WriteTable();

    void CreateWindow();

};

#endif // TABLEVIEWER_H
