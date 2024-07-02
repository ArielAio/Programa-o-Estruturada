#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream arquivo("oi");

    if(arquivo.is_open()){
        arquivo << "nomadsdsae" << endl;

        arquivo.close();
    }

    return 0;
}