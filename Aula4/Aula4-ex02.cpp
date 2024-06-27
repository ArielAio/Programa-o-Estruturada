#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <locale>

using namespace std;

int main()
{
    int i = 1;

    while (i <= 100)
    {
        if (i % 10 == 0)
        {
            cout << "i =" << i << endl;
        }
        i= i + 1;
        
    }
    cout << "ACABOUU!!" << endl;
    return 0;
    
}