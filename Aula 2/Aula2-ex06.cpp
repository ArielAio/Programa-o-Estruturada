#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{

    int n1, n2, n3;
    bool result;

    cout << "Operadores Relacionais" << endl;
    cout << "Digite 3 números: " << endl;
    cin >> n1 >> n2 >> n3;
    result = n1 > n2;

    cout << "O resultado da operação: n1 é maior q n2, é: " << result << endl;
    result = n2 == n3;

    cout << "O resultado da operação: n2 é igual a n3, é: " << result << endl;

    result = n3 != n1;
    cout << "O resultado da operação: n3 é diferente de n1, é: " << result << endl;
}