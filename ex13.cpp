#include <iostream>
#include <fstream>

using namespace std;

float calcularIMC(float massa, float estatura)
{
    return massa / (estatura * estatura);
}

int main()
{
    int quantidadePessoas;
    cout << "Informe quantas pessoas serão cadastradas: ";
    cin >> quantidadePessoas;

    fstream arquivo;

    struct DadosPessoa
    {
        string nomePessoa;
        float alturaPessoa, pesoPessoa, imcPessoa;
    } listaPessoas[quantidadePessoas];

    arquivo.open("pessoas.txt", ios::out | ios::app);

    if (!arquivo.is_open())
    {
        cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    cout << "===========================================\n";
    for (int i = 0; i < quantidadePessoas; i++)
    {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> listaPessoas[i].nomePessoa;
        cout << "Digite o peso da pessoa " << i + 1 << ": ";
        cin >> listaPessoas[i].pesoPessoa;
        cout << "Digite a altura da pessoa " << i + 1 << ": ";
        cin >> listaPessoas[i].alturaPessoa;

        listaPessoas[i].imcPessoa = calcularIMC(listaPessoas[i].pesoPessoa, listaPessoas[i].alturaPessoa);
        cout << "IMC de " << listaPessoas[i].nomePessoa << " é: " << listaPessoas[i].imcPessoa << endl;
        arquivo << "IMC de " << listaPessoas[i].nomePessoa << " é: " << listaPessoas[i].imcPessoa << endl;
        cout << "===========================================\n";
    }

    arquivo.close();
    return 0;
}
