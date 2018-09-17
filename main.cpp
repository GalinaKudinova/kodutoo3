#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include <iostream>
using namespace std ;


//functions headers delcaration, boath function return nothing - void

void printMSpaseAndLStars(int M,int L); //Function header to print one row with M spases and L stars

void printTriangle(int N); //Function header to print triangle and call function printMSpaseAndLStars N times

// main program, function headers shall be declare before main
int main(int argc, char *argv[])
{
    cout << "Hello user \n";

    cout << "Enter a height of triangle : ";

    int height = 0;
    cin >> height;


    QCoreApplication a(argc, argv);



    qDebug() << "Start, shall print triangle with"<< height << "rows";
    printTriangle(height); // call function printTriangle with arg height

    qDebug() << "End";
    return a.exec();
}

void printMSpaseAndLStars(int M,int L) //Function body, M spases and L stars counts
{
    QString qsOneRow;
    for (int i=0; i<M; i++) qsOneRow+=' '; // += this is adding one char to end of string
    for (int i=0; i<L; i++) qsOneRow+='*'; // += can be use and to concatinate 2 and more strings together

    qDebug() << qsOneRow;                        // Now  show string borders
    //qDebug() << qsOneRow.toLocal8Bit().data(); //don't show string borders
}

void printTriangle(int height) //Function body
{

    qDebug() << "Hello from function printTriangle";
    for (int i=0; i<height; i++)    {
        printMSpaseAndLStars((height-1)-i, (i*2)+1);
    }
    qDebug() << "Exit from function printTriangle";
}
