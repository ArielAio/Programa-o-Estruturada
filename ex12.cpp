#include <iostream>

using namespace std;

float calcularIMC(float massa, float estatura)
{
    return massa / (estatura * estatura);
}

int main()
{
    int numPessoas;
    cout << "Informe quantas pessoas serão cadastradas: ";
    cin >> numPessoas;

    struct DadosPessoa
    {
        string nomePessoa;
        float alturaPessoa, pesoPessoa, imcPessoa;
    } cadastroPessoas[numPessoas];

    cout << "===========================================\n";
    for (int i = 0; i < numPessoas; i++)
    {
        cout << "Digite o nome da pessoa " << i + 1 << ": ";
        cin >> cadastroPessoas[i].nomePessoa;
        cout << "Digite o peso da pessoa " << i + 1 << ": ";
        cin >> cadastroPessoas[i].pesoPessoa;
        cout << "Digite a altura da pessoa " << i + 1 << ": ";
        cin >> cadastroPessoas[i].alturaPessoa;
        cadastroPessoas[i].imcPessoa = calcularIMC(cadastroPessoas[i].pesoPessoa, cadastroPessoas[i].alturaPessoa);
        cout << "IMC de " << cadastroPessoas[i].nomePessoa << " é: " << cadastroPessoas[i].imcPessoa << endl;
        cout << "===========================================\n";
    }

    return 0;
}
