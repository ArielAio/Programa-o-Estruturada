#include <iostream>

using namespace std;

int main()
{
    int numero[8];
    int multiplo;

    for (int i = 0; i < 8; i++)
    {
        cout << "Insira o " << i + 1 << " número: ";
        cin >> numero[i];
    }

    cout << endl;

    for (int i = 0; i < 8; i++)
    {
        if (numero[i] % 3 == 0)
        {
            multiplo = multiplo + 1;
        }
    }

    cout << "Dentre esses números, são múltiplos de 3: " << multiplo << " números" << endl;
}