#include <iostream>
// Escribe un programa que pida la edad de una persona e indique si es mayor o menor de edad (18 años o más es mayor de edad).

using namespace std;

int main()
{

    int age;

    cout << "Enter your age to determine if you are under 18 or more" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "you are a young person" << endl;
    }
    else
    {

        cout << "you are a grown adult" << endl;
    }

    return 0;
}
