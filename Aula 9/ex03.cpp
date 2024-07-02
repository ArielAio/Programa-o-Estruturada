#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string abc;

    ifstream arq_leitura("oi");

    if (arq_leitura.is_open())
    {

        while (!arq_leitura.eof())
        {
            getline(arq_leitura, abc);
            cout << abc << endl;
        }
        arq_leitura.close();
    }
    else
    {
        cout << "Erro";
    }
}