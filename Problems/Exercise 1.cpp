#include <iostream>

using namespace std; 

int main(){
    double numero;

    cout<<"Ingrese un numero: "<<endl;
    cin>> numero;

    if(numero<0){
        cout<<"El numero es negativo"<<endl;
    }else if(numero == 0){
        cout<<"El numero cero"<<endl;
    }else{
        cout<<"El numero es positivo"<<endl;
    }

    return 0;
}