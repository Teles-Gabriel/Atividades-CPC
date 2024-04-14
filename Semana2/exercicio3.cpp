/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Escreva um código que peça ao usuário fornecer o raio de 
    um circulo e então imprima o diâmetro da circunferência
    e a área. User a constante 3.14159 como sendo o valor de pi.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float raio, diametro, pi, area;

    cout << "Esse programa calcula o diametro e a area de um circulo.";
    cout << "Insira o valor do raio: ";
    cin >> raio;
    
    pi =  3.14159;
    diametro = 2 * raio;
    area = pi * pow(raio, 2);

    cout << "O diametro e = " << diametro << ", a area do circulo e = " << area;
    
    return 0;
}