#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    float media;

    cout << "Média do aluno" << endl;
    cin >> media;

    if (media >= 0 && media <= 10)
    {
        cout << "Média válida!" << endl;
        if (media < 5)
        {
            cout << "ALUNO REPROVADO!!" << endl;
        }
        else
        {
            cout << "ALUNO APROVADO!!" << endl;
        }
    }
    else
    {
        cout << "Média inválida!" << endl;
    }
}