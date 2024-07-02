#include <iostream>
#include <string>

using namespace std;

int main()
{
    float valor;
    string name;
    int opc;

    cout << "Qual o nome do seu produo: ";
    cin >> name;

    cout << "Qual é o valor do produto: ";
    cin >> valor;

    cout << endl;

    cout << "De acordo com o menu abaixo, escolha: " << endl;
    cout << "1 - a vista (10% desconto)" << endl;
    cout << "2 - 30 dias de prazo (sem desconto)" << endl;
    cout << "3 - 10x crédito (sem desconto - sem acréscimo)" << endl;
    cout << "4 - 10x boleto (10% de acréscimo)" << endl;

    cout << endl;

    cout << "Insira sua opção: ";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "Vai pagar " << valor * 0.9 << endl;
        break;
    case 2:
        cout << "Vai pagar " << valor << endl;
        break;

    case 3:
        cout << "Vai pagar " << valor << endl;
        cout << "Por mes vai pagar " << valor / 10 << endl;
        break;

    case 4:
        cout << "Vai pagar " << valor * 1.1 << endl;
        cout << "Por mes vai pagar " << (valor * 1.1) / 10 << endl;
        break;

    default:
        cout << "VOCE ERROU BURRO" << endl;
        break;
    }
}
