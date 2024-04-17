/*
8.  Crie um algoritmo que determina o tipo da raiz de uma equação do segundo grau ax² + bx + c = 0 (i.e., duas raízes reais distintas, uma raiz real ou uma raiz complexa).
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Insira os valores de a, b e c (inteiros)..." << endl;

    int a, b, c;

    cout << "Insira o valor de A: ";
    cin >> a;

    cout << "Insira o valor de B: ";
    cin >> b;

    cout << "Insira o valor de C: ";
    cin >> c;

    float delta = (b * b) - 4 * a * c;

    float bhaskara = -b + (delta / delta) / 2 * a; 

    cout << bhaskara << endl;

    return 0;
}