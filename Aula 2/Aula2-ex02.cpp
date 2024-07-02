#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    const int ano = 2024;
    int nascimento, idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    nascimento = ano - idade;
    cout << "Voce nasceu em: " << nascimento << "\n";


}
