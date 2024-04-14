/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Escreva um código que lê dois números inteiros e imprime se o primeiro é múltiplo do segundo.
*/
#include <iostream>
using namespace std;

int main(){
    int numeroUm, numeroDois, resultado;

    cout << "Esse programa verifica se o primeiro numero e multiplo do segundo \n";
    cout << "Insira o primeiro numero: ";
    cin >> numeroUm;

    cout << "Insira o segundo numero: ";
    cin >> numeroDois;

    if(numeroUm % numeroDois == 0)
        cout << "O primeiro numero inserido: " << numeroUm << " e multiplo do segundo numero inserido: " << numeroDois;
    else
        cout << "O primeiro numero inserido: " << numeroUm << " nao e multiplo do segundo numero inserido: " << numeroDois;

    return 0;
}