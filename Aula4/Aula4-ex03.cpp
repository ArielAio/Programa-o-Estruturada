#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>

using namespace std;

int main()
{
    int i = 1, num;

    cout << "informe um numero: ";
    cin >> num;
    cout << "O s 10 antecessores de " << num << " são: " << endl;

    do
    {
        cout << num - i << endl;
        i = i + 1;
    } while (i <= 10);
}