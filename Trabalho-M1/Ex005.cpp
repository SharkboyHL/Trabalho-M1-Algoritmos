/* 
5. Crie um algoritmo para encontrar a mediana de três valores.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira 3 números (inteiros)..." << endl;
    cout << "Os números inseridos serão organizados em rol (ordem crescente)" << endl;

    int num1, num2, num3;
    
    cout << "Número 1: ";
    cin >> num1;

    cout << "Número 2: ";
    cin >> num2;

    cout << "Número 3: ";
    cin >> num3;

    if(num1 < num2 && num1 < num3){
        if(num2 < num3){
            cout << "A mediana dos valores inseridos é: " << num2 << endl;
        }else if(num3 < num2){
            cout << "A mediana dos valores inseridos é: " << num3 << endl;
        }else{
            cout << "A mediana dos valores inseridos é: " << num2 << endl;
        }
    }else if(num2 < num1 && num2 < num3){
        if(num1 < num3){
            cout << "A mediana dos valores inseridos é: " << num1 << endl;
        }else if(num3 < num1){
            cout << "A mediana dos valores inseridos é: " << num3 << endl;
        }else{
            cout << "A mediana dos valores inseridos é: " << num1 << endl;
        }
    }else if(num3 < num1 && num3 < num2){
        if(num1 < num2){
            cout << "A mediana dos valores inseridos é: " << num1 << endl;
        }else if(num2 < num1){
            cout << "A mediana dos valores inseridos é: " << num2 << endl;
        }else{
            cout << "A mediana dos valores inseridos é: " << num2 << endl;
        }
    }else{
        cout << "A mediana dos valores inseridos é: " << num1 << endl;
    }

    return 0;
}