#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{

    int i, n, par, qnt;

    for (i = 1; i <= 20; i++)
    {
        cout << "Insira um número: ";
        cin >> n;

        if (n >= 0 && n % 2 == 0)
        {
            par = par + n;
            qnt = qnt + 1;
        }
    }
    cout << "A quantidade dos pares é: " << qnt << endl;
    cout << "A média dos pares é: " << par / qnt << endl;
}