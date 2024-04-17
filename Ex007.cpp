/*
7. Dado três ângulos, crie um algoritmo que determina se um triângulo  é acutângulo, retângulo ou obtusângulo.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira os angulos internos do triângulo..." << endl;
    cout << "- Para ser acutângulo precisa que todos os ângulos sejam agudos ou seja menores que 90º." << endl;
    cout << "- Para ser retângulo precisa que 1 ângulo seja reto ou seja que tenha 90º e o restante menores que 90º." << endl;
    cout << "- Para ser obtusângulo precisa que 1 ângulo seja obtuso ou seja maior que 90º e o restante menores que 90º." << endl;


    float anguloA, anguloB, anguloC;

    cout << endl << "Ângulo A: ";
    cin >> anguloA;

    cout << "Ângulo B: ";
    cin >> anguloB;

    cout << "Ângulo C: ";
    cin >> anguloC;

    if(anguloA > 0 && anguloB > 0 && anguloC > 0 && (anguloA + anguloB + anguloC == 180)){
        if(anguloA < 90 && anguloB < 90 && anguloC < 90){
            cout << endl << "É um Triângulo Acutângulo." << endl;
        }else if(anguloA == 90 && anguloB < 90 && anguloC < 90){
            cout << endl << "É um Triângulo Retângulo." << endl;
        }else if(anguloB == 90 && anguloA < 90 && anguloC < 90){
            cout << endl << "É um Triângulo Retângulo." << endl;
        }else if(anguloC == 90 && anguloA < 90 && anguloB < 90){
            cout << endl << "É um Triângulo Retângulo." << endl;
        }else if(anguloA > 90 && anguloB < 90 && anguloC < 90){
            cout << endl << "É um Triângulo Obtusângulo." << endl;
        }else if(anguloB > 90 && anguloA < 90 && anguloC < 90){
            cout << endl << "É um Triângulo Obtusângulo." << endl;
        }else if(anguloC > 90 && anguloA < 90 && anguloB < 90){
            cout << endl << "É um Triângulo Obtusângulo." << endl;
        }
    }else{
        cout << endl << "VALORES INSERIDOS INVÁLIDOS!" << endl;
    }
    return 0;
}