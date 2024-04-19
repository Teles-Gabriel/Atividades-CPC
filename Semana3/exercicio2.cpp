/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
2 - Crie uma calculadora álcool x gasolina. O etanol vale a pena quando custar até 70% do valor
da gasolina. Como é feito o cálculo? Dividimos o valor do litro do álcool pelo da gasolina. Quando
o resultado é menor que 0,7, exiba uma recomendação dizendo para abastecer com álcool. Se
for maior, exiba a recomendação para escolher a gasolina.
*/

#include<iostream>
using namespace std;

int main(){
    float alcool, gasolina, relacao;

    cout << "Esse programa calcula a melhor opcao entre alcool e gasolina com base no preco.\n";
    cout << "Insira o valor da gasolina: ";
    cin >> gasolina;

    cout << "\nInsira o valor do alcool: ";
    cin >> alcool;

    relacao =  alcool / gasolina;
    
    if (relacao < 0.7){
        cout << "Recomendo que escolha o alcool";
    } else {
        cout << "recomendo que compre a gasolina";
    }
}