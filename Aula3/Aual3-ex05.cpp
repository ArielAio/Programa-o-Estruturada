#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    char bolo;

    cout << "Cardapio:" << endl;
    cout << "C - Chocolate" << endl;
    cout << "B - Banana" << endl;
    cout << "A - Amendoin" << endl;
    cout << "L - LOUD" << endl;
    cout << "F - Fura" << endl;
    cin >> bolo;

    bolo = toupper(bolo);

    switch (bolo)
    {
    case 'C':
        cout << "bolo chocolate!" << endl;
        break;
    case 'B':
        cout << "bolo banana!" << endl;
        break;
    case 'A':
        cout << "bolo amendoin!" << endl;
        break;
    case 'L':
        cout << "bolo LOUD!" << endl;
        break;
    case 'F':
        cout << "bolo Fúria!" << endl;
        break;

    default:
        cout << "INVALIDO!" << endl;
        break;
    }
}