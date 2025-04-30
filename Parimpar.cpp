#include <iostream>
// Solicita un número al usuario y determina si es par o impar.
using namespace std;

int main()
{

    int numero;

    cout << "Enter a number to determine if it is an even number or an odd number" << endl;

    cin >> numero;

    if (numero % 2 == 0)
    {
        cout << " thats an even number" << endl;
    }
    else
    {
        cout << "thats an odd number" << endl;
    }

    return 0;
}
