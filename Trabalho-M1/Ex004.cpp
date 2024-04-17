/*
4.  Crie um algoritmo que lê três números e independentemente da ordem em que são fornecidos, os números são impressos em ordem crescente. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira 3 números (inteiros)..." << endl;

    int num1, num2, num3;
    
    cout << "Número 1: ";
    cin >> num1;

    cout << "Número 2: ";
    cin >> num2;

    cout << "Número 3: ";
    cin >> num3;

    if(num1 < num2 && num1 < num3){
        if(num2 < num3){
            cout << endl << num1 << " - " << num2 << " - " << num3 << endl;
        }else if(num3 < num2){
            cout << endl << num1 << " - " << num3 << " - " << num2 << endl;
        }else{
            cout << endl << num1 << " - " << num2 << " - " << num3 << endl;
        }
    }else if(num2 < num1 && num2 < num3){
        if(num1 < num3){
            cout << endl << num2 << " - " << num1 << " - " << num3 << endl;
        }else if(num3 < num1){
            cout << endl << num2 << " - " << num3 << " - " << num1 << endl;
        }else{
            cout << endl << num2 << " - " << num1 << " - " << num3 << endl;
        }
    }else if(num3 < num1 && num3 < num2){
        if(num1 < num2){
            cout << endl << num3 << " - " << num1 << " - " << num2 << endl;
        }else if(num2 < num1){
            cout << endl << num3 << " - " << num2 << " - " << num1 << endl;
        }else{
            cout << endl << num3 << " - " << num1 << " - " << num2 << endl;
        }
    }else{
        cout << num1 << " - " << num2 << " - "<< num3 << endl;
    }

    return 0;
}