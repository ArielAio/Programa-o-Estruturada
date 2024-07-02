#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{
    string name;
    int age;

    cout << "Qual seu nome: " << endl;
    cin >> name;

    cout << "Qual sua idade: " << endl;
    cin >> age;

    if (age < 18)
    {
        cout << name << " VOCÊ É MENOR DE IDADE HAHAHAHAH" << endl;
    }
    else
    {
        cout << name << " VOCÊ É MAIOR DE IDADEEE" << endl;
        ;
    }
}