#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
int salario = 1000;
double comissao = 0.05;
int valorVenda, salarioFinal;

cout << "Digite o valor total de vendas no mes: ";
cin >> valorVenda;
salarioFinal = salario + (valorVenda * comissao);

cout << "Seu salario final e: " << salarioFinal << " Reais \n";

}
