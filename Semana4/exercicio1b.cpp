/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Escreva um programa que calcule o valor da constante matemática usando a seguinte
fórmula (Nota: Seu código pode parar após somar 10 termos.)
*/
#include <iostream>
using namespace std;

int main() {
    int termos = 10;
    double e = 1.0;

    cout << "Esse programa calcula a constante de Euler para uma serie de 10 termos \n";

    for (int i = 1; i <= termos; ++i) {
        int fatorial = 1;
        for (int j = 1; j <= i; ++j) {
            fatorial *= j;
        }
        e += 1.0 / fatorial;
    }

    cout << "O valor de 'e' aproximado apos " << termos << " termos e: " << e << endl;

    return 0;
}
