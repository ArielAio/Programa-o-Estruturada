#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{

    double n1;

    cout << "Insira um número: ";
    cin >> n1;

    if(n1 >= 0){
        cout << "Número positivo!" << endl;
    }else{
        cout << "Número negativo!" << endl;
    }

}