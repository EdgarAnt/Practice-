#include <iostream>
using namespace std;

int main() {
    // Ejercicio 5: Encontrar el mayor de tres números
    double numero1=0, numero2=0, numero3=0;
    cout<<"Ingresa el primer numero: ";
    cin>>numero1;
    cout<<"Ingresa el segundo numero: ";
    cin>>numero2;
    cout<<"Ingresa el tercer numero: ";
    cin>>numero3;
    

    if(numero1 > numero2 && numero3 < numero1){
        cout<<"El numero "<<numero1<<" Es mayor"<<endl;
    }else if(numero2 > numero1 && numero3 < numero2){
        cout<<"El numero "<< numero2 << " Es mayor"<<endl;
    }else if(numero3 > numero2 && numero1 < numero3){
        cout<<"El numero "<< numero3 << " Es mayor"<<endl;
    }else{
        cout<<"Los numeros son iguales"<<endl;
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