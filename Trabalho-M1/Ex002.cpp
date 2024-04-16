/* 
2. Elabore um algoritmo que calcula o que deve ser pago por um produto, considerando o preço da etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida pelo usuário e efetuar o cálculo correspondente.


Código   |Condição de pagamento
---------|-------------------------------------------------------------------
1        |À vista em dinheiro ou cheque, recebe 10% de desconto
---------|-------------------------------------------------------------------
2        |À vista no cartão de crédito, recebe 15% de desconto
---------|-------------------------------------------------------------------
3        |Em duas vezes, preço normal de etiqueta sem juros
---------|-------------------------------------------------------------------
4        |Em três ou mais vezes, preço normal de etiqueta mais juros de 10%
*/

#include <iostream>

using namespace std;

int main(){

    cout << "Bem vindo a Kabum !" << endl;

    cout << endl << "Insira qual produto deseja comprar e insira seu código..." << endl;

    cout << endl << "TABELA DE PREÇOS:" << endl;
    cout << "1 - Playstation 5: R$3999,90" << endl;
    cout << "2 - Notebook Gamer Acer: R$4899,99" << endl;
    cout << "3 - Processador AMD Ryzen 7: R$1658,90" << endl;
    cout << "4 - Monitor Gamer LG: R$999,99" << endl;
    cout << "5 - Cadeira Gamer Kabum: R$739,90" << endl;

    float precoPlaystation = 3999.90;
    float precoNotebook = 4899.99;
    float precoProcessador = 1658.90;
    float precoMonitor = 999.99;
    float precoCadeira = 739.90;

    int produto;
    float compra;

    if (produto == 1){
        compra = precoPlaystation;
    }else if(produto == 2){
        compra = precoNotebook;
    }else if(produto == 3){
        compra = precoProcessador;
    }else if(produto == 4){
        compra = precoMonitor;
    }else if(produto == 5){
        compra = precoCadeira;
    }else{
        cout << "PRODUTO INVÁLIDO !";
    }

    int codigo;
    cout << endl << "Insira a forma de pagamento..." << endl;
    cout << "CÓDIGO 1: À vista em dinheiro ou cheque, recebe 10% de desconto" << endl;
    cout << "CÓDIGO 2: À vista no cartão de crédito, recebe 15% de desconto" << endl;
    cout << "CÓDIGO 3: Em duas vezes, preço normal de etiqueta sem juros" << endl;
    cout << "CÓDIGO 4: Em três ou mais vezes, preço normal de etiqueta mais juros de 10%" << endl;
    cout << endl << "INSIRA O CÓDIGO: ";
    cin >> codigo;

    if(produto == 1 || produto == 2 || produto == 3 || produto == 4 || produto == 5 && codigo == 1){
        compra = compra - (compra * 0.10);
        cout << "Valor total da compra: R$" << compra << endl;
    }else if(codigo == 2){
        compra = compra - (compra * 0.15);
        cout << "Valor total da compra: R$" << compra << endl;
    }else if(codigo == 3){
        compra = compra / 2;
        cout << "Valor em 2X de R$" << compra;
    }else if(codigo == 4){
        int parcelas;
        cout << "Em quantas vezes deseja parcelar ?" << endl;
        cout << "Parcelas: ";
        cin >> parcelas;

        float juros = compra * 0.10;
        compra = (compra / parcelas) + juros;
        cout << "Valor em " << parcelas << "X de R$" << compra; 
    }else{
        cout << "FORMA DE PAGAMENTO INVÁLIDA !" << endl;
    }

    return 0;
}