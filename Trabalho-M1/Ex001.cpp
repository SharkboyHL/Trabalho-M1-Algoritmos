/*
1. Quando observamos um objeto que se movimenta, notamos que a sua posição se modifica em função do tempo. Neste contexto, a equação horária da posição permite calcular a posição de um objeto em um dado instante de tempo t. Tal equação é descrita da seguinte forma:

onde S(t), S0, v0 e a referem-se, respectivamente, a posição do objeto no tempo t (dado em segundos), posição inicial do objeto (dada em metros),  velocidade inicial do objeto (dada em metros por segundo) e aceleração do objeto (dada em metros por segundo ao quadrado). Crie um algoritmo para calcular a posição de um objeto em função do tempo conforme a equação horária da posição. 
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo a Calculadora de Função Horária da Posição" << endl;

    cout << endl << "Para começarmos insira ..." << endl;

    float posicaoInicial;
    cout << endl << "Posição Inicial: ";
    cin >> posicaoInicial;

    float velocidadeInicial;
    cout << "Velocidade Inicial: ";
    cin >> velocidadeInicial;

    float aceleracao;
    cout << "Aceleração: ";
    cin >> aceleracao;
    
    float tempo;
    cout << "Tempo: ";
    cin >> tempo;

    float posicaoFinal = posicaoInicial + (velocidadeInicial * tempo) + ((aceleracao * (tempo * tempo)) / 2);
    
    cout << endl << "A posição final do objeto após " << tempo << " segundos é de " << posicaoFinal << " metros da posição inicial." << endl;

    return 0;
}