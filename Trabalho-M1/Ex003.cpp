/*
4. A professora de um jardim de infância percebeu que a gangorra do parquinho não é simétrica.   Quando duas crianças de mesmo peso brincam de balançar, a gangorra se desequilibra sempre para o mesmo lado.  Pedindo  ajuda ao professor de Matemática, ela entendeu que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando P1 ∗ C1 = P2 ∗ C2,  onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os comprimentos da gangorra do lado esquerdo e direito, respectivamente. Crie um algoritmo que determina quando uma gangorra está equilibrada, pendendo para a esquerda ou direita.
*/

#include <iostream>

using namespace std;

int main(){

    float pesoEsq, pesoDir;
    cout << "Insira os pesos das crianças..." << endl;

    cout << endl << "Peso da criança do lado esquerdo: ";
    cin >> pesoEsq;

    cout << "Peso da criança do lado direito: ";
    cin >> pesoDir;


    int ladoEsq, ladoDir;
    cout << endl << "Insira o comprimento dos lados (em metros)..." << endl;

    cout << endl << "Comprimento do lado esquerdo: ";
    cin >> ladoEsq;

    cout << "Comprimento do lado direito: ";
    cin >> ladoDir;

    if(pesoEsq * ladoEsq == pesoDir * ladoDir){
        cout << endl << "A gangorra está equilibrada !" << endl;
    }else if(pesoEsq * ladoEsq > pesoDir * ladoDir){
        cout << endl << "A gangorra está pendendo para a esquerda." << endl;
    }else{
        cout << endl << "A gangorra está pendendo para a direita." << endl;
    }

    return 0;
}
