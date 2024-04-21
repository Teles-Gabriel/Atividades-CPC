/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
4 - Entre com valores inteiros de 0s e 1s representando um número binário e calcule seu valor
decimal correspondente. (Dica: use o operador módulo e divisão para selecionar os dígitos do
número "binário", um de cada vez, da direita para a esquerda. Assim como no sistema de número
decimal, em que o dígito mais à direita tem o valor posicional 1 e o próximo dígito à esquerda tem o
valor posicional 10, depois 100, depois 1000 etc. no sistema de números binários, o mais à direita
dígito tem um valor posicional 1, o próximo dígito à esquerda tem o valor posicional 2, depois 4,
depois 8, etc.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int numero_binario, digito, valor_posicional = 1, valor_decimal = 0;

    cout << "Digite um numero binario: ";
    cin >> numero_binario;

    while (numero_binario > 0) {
        digito = numero_binario % 10;
        
        valor_decimal += digito * valor_posicional;

        valor_posicional *= 2;

        numero_binario /= 10;
    }
    cout << "O valor decimal correspondente e: " << valor_decimal << endl;
    return 0;
}
