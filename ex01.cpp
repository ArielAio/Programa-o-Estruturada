#include <iostream>
#include <string>

using namespace std;

int main()
{

    float numero[10];
    float soma;

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira o " << i + 1 << "º numero: ";
        cin >> numero[i];

        soma = soma + numero[i];
    }

    cout << endl;

    cout << "Os numeros digitados são: ";

    for (int i = 0; i < 10; i++)
    {
        cout << numero[i] << ", ";
    }

    cout << endl;
    cout << endl;

    cout << "A soma total é: " << soma << endl;
}