#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int x, y , min, max;

    cout << "Introduce el numero x: ";
    cin >> x;
    cout << "Introduce el numero y: ";
    cin >> y;
    if (x < y)
    {
        min = x;
    }
    else{
        min = y;
    }
    max =  (x > y ? x : y);
    cout << "El numero menor es: " << min << endl;
    cout << "El numero mayor es: " << max << endl;
    return 0;
}