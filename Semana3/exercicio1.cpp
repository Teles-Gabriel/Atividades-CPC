/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
1- Motoristas se preocupam com a autonomia que seus carros fazem ao dirigir. Um motorista
gravou o registro de quantos litros e quantos kilometros seu carro fez para cada enchida no
tanque. Crie um código que receba como entrada a quantidade de litros e a quantidade de
quilômetros percorrido pelo carro e calcule o consumo de cada tanque completado em km/litro.
Após processar todas as entradas, calcule e imprima a média do consumo que o carro fez. (=total
de kilometros percorrido dividio pelo total de gasolina consumida em litros).
*/

#include <iostream>
using namespace std;

int main(){
    
    float litrosDeGasolina, quilometrosRodados, mediaDeConsumo;

    cout << "Esse programa calcula a quantidade de gasolina consumida dado o tanque completo, a media total km/l.";
    cout << "\n Insira a quantidade de litros: ";
    cin >> litrosDeGasolina;

    cout << "\n Insira quantos quilometros foram rodados: ";
    cin >> quilometrosRodados;

    mediaDeConsumo = quilometrosRodados / litrosDeGasolina;

    cout << "\n A media de consumo de km/l: " << mediaDeConsumo;
}