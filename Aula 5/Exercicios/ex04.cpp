#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{

    string name;
    double price, desconto;

    cout << "Qual o nome do seu produto: ";
    cin >> name;

    cout << "Qual o preço do seu produto: ";
    cin >> price;

    desconto = price * 0.87;

    cout << "O seu produto é: " << name << endl;
    cout << "O preço original do seu produto é: " << price << endl;
    cout << "O desconto é de 13%" << endl;
    cout << "O valor final do seu produto (com desconto) é: " << desconto << endl;
}