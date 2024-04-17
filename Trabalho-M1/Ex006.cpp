/*
6. Crie um algoritmo que determina se um triângulo é equilátero, isósceles ou escaleno.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira as medidas dos lados do triângulo..." << endl;
    cout << "- Para ser equilátero precisa que todos os lados tenham a mesma medida." << endl;
    cout << "- Para ser isósceles precisa que 2 lados tenham a mesma medida." << endl;
    cout << "- Para ser escaleno precisa que todos os lados tenham medidas diferentes." << endl;


    float ladoA, ladoB, ladoC;

    cout << endl << "Lado A: ";
    cin >> ladoA;

    cout << "Lado B: ";
    cin >> ladoB;

    cout << "Lado C: ";
    cin >> ladoC;

    if(ladoA > 0 && ladoB > 0 && ladoC > 0){
        if(ladoA == ladoB && ladoB == ladoC){
            cout << endl << "É um Triângulo Equilátero." << endl;
        }else if(ladoA == ladoB && ladoA != ladoC){
            cout << endl << "É um Triângulo Isósceles." << endl;
        }else if(ladoA == ladoC && ladoA != ladoB){
            cout << endl << "É um Triângulo Isósceles." << endl;
        }else if(ladoB == ladoC && ladoB != ladoA){
            cout << endl << "É um Triângulo Isósceles." << endl;
        }else{
            cout << endl << "É um Triângulo Escaleno." << endl;
        }
    }else{
        cout << endl << "VALORES INSERIDOS INVÁLIDOS!" << endl;
    }
    

    return 0;
}