#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string linha;

    fstream arq;

    arq.open("nomes", ios::out | ios::app);

    if (arq.is_open())
    {
        arq << "Ola" << endl;
        arq << "teste" << endl;

        arq.close();

        arq.open("nomes", ios::in);

        while (!arq.eof())
        {
            getline(arq, linha);

            cout << linha << endl;
        }

        arq.close();
    }
    else
    {

        cout << "erro";
    }
}
