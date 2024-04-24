/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*
    7 - Escreva um programa que verifique a validade de uma senha fornecida pelo usuário. A senha
    válida é o número 1234. Devem ser impressas as seguintes mensagens:
    ACESSO PERMITIDO caso a senha seja válida.
    ACESSO NEGADO caso a senha seja inválida.  
*/

#include<iostream>
using namespace std;

int main(){
    int senhaInserida, senhaValida;
    senhaValida = 1234;
    cout << "Insira sua senha: \n";
    cin >> senhaInserida;

    if(senhaInserida == senhaValida)
        cout << "ACESSO PERMITIDO";
    else
        cout << "ACESSO NEGADO";

    return 0;
}