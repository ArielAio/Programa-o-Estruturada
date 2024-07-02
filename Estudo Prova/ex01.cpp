// calculadora 1 sub, 2 soma 3 divi, 4 multi 5 encerra, opc incorreta

#include <iostream>

using namespace std;

int main()
{

    int escolha;
    float n1, n2, result;

    cout << "calculadora" << endl;

    cout << "insira o n1: ";
    cin >> n1;

    cout << "insira o n2: ";
    cin >> n2;

    cout << "Insira um numero: 1 - subtrair; 2 - somar; 3 - dividir; 4 - multiplicar; 5 - encerrar: ";
    cin >> escolha;

    switch (escolha)
    {
    case 1:
        result = n1 + n2;
        cout << result << endl;
        break;
    case 2:
        result = n1 - n2;
        cout << result << endl;

        break;

    case 3:
        result = n1 / n2;
        cout << result << endl;

        break;

    case 4:
        result = n1 * n2;
        cout << result << endl;

        break;

    case 5:
        cout << "fim!" << endl;
        return 0;
        break;

    default:
        cout << "opc invalida" << endl;
        break;
    }
}