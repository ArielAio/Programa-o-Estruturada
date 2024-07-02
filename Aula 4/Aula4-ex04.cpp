#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>

using namespace std;

int main()
{
    int contador = 1, n1;

    do
    {
        cout << "Numero: ";
        cin >> n1;

        if (n1 != 0)
            contador = contador + 1;

    } while (n1 != 0);

    cout << "Foram digitados: " << contador << "números" << endl;
}