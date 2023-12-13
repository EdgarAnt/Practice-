#include <iostream>
using namespace std;

int main() {
    // Ejercicio 10: Determinar el número del medio
    int num1=0,num2=0,num3=0;
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    cout<<"Ingrese el tercer numero: ";
    cin>>num3;

    if(num1<num2&&num3<num1||num2<num3){
        cout<<"El numero de enmedio es"<<num1<<endl;
    }else if(num2>num1&&num3>num2||num2<num3){
        cout<<"El numero de enmedio es"<<num2<<endl;
    }

    //In process, i need take a good moment for rest :D
                                                                                   
                                                                                        
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
//                                   ████    ██  ██    ████                                
//                                   ████    ██  ██    ████                                
//                                 ██  ██    ██  ██    ██  ██                              
//                       ░░        ██  ██    ██  ██    ██  ██        ░░                    
//                                   ████    ██████    ████                                
//                                 ██    ████      ████    ██                              
//   ░░░░░░  ░░░░  ░░░░░░  ░░░░░░  ██████    ░░  ░░    ██████░░░░░░░░  ░░░░░░  ░░░░  ░░░░░░
//         ░░            ░░      ░░                                  ░░      ░░            
                                                                                        
//                                                                                  ░░                                  ░░        ░░                        ░░              


    return 0;
}