/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
Escreva um programa que leia um número inteiro não negativo e calcule e imprima seu
fatorial.b
*/
#include<iostream>
using namespace std;

int main(){
    int calculeFatorial, resultadoFatorial = 1;
    cout << "Esse programa calcula o fatorial de um numero positivo \n";
    cout << "insira um numero >= 0: ";
    cin >> calculeFatorial;

    if (calculeFatorial < 0) {
        cout << "Por favor, insira um numero nao negativo." << endl;
        return 1; 

    for(int i = 1; i <= calculeFatorial; ++i){
        resultadoFatorial *= i;
    }

    cout << "resultado: " << calculeFatorial << "!  =  " << resultadoFatorial;

    return 0;
}
