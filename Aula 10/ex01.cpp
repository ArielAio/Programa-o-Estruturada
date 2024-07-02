// O usuario deve digitar o numero de medalhas de ouro prata e bronze
// no final deve ser somado o numero de medalhas de ouro prata e bronze para apresentar o total de medalhas que o brasil ganhou
// a formatação da tela de execução
// no envio das respostas, deve ser feito um documento de texto com o codigo da resposta e uma tela da execução do programa

#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int ouro, prata, bronze, total;

    cout << "Insira o número de medalhas de Ouro ganhadas: ";
    cin >> ouro;

    cout << "Insira o número de medalhas de Prata ganhadas: ";
    cin >> prata;

    cout << "Insira o número de medalhas de Bronze ganhadas: ";
    cin >> bronze;

    total = ouro + prata + bronze;

    fstream arquivo;

    arquivo.open("medalhas.txt", ios::out | ios::app);

    arquivo << "O total de medalhas que o Brasil ganhou foram: " << total << " medalhas";
    
    arquivo.close();
}