#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{

    int n1, n2;

    cout << "Operadores Lógicos" << endl;
    cout << "Digite 2 números" << endl;
    cin >> n1 >> n2;

    cout << "A negação do primeiro número é: " << !n1 << endl;

    cout <<"A op. AND entre o primeiro e o segundo número é: " << (n1 && n2) << endl;

    cout << "A op. OR entr eo primeiro e segundo número é: " << (n1 || n2) << endl;
}