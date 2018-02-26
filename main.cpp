#include <iostream>
#include <cstdlib>
#include <ctime>
#include <locale>
#include <QString>
#include <QDebug>

using namespace std;

QString strgen(int, int);

int main(int argc, char* argv[])
{
  QString qwe = strgen(20,19);
  qDebug() << qwe;

}

QString strgen(int n, int m)
{
srand((unsigned)time(NULL));
char symb[] = "QWERTYUIOPASDFGHJKLMNBVCXZqwertyuiopasdfghjklzxcvbnm123456789 ";
char n_name[n] = "1";

int j;
for (int i = 0; i < m; i++)
{
    j = rand()%63;
    n_name[i] = symb[j];
}
QString m_str = n_name;

return m_str;
}
