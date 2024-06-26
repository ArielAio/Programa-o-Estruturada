#include <iostream>

using namespace std;

int main()
{
    int n1[10];
    int n2[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira o " << i + 1 << " número do primeiro vetor: ";
        cin >> n1[i];
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Insira o " << i + 1 << " número do segundo vetor: ";
        cin >> n2[i];
    }

    cout << endl;

    cout << "Os valores armazenados do 1 vetor são: ";

    for (int i = 0; i < 10; i++)
    {
        cout << n1[i] << ", ";
    }

    cout << endl;

    cout << "Os valores armazenados do 2 vetor são: ";

    for (int i = 0; i < 10; i++)
    {
        cout << n2[i] << ", ";
    }

    cout << endl;
    cout << endl;

    cout << "A multiplicação entre eles é: ";

    for (int i = 0; i < 10; i++)
    {
        cout << n1[i] * n2[i] << ", ";
    }
    cout << endl;
}