#include <iostream>

using namespace std;

float calcularIMC(float massa, float estatura)
{
    float indiceMassaCorporal;
    indiceMassaCorporal = massa / (estatura * estatura);
    return indiceMassaCorporal;
}

int main()
{
    float massaCorporal, alturaCorporal, resultadoIMC;
    cout << "Programa para calcular o Índice de Massa Corporal (IMC): \n";

    cout << "Digite seu peso: ";
    cin >> massaCorporal;
    cout << "Digite sua altura: ";
    cin >> alturaCorporal;

    resultadoIMC = calcularIMC(massaCorporal, alturaCorporal);

    cout << "Seu IMC é: " << resultadoIMC << endl;

    return 0;
}
