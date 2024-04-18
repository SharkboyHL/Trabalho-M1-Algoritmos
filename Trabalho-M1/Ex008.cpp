/*
8.  Crie um algoritmo que determina o tipo da raiz de uma equação do segundo grau ax² + bx + c = 0 (i.e., duas raízes reais distintas, uma raiz real ou uma raiz complexa).
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira os valores de a, b e c (inteiros)..." << endl;

    int a, b, c;

    cout << endl << "Insira o valor de A: ";
    cin >> a;

    cout << "Insira o valor de B: ";
    cin >> b;

    cout << "Insira o valor de C: ";
    cin >> c;

    if(a != 0 && b != 0 && c != 0){

        float delta = (b * b) - 4 * a * c;

        if(delta > 0){
            cout << endl << "A equação de segundo grau possuí duas raízes reais e distintas !" << endl;
        }else if(delta == 0){
            cout << endl << "A equação de segundo grau possuí apenas uma raíz real !" << endl;
        }else{
            cout << endl << "A equação de segundo grau possuí raízes complexas !" << endl;
        }
    }else{
        cout << endl << "VALORES INSERIDOS INVÁLIDOS !" << endl;
    }
    return 0;
}