#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{

    int i, filho, qnt;
    double salario, sT, fT, maiorS;

    for (i = 1; i <= 15; i++)
    {
        cout << "Qual seu salário: ";
        cin >> salario;
        cout << "Quantos filhos tem: ";
        cin >> filho;

        qnt = qnt + 1;

        sT = salario + sT;

        fT = filho + fT;

        if (salario > maiorS)
        {
            maiorS = salario;
        }
    }

    cout << "A média dos salários é: " << sT / qnt << endl;
    cout << "A média dos filhos é: " << fT / qnt << endl;
    cout << "O maior salário é: " << maiorS << endl;
}