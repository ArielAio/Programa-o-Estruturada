#include <iostream>
#include <string>

using namespace std;

int main()
{
    struct
    {
        string nomePet, especie, raca, sexo, nomeDono;
        int idadePet, rg, tell;
    } PET;

    cout << "Insira o nome do seu Pet: ";
    cin >> PET.nomePet;

    cout << "Insira a espécie do seu Pet: ";
    cin >> PET.especie;

    cout << "Insira a raça do seu Pet: ";
    cin >> PET.raca;

    cout << "Insira o sexo do seu Pet: ";
    cin >> PET.sexo;

    cout << "Insira a idade do seu Pet: ";
    cin >> PET.idadePet;

    cout << endl;

    cout << "Ótimo, agora precisamos de algumas iformações suas: " << endl;

    cout << "Insira o seu nome: ";
    cin >> PET.nomeDono;

    cout << "Insira o seu RG: ";
    cin >> PET.rg;

    cout << "Insira o seu número de telefone: ";
    cin >> PET.tell;

    cout << endl;

    cout << "Os dados cadastrados foram: " << endl;

    cout << "Nome do seu Pet: " << PET.nomePet << endl;
    cout << "Espécie do seu Pet: " << PET.especie << endl;
    cout << "Raça do seu Pet: " << PET.raca << endl;
    cout << "Sexo do seu Pet: " << PET.sexo << endl;
    cout << "Idade do seu Pet: " << PET.idadePet << endl;

    cout << "Seu nome: " << PET.nomeDono << endl;
    cout << "Seu RG: " << PET.rg << endl;
    cout << "Seu Telefone: " << PET.tell << endl;
}