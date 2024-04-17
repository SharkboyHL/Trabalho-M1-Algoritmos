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

    cout << endl << "Insira qual produto deseja precoComprar e insira seu código..." << endl;

    cout << endl << "TABELA DE PREÇOS:" << endl;
    cout << "1 - Playstation 5: R$3999,90" << endl;
    cout << "2 - Notebook Gamer Acer: R$4899,99" << endl;
    cout << "3 - Processador AMD Ryzen 7: R$1658,90" << endl;
    cout << "4 - Monitor Gamer LG: R$999,99" << endl;
    cout << "5 - Cadeira Gamer Kabum: R$739,90" << endl;
    cout << "6 - Insira um produto" << endl;

    float precoPlaystation = 3999.90;
    float precoNotebook = 4899.99;
    float precoProcessador = 1658.90;
    float precoMonitor = 999.99;
    float precoCadeira = 739.90;

    int codigoProduto;
    cout << endl << "Insira o código do produto que deseja comprar: ";
    cin >> codigoProduto;

    float precoCompra;

    if(codigoProduto == 1){
        precoCompra = precoPlaystation;
    }else if(codigoProduto == 2){
        precoCompra = precoNotebook;
    }else if(codigoProduto == 3){
        precoCompra = precoProcessador;
    }else if(codigoProduto == 4){
        precoCompra = precoMonitor;
    }else if(codigoProduto == 5){
        precoCompra = precoCadeira;
    }else if(codigoProduto == 6){
        cout << "Insira o valor do produto: R$";
        cin >> precoCompra;
    }else{
        cout << endl << "PRODUTO INVÁLIDO !" << endl;
        return 0;
    }

    int codigo;
    cout << endl << "Insira a forma de pagamento..." << endl;
    cout << "CÓDIGO 1: À vista em dinheiro ou cheque, recebe 10% de desconto" << endl;
    cout << "CÓDIGO 2: À vista no cartão de crédito, recebe 15% de desconto" << endl;
    cout << "CÓDIGO 3: Em duas vezes, preço normal de etiqueta sem juros" << endl;
    cout << "CÓDIGO 4: Em três ou mais vezes, preço normal de etiqueta mais juros de 10%" << endl;
    cout << endl << "INSIRA O CÓDIGO: ";
    cin >> codigo;

    if(codigo == 1){
        precoCompra = precoCompra - (precoCompra * 0.10);
        cout << endl << "Valor total da compra: R$" << precoCompra << endl;
    }else if(codigo == 2){
        precoCompra = precoCompra - (precoCompra * 0.15);
        cout << endl <<"Valor total da compra: R$" << precoCompra << endl;
    }else if(codigo == 3){
        precoCompra = precoCompra / 2;
        cout << endl << "Valor total da compra: R$" << (precoCompra * 2) << " feita em 2X de R$" << precoCompra << endl;
    }else if(codigo == 4){
        int parcelas;
        cout << "Em quantas vezes deseja parcelar ?" << endl;
        cout << "Parcelas: ";
        cin >> parcelas;

        if (parcelas >= 3){
            float juros = precoCompra * 0.10;
            precoCompra = (precoCompra / parcelas) + juros;
            cout << endl << "Valor total da compra: R$" << (precoCompra * parcelas)  << " feita em " << parcelas << "X de R$" << precoCompra << endl;    
        }else{
            cout << endl << "FORMA DE PAGAMENTO INVÁLIDA !" << endl;
            return 0;
        }
         
    }else{
        cout << "FORMA DE PAGAMENTO INVÁLIDA !" << endl;
    }
    return 0;
}