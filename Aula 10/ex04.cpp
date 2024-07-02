// fazer uma matriz de tamanho NxN, imprimir a matriz original
// uma outra matriz sem a ultma linha e a  coluna

#include <iostream>

using namespace std;

int main()
{

    int n, linha, coluna;

    cout << "insira o tamanho da sua matriz N x N: ";
    cin >> n;

    int matriz[n][n];

    for (linha = 0; linha < n; linha++)
    {
        for (coluna = 0; coluna < n; coluna++)
        {
            cout << "Valor [" << linha + 1 << "][" << coluna + 1 << "]: ";
            cin >> matriz[linha][coluna];
        }
    }

    for (linha = 0; linha < n - 1; linha++)
    {
        for (coluna = 0; coluna < n - 1; coluna++)
        {
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }
}
