#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{

    int i, n, inteiro, qnt;

    for (i = 1; i <= 20; i++)
    {
        cout << "Insira um número: ";
        cin >> n;

        if (n >= 0)
        {
            inteiro = inteiro + n;
            qnt = qnt + 1;
        }
    }
    cout << "A quantidade dos numeros positivos digitados é: " << qnt << endl;
    cout << "A média dos pares é: " << inteiro / qnt << endl;
}