// aniversario

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string name;

    cout << "Insira seu nome: ";
    cin >> name;

    fstream arquivo;

    arquivo.open("nomeArquivo.txt", ios::out | ios::app);

    arquivo << "seu nome é: " << name << endl;

    arquivo.close();
}