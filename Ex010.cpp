/*
10.  Crie um algoritmo que auxilie os utilizadores de reservatório de água a controlarem o seu consumo. Dada as dimensões de um reservatório (altura, largura e comprimento, em centímetros) e o consumo médio diário dos utilizadores do reservatório (em litros/dia), informe: 

    (a) A capacidade total do reservatório, em litros; 
    (b) A autonomia do reservatório, em dias; 
    (c) A classificação do consumo, de acordo com a quantidade de dias de autonomia, podendo ser:

    - Consumo elevado, se a autonomia for menor que 2 dias;
    - Consumo moderado, se a autonomia estiver entre 2 e 7 dias; 
    - Consumo reduzido, se a autonomia for maior do que 7 dias.

Observação: Considere que cada litro equivale a 1000 cm³.
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Informe os dados do reservatório (em centímetros)..." << endl;

    float altura, largura, comprimento, consumo;

    cout << endl << "Altura: ";
    cin >> altura;

    cout << "Largura: ";
    cin >> largura;

    cout << "Comprimento: ";
    cin >> comprimento;

    cout << endl << "Agora informe o consumo médio diário do reservatório (litros por dia)..." << endl;
    cout << "Consumo: ";
    cin >> consumo;

    float volume = comprimento * largura * altura;
    float capacidade = volume / 1000;
    float autonomia = capacidade / consumo;


    if (autonomia > 0){
        if(autonomia < 2){
            cout << endl << "O reservatório tem uma autonomia de " << autonomia << " dias tendo um consumo Elevado !" << endl;
        }else if(autonomia >= 2 && autonomia <= 7){
            cout << endl << "O reservatório tem uma autonomia de " << autonomia << " dias tendo um consumo Moderado !" << endl;
        }else{
            cout << endl << "O reservatório tem uma autonomia de " << autonomia << " dias tendo um consumo Reduzido !" << endl;
        }
    }else{
        cout << endl << "Este resevatório não comporta esse consumo de água !" << endl;
    }
    
    return 0;
}