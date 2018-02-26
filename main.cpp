#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <QString>
#include <QDebug>

using namespace std;

int main(int argc, char* argv[])
{
    srand((unsigned)time(NULL));
    char symb[] = "qwertyuiopasdfghjklzxcvbnmwe1234354353";
    char n_name[20] = "1" ; // присвоил n_name какое то значение, ибо по какой то причине она забивалась мусором.

    unsigned int j;
    for (int i = 0; i < 8; i++)
    {
        j = rand()% 28;
        n_name[i] = symb[j];
    }
    QString = n_name;
    qDebug() << m_Size;
    return 0;
}
