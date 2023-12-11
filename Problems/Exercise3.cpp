#include <iostream>

using namespace std;


int main(){
    //determina si un numero es par o impar
    int numero;

    cout<<"Ingrese un numero entero: ";
    cin>>numero;

//Basicamente el operador modulo funciona para mostrar el residuo de una division, cualquier cosa al dividirse por 2, si es un numero par el residuo es 0.
    if(numero % 2 == 0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }

    return 0;
}

