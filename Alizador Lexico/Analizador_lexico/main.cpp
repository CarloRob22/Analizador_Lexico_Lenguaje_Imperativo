#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream archivo("Prueba.txt");
    string nombre;
    while(!archivo.eof()){
        archivo >> nombre;
        cout << nombre << endl;
    }
}
