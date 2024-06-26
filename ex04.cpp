#include <iostream>

using namespace std;

int main()
{
    float p1[3];
    float p2[3];
    float media;

    for (int i = 0; i < 3; i++)
    {
        cout << "A P1 do aluno " << i + 1 << " é: ";
        cin >> p1[i];

        cout << "A P2 do aluno " << i + 1 << " é: ";
        cin >> p2[i];

        cout << endl;
    }

    cout << endl;
    cout << endl;

    cout << "Situação dos alunos:" << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << "Aluno " << i + 1 << ": P1 = " << p1[i] << "; P2 = " << p2[i] << endl;

        media = (p1[i] + p2[i]) / 2;

        cout << "Média = " << media << endl;

        if (media < 6)
        {
            cout << "Reprovado!";
        }
        else
        {
            cout << "Aprovado!";
        }
        cout << endl;
        cout << endl;
    }
}