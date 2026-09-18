#include <iostream>

using namespace std;

const int minimo = 0, maximo = 10;

int main(int argc, char **argv)
{
    int n;

    cout << "Introduce tu numero que este entre " << minimo << " y " << maximo << "." << endl;
    cin >> n;

    if (n < minimo || n > maximo)
    {
        cout << "Tu numero se salio del rango permitido";
    }
    else
    {
            switch(n){
                case 0:
                    cout << "No existe definicion de primo en este caso" << endl;
                    break;
                case 2:
                case 3:
                case 5:
                case 7:
                    cout << "Tu numero " << n << " es primo" << endl;
                    break;
                default:
                    cout << "Tu numero " << n << " no es primo" << endl;
                    break;
            };
    }

    return 0;
}