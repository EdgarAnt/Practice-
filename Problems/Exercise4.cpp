#include <iostream>

using namespace std;

int main() {
    // Ejercicio 4: Determinar si un año es bisiesto
    int anio;

    cout << "Ingrese un año: ";
    cin >> anio;

    if((anio % 4 == 0) && (anio %100 != 0) || (anio % 400 == 0) ){
        cout<<"Es un año bisiesto";
    }else{
        cout<<"No es un año bisiesto";
    }
    return 0;
}

//Analisis de ejercicio


// El anio %4==0 aplica el primer caso que es divisible por 4 
// el anio % 100 != 0 Aqui se verifica la condicion adicional por los años que son divisibles a 100
// || Esta es la condicion logica "o" Aqui indica que almenos que una de estas partes sean verdaderas
// anio % 400 ==0 esto es indica si es divisible por 400

// De forma resumida esto significa:
// Si el año es divisible por 4 y (no es divisible por 100 o es divisible por 400)

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