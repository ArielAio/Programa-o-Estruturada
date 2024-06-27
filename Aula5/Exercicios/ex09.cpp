#include <iostream>
#include <iomanip>
#include <string>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    
    int n1;

    cout << "Insira um número: ";
    cin >> n1;

    if(n1 >= 0 && n1 % 2 == 0){
        cout << "Par" << endl;
    } else if (n1 >= 0 && n1 % 2 > 0){
        cout << "Impar" << endl;
    }

}
