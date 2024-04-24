/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    5 - Crie um programa que detecta se um caractere fornecido de entrada é uma vogal usando o
    comando switch case.
*/

#include<iostream>
using namespace std;

int main(){
    char caractere;

    cout << "Esse programa verifica se uma letra e uma vogal. \n";
    cout << "Insira uma letra: "; 
    cin >> caractere;

    caractere = tolower(caractere);

    switch(caractere){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "O caractere: '" << caractere << "' e uma vogal";
            break;
        default:
            cout << "O caractere: '" << caractere << "' nao e uma vogal";
    }
    return 0;
}