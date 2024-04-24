/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    6 - Escreva um programa que leia as medidas dos lados de um triângulo e escreva se ele é
    Equilátero, Isósceles ou Escaleno. Sendo que:
    − Triângulo Equilátero: possui os 3 lados iguais.
    − Triângulo Isóscele: possui 2 lados iguais.
    − Triângulo Escaleno: possui 3 lados diferentes
*/

#include <iostream>
using namespace std;

int main() {
    float lado1, lado2, lado3;

    cout << "Esse programa verifica se um triangulo e Equilatero, Isoceles ou Escaleno \n ";
    cout << " Digite o comprimento do primeiro lado do triangulo: ";
    cin >> lado1;

    cout << "\n Digite o comprimento do segundo lado do triangulo: ";
    cin >> lado2;

    cout << "\n Digite o comprimento do terceiro lado do triangulo: ";
    cin >> lado3;

    if (lado1 == lado2 && lado2 == lado3) {
        cout << "O triangulo e equilatero." << endl;
    } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
        cout << "O triangulo e isosceles." << endl;
    } else {
        cout << "O triangulo e escaleno." << endl;
    }

    return 0;
}
