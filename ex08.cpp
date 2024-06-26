#include <iostream>

using namespace std;

int main()
{
    float matriz[4][5];
    float novaMatriz[4][5];

    for (int coluna = 0; coluna < 4; coluna++)
    {
        for (int linha = 0; linha < 5; linha++)
        {
            cout << "Insira o valor do elemento [" << coluna + 1 << "] [" << linha + 1 << "]: ";
            cin >> matriz[coluna][linha];
        }
    }

    cout << endl;
    cout << endl;

    cout << "Os valores da matriz são: " << endl;

    for (int coluna = 0; coluna < 4; coluna++)
    {
        for (int linha = 0; linha < 5; linha++)
        {
            cout << matriz[coluna][linha] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    cout << endl;

    cout << "Valores da matriz /2: " << endl;

    for (int coluna = 0; coluna < 4; coluna++)
    {
        for (int linha = 0; linha < 5; linha++)
        {
            novaMatriz[coluna][linha] = matriz[coluna][linha] / 2;
            cout << novaMatriz[coluna][linha] << "\t";
        }
        cout << endl;
    }
}