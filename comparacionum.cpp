#include <iostream>
/*Comparación de Números
Pide dos números e indica cuál es mayor, cuál es menor o si son iguales.*/
using namespace std;

int main(){
//definimos los dos numeros que el usuario debe ingresar para poder determinar cual es mayor, menor, o igual.
int number1=0, number2=0;
cout<<"Enter two numbers to determine wich one is higher, less or equal one to another"<<endl;
cin >> number1;
//donde guardaremos nuestro primer numero.
cout<<"Enter the second number"<<endl;
cin >>number2;
//donde guardaremos nuestro segundo numero.
if (number1 > number2) // if para poder hacer cumplir los procesos con numeros.
{
    cout<<number1<<" is higher"<<endl;
}else if (number1 < number2)
{
    cout<<number2<<" is higher"<<endl;
}else{
   number1 == number2;
   cout<<"Both numbers equals the same"<<endl;
}




return 0;



}
