#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    string name;
    int pessoas, i;

    cout << "quantas pessoas irá inseir o nome: " << endl;

    cin >> pessoas;

    for (i = 0; i < pessoas; i++)
    {
        cout << "nome: " << endl;
        cin >> name;

        fstream arq;

        arq.open("venci", ios::out | ios::app);

        if (arq.is_open())
        {

            arq << name << ", " << endl;

            arq.close();

            arq.open("venci", ios::in);

            arq.close();
        }
        else
        {
            cout << "erro";
        }
    }
}