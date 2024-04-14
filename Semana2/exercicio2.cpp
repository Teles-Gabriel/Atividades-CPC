/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Escreva um código que peça ao usuário fornecer dois numeros e então imprima a soma,
    o produto a diferença e o quociente dos dois numeros
*/

#include <iostream>
using namespace std;

int main(){
    int numeroUm, numeroDois, soma, produto, diferenca, quociente;

    cout << "Esse programa calcula a soma, o produto, diferença e o quociente de dois numeros."<<endl;
    cout << "Insira o primeiro numero: ";
    cin >> numeroUm;
    cout << "Insira o segundo numero: ";
    cin >> numeroDois;

    soma = numeroUm + numeroDois;
    produto = numeroUm * numeroDois;
    diferenca = numeroUm - numeroDois;
    quociente = numeroUm / numeroDois;

    cout << "\n Resultados \n" << "\n Soma = " << soma << "\n Produto = " << produto << "\n Diferenca = " << diferenca << "\n Quociente = " << quociente;

    return 0;
}