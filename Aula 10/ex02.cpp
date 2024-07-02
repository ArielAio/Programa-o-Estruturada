// elabore um algoritmo que seja capaz de ler 15 numeros reais qe seja capaz de exibir
// quantos numeros lidos sao iguais a 4
// quantos sao maiores que a media

#include <iostream>

using namespace std;

int main()
{
    int qtd = 15;
    int numeros[qtd];
    int quatro, soma, maiorMedia;
    float media = 0;

    for (int i = 0; i < qtd; i++)
    {
        cout << "Insira o numero " << i + 1 << ": ";
        cin >> numeros[i];

        if (numeros[i] == 4)
        {
            quatro = quatro + 1;
        }

        soma = soma + numeros[i];
    }

    media = soma / 3;

    for (int i = 0; i < qtd; i++)
    {
        if (numeros[i] > media)
        {
            maiorMedia = maiorMedia + 1;
        }
    }

    cout << "A media é: " << media << endl;
    cout << "Existem " << quatro << " números iguais a quatro" << endl;
    cout << "Exitem " << maiorMedia << " números maiores do que a media" << endl;
}
