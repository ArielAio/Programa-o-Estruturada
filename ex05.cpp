#include <iostream>

using namespace std;

int main()
{
    int numeros[10];

    cout << "os valores do vetor são: ";

    for (int i = 0; i < 10; i++)
    {
        numeros[i] = i + 1;
        cout << numeros[i] << ", ";
    }

    cout << endl;
    cout << endl;

    cout << "os valores do vetor na ordem inversa são: ";

        for (int i = 9; i >= 0; i--)
    {
        cout << numeros[i] << ", ";
    }
    cout << endl;
}