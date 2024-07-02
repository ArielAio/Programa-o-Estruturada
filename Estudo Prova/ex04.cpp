#include <iostream>

using namespace std;

float calcular(float n1, float n2)
{
    float result;

    result = n1 / n2;

    return result;
}
int main()
{

    float n1, n2;

    cout << "insira o primeiro numero: " << endl;
    cin >> n1;

    cout << "insira o segundo numero: " << endl;
    cin >> n2;

    cout << "O resultado foi: " << calcular(n1, n2) << endl;
}
