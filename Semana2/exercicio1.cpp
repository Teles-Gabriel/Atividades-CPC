/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Faça as seguintes declarações na linguagem C++ e imprima os valores de x,y e z
    x = 7 + 3 x 6 / 2 - 1 
    y = 2 mod 2 + 2 x 2 / 2
    z = (3 x 9 (3+(9 x 3/ (3))))
*/

#include <iostream>
using namespace std;

int main(){
    int x, y, z;
    
    x = 7 + 3 * 6 / 2 -1;
    y = 2 % 2 * 2 / 2;
    z = (3 * 9 * (3 + (9 * 3 / (3))));

    cout << "X = " << x << ", Y = " << y << ", Z = " << z;

    return 0;
}