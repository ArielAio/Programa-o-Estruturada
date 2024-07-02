// matriz

#include <iostream>

using namespace std;

int main()
{

    int matriz[4][4];

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            cout << "Insira o valor [" << linha << "] [" << coluna << "]: ";
            cin >> matriz[linha][coluna];
        }
    }

    for (int linha = 0; linha < 4; linha++)
    {
        for (int coluna = 0; coluna < 4; coluna++)
        {
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }
}