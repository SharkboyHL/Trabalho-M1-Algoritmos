/*
9. Para comemorar um feito anual, reúnem-se na casa de dona Chica os convidados A, B e C. Para a comemoração, é feito um prato X cuja porção é diferente para cada convidado. As porções são as seguintes:
    - O convidado A come 300g
    - O convidado B come 1500g
    - O convidado C come 600g
Dona Chica contratou você, aluno de Algoritmos I, para criar um programa que informa a quantidade do prato que ela necessita preparar de acordo com quem irá  comparecer na próxima reunião.
*/

#include <iostream>

using namespace std;

int main(){

    string convidadoA;
    string convidadoB;
    string convidadoC;

    int pratoA = 300;
    int pratoB = 1500;
    int pratoC = 600;

    cout << "Quais convidados irão comparecer na festa ?" << endl;
    
    cout << endl << "TABELA DE CONVIDADOS:" << endl;
    cout << "CONVIDADO A: Come 300g" << endl;
    cout << "CONVIDADO B: Come 1500g" << endl;
    cout << "CONVIDADO C: Come 600g" << endl;

    cout << endl << "Convidado A vem ? ";
    cin >> convidadoA;

    cout << "Convidado B vem ? ";
    cin >> convidadoB;

    cout << "Convidado C vem ? ";
    cin >> convidadoC;


    if(convidadoA == "sim" && convidadoB == "sim" && convidadoC == "sim"){
        cout << endl << "Todos os convidados virão ! Dona Chica deve preparar " << (pratoA + pratoB + pratoC) << "g de comida !" << endl;
    }else if(convidadoA == "sim" && convidadoB == "sim" && convidadoC == "não"){
        cout << endl << "Os convidados A e B virão a reunião ! Dona Chica deve preparar " << (pratoA + pratoB) << "g de comida !" << endl;
    }else if(convidadoA == "sim" && convidadoB == "não" && convidadoC == "sim"){
        cout << endl << "Os convidados A e C virão a reunião ! Dona Chica deve preparar " << (pratoA + pratoC) << "g de comida !" << endl;
    }else if(convidadoA == "não" && convidadoB == "sim" && convidadoC == "sim"){
        cout << endl << "Os convidados B e C virão a reunião ! Dona Chica deve preparar " << (pratoB + pratoC) << "g de comida !" << endl;
    }else if(convidadoA == "sim" && convidadoB == "não" && convidadoC == "não"){
        cout << endl << "Apenas o convidado A virá a reunião ! Dona Chica deve preparar " << (pratoA) << "g de comida !" << endl;
    }else if(convidadoA == "não" && convidadoB == "sim" && convidadoC == "não"){
        cout << endl << "Apenas o convidado B virá a reunião ! Dona Chica deve preparar " << (pratoB) << "g de comida !" << endl;
    }else if(convidadoA == "não" && convidadoB == "não" && convidadoC == "sim"){
        cout << endl << "Apenas o convidado C virá a reunião ! Dona Chica deve preparar " << (pratoC) << "g de comida !" << endl;
    }else{
        cout << endl << "Ninguém irá comparecer a reunião ! :^( " << endl;
    }
    
    return 0;
}