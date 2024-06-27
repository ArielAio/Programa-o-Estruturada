#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    int opt;

    cout << "1 - prato do dia" << endl;
    cout << "2 - lasanha" << endl;
    cout << "3 - picanha grelhada" << endl;
    cout << "4 - salada" << endl;

    cin >> opt;

    switch (opt)
    {
    case 1:
        cout << "prato do dia: 17 reais" << endl;
        break;
    case 2:
        cout << "lasanha: 17 reais" << endl;
        break;
    case 3:
        cout << "picanha grelhada: 21.90 reais" << endl;
        break;
    case 4:
        cout << "salada: 7.90 reais " << endl;
        break;

    default:
        cout << "Opção errada" << endl;
        break;
    }
}