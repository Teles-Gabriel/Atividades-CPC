/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    O custo do aluguel de um automóvel é 1.75 reais por km até os primeiros 50 km, 1.65 reais por km para os 100km
    seguintes e 1.50 reais por km acima de 150 km. Escreva um programa que leia a distância em quilômetros e calcule o valor
    total a pagar e o custo médio por quilometro
*/

#include <iostream>
using namespace std;

int main(){
    float distancia, valorTotal, custoMedio, custoTotal;

    cout << "Esse programa calcula o valor medio por quilometro de um aluguel de carro\n";
    cout << "Insira a distancia em quilometros(km): ";
    cin >> distancia;

    if(distancia <= 50){
        custoTotal = 1.75 * distancia;
    } else if(distancia > 50 && distancia <= 150){
        custoTotal = (1.75 * 50) + 1.65 * (distancia - 50);
    } else {
        custoTotal = (1.75 * 50) + (1.65 * 100) + 1.50 * (distancia - 150);
    }

    custoMedio = custoTotal / distancia;
    cout << "O custo total da viagem foi de: " << custoTotal << " R$" << endl;
    cout << "O custo medio da viagem foi de: " << custoMedio << " R$";


    return 0;
}