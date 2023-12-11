#include <iostream>

using namespace std;

int main(){
    double numero1=0 , numero2=0;
    cout<<"Cual es el numemero 1:";
    cin>>numero1;
    cout<<"Cual es el numemero 2:";
    cin>>numero2;
    if(numero1>numero2){
        cout<<"El numemero  "<<numero1<<" Es el mayor";
    }else if(numero1<numero2){
    cout<<"El numero "<<numero2<<"Es el mayor";
    }else{
        cout<<"Los numeros son iguales";
    }
}