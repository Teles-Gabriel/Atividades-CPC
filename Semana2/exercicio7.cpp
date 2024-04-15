/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Implemente um código que solicite do usuário um número inteiro e mostre na tela se o número é primo ou não
*/

#include <iostream>
using namespace std;

int main(){
    int iNumero, i;

    cout << "Esse programa verifica se um numero e inteiro.";
    cout << "\n Insira um numero inteiro: ";
    cin >> iNumero;

    if(iNumero <= 1){
        cout << "O numero: " << iNumero <<" nao e primo";
        return 0;
    }
    for(i = 2; i < iNumero; i++){
        if(iNumero % i == 0){
            cout << "O numero: " << iNumero <<" nao e primo";
            return 0;
        }
    }
    cout << "O numero: " << iNumero <<" e primo";
        
    return 0;
}