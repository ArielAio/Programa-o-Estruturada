#include <iostream>

using namespace std;

float calcular(float c)
{
    float resultado;

    resultado = (c * 9 / 5) + 32;

    return resultado;
}

int main()
{
    float celcios;

    cout << "Insira o valor em graus celcios: " << endl;
    cin >> celcios;

    cout << "resultado: " << calcular(celcios) << endl;
}