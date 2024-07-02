#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{

    double raio, area, perimetro;


    cout << "Insira o raio do seu círculo: ";
    cin >> raio;

    area = M_PI * pow(raio, 2);
    perimetro = 2 * M_PI* raio;


    cout << "A área do seu círculo é: " << area << endl;
    cout << "O perímetro do seu círculo é: " << perimetro << endl;

}