/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
8 - Codifique um programa que faça a leitura de dois número reais. A seguir o programa lê um
caractere, que deve ser +, -, * ou /, e realiza a operação indicada pelo caractere sobre os valores
lidos. Seu programa deve usar o comando switch. O programa deve imprimir o resultado da
operação realizada sobre eles, como mostra o exemplo a seguir (exibindo exatamente duas casas
decimais):
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float numero1, numero2;
    char operador;

    cout << "Esse programa e uma calculadora simples";
    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "Digite o operador (+, -, *, /): ";
    cin >> operador;

    cout << "Resultado: ";
    switch (operador) {
        case '+':
            cout << fixed << setprecision(2) << numero1 + numero2 << endl;
            break;
        case '-':
            cout << fixed << setprecision(2) << numero1 - numero2 << endl;
            break;
        case '*':
            cout << fixed << setprecision(2) << numero1 * numero2 << endl;
            break;
        case '/':
            if (numero2 != 0) {
                cout << fixed << setprecision(2) << numero1 / numero2 << endl;
            } else {
                cout << "Erro: divisao por zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Operador invalido!" << endl;
            return 1;
    }

    return 0;
}
