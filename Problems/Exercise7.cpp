#include <iostream>
using namespace std;

int main() {
    // Ejercicio 7: Calcular la suma y el promedio de tres números
    int num1=0, num2=0, num3=0, promedio=0,suma=0;
    
    cout<<"Cual es el primer numero: "<<endl;
    cin>>num1;
    cout<<"Cual es el segundo numero: "<<endl;
    cin>>num2;
    cout<<"Cual es el tercer numero: "<<endl;
    cin>>num3;

    suma=num1+num2+num3;
    promedio= suma/3;
    cout<<"La suma es "<<suma<<endl;
    cout<<"El promedio es "<<promedio<<endl;

    //imprimimr si la suma es un numeor par
    if(suma % 2 == 0){
        cout<<"El numero es par";
    }
    else{
        cout<<"El numero es impar";
    }

    return 0;
}

//         ░░                    ░░        ██████████  ░░                    ░░            
//                                     ████          ████                                  
//                                   ████              ████                                
// ░░      ░░                    ░░██                      ██░░              ░░            
//         ░░            ░░      ░░██  ██  ██      ██  ██  ██░░      ░░      ░░            
//                               ██    ██              ██    ██                            
//                               ██    ██              ██    ██                            
// ░░░░░░░░░░░░░░  ░░░░░░░░░░░░██      ██    ██████    ██      ██░░░░░░░░░░░░░░░░░░  ░░░░░░
//         ░░            ░░    ██    ██        ██        ██    ██    ░░      ░░             .-.
//                             ██  ████    ██  ██  ██    ████  ██                          /'v'\
//                               ██  ██      ██  ██      ██  ██                           (/   \)
//                                     ██              ██                                 ='="="===<
//                                       ██████████████                              Paullie|_|
//                                     ██              ██                                  
//                                     ██              ██                                  
//                                     ██    ██  ██    ██                                  
//                                   ████    ██  ██    ████         ~°I'm getting there, I'm being consistent°~                       
//       my 3 cats                   ████    ██  ██    ████                    and im enjoyng this          
//     \    /\                     ██  ██    ██  ██    ██  ██                              
//      )  ( ')          ░░        ██  ██    ██  ██    ██  ██        ░░                    
//      (  /  )                      ████    ██████    ████                                
//       \(__)|                    ██    ████      ████    ██                              
//   ░░░░░░  ░░░░  ░░░░░░  ░░░░░░  ██████    ░░  ░░    ██████░░░░░░░░  ░░░░░░  ░░░░  ░░░░░░
//         ░░            ░░      ░░                                  ░░      ░░            
                                                                                        
//                                                                                  ░░                                  ░░        ░░                        ░░              