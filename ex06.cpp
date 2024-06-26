#include <iostream>

using namespace std;

int main()
{
    int tamanho = 4;
    int matriz[tamanho][tamanho];

    for (int coluna = 0; coluna < tamanho; coluna++)
    {
        for (int linha = 0; linha < tamanho; linha++)
        {
            cout << "Digite o elemento da posicao [" << coluna + 1 << "][" << linha + 1 << "]: ";
            cin >> matriz[coluna][linha];
        }
    }
    cout << endl;

    cout << "Os valores da matriz são: " << endl;

    for (int coluna = 0; coluna < tamanho; coluna++)
    {
        for (int linha = 0; linha < tamanho; linha++)
        {
            cout << matriz[coluna][linha] << "\t";
        }
        cout << endl;
    }
}