#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    int edades[10] = {18, 19, 20, 21, 22, 23, 24, 25, 26, 27};
    
    for (int i = 0; i < 10; i++)
    {
        int j = rand() % 10;
        int temp = edades[i];
        edades[i] = edades[j];
        edades[j] = temp;
    }
    
    Persona* grupo[10];
    for (int i = 0; i < 10; i++)
    {
        grupo[i] = new Persona(edades[i]);
    }
    
    cout << "=== LISTA DE PERSONAS GENERADAS ===" << endl;
    for (int i = 0; i < 10; i++)
    {
        grupo[i]->mostrar();
    }
    
    for (int i = 0; i < 10; i++)
    {
        delete grupo[i];
    }
    
    return 0;
}
