#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{

    char nome[20], naturalidade[30];
    int idade;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Digite a cidade em que voce nasceu: ";
    cin >> naturalidade;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "\n Seu nome e: " << nome << "\nVoce nasceu em: " << naturalidade << "\n Voce tem: " << idade << " anos\n";
}
