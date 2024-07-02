#include "tableviewer.h"

void TableViewer::WriteTable()
{
    QFile file1(QFileDialog::getOpenFileName(nullptr,"Open file","","*.txt"));
    file1.open(QIODevice::ReadOnly|QIODevice::Text);
    QTextStream fileTextStream1(&file1);

    QString tmpStr1,tmpStr2;
    fileTextStream1>>tmpStr1>>tmpStr2;
    _pTable=new QTableWidget(tmpStr1.toInt(),tmpStr2.toInt(),this);

}
TableViewer::TableViewer()
{

    CreateWindow();

}

void TableViewer::CreateWindow()
{

    _pTable=new QTableWidget(this);
    _pLoadButton=new QPushButton("Load",this);

    //Load Button
    _pLoadButton->setGeometry(50,50,50,25);


    //Table
    _pTable->setGeometry(150,50,500,200);

    connect(_pLoadButton,SIGNAL(clicked()),this,SLOT(WriteTable()));

}

