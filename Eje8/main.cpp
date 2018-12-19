#include <iostream>

using namespace std;

int main()
{
    string nombres[5];
    string valor = " ";
    for (int i = 0; i < 5; i++){
        cout << "Ingrese un nombre por favor: " << endl;
        getline(cin, nombres[i]);
    }
    for (int i = 0; i < 5; i++){
        cout << nombres[i] << endl;
    }
    return 0;
}
