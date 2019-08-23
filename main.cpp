#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "Ingrese un numero: " ;
    cin >> a;
    cout << "Ingrese un numero: " ;
    cin >> b;
    cout << "Ingrese un numero: " ;
    cin >> c;

    if(a<b and a<c)
        cout << "El primer valor ingresado es el menor ";
    if(b<a and b<c)
        cout << "El segundo valor ingresado es el menor ";
    if(a==b or b==c or c==a)
        cout << "Hay dos numeros iguales o mas";
    if(c<a and c<b)
        cout << "El tercer valor ingresado es el menor ";

    return 0;
}
