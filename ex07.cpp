#include <iostream>

using namespace std;

int main()
{
    int tamanho = 6;
    int matriz[tamanho][tamanho];

    for (int coluna = 0; coluna < tamanho; coluna++)
    {
        for (int linha = 0; linha < tamanho; linha++)
        {
            cout << "Insira o valor do elemento na posição [" << coluna + 1 << "] [" << linha + 1 << "]: ";
            cin >> matriz[coluna][linha];
        }
    }

    for (int coluna = 0; coluna < tamanho; coluna++)
    {
        for (int linha = 0; linha < tamanho; linha++)
        {
            cout << matriz[coluna][linha] << "\t";
        }
        cout << endl;
    }

    cout << endl;

    for (int coluna = 0; coluna < tamanho; coluna++)
    {
        cout << matriz[coluna][tamanho - 1 - coluna] << "\t";
    }
    cout << endl;
}