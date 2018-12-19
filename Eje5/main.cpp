#include <iostream>

using namespace std;

int main()
{
    int edades[] = {19, 15, 16, 17};
    string nombres[] = {"Luis", "Maria", "Jose", "Ana"};

    for (int i = 0; i < 4; i++){
            cout << nombres[i] << " tiene una calificacion de " << edades[i] <<endl;
    }

    return 0;
}
