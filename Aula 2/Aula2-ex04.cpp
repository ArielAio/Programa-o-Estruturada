#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <locale>

using namespace std;

int main()
{

    float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
    int resto, num4, num5;

    cout << "Programa para operações matemáticas";
    cout << "CInco números serão necessários." << endl
         << endl;

    cout << "Digite o primeiro número: ";
    cin >> num1;

    cout << "Digite o segundo número: ";
    cin >> num2;

    cout << "Digite o terceiro número: ";
    cin >> num3;

    cout << "Digite o quarto número: ";
    cin >> num4;

    cout << "Digite o quinto número: ";
    cin >> num5;

    soma = num1 + num2;
    cout << "A soma do primeiro e segundo número é: " << soma << endl;

    subtracao = num3 - num1;
    cout << "A subtração do terceiro e primiro número é: " << subtracao << endl;

    divisao = num2 / num1;
    cout << "A divisão do segundo numero pelo primeiro é: " << setprecision(2) << divisao << endl;

    multiplicacao = num1 * num2;
    cout << "A multiplicação do primeiro número pelo segundo número é: " << multiplicacao << endl;

    resto = num4 % num5;
    cout << "O resto da divisão do quarto número pelo quinto é: " << resto << endl;
}