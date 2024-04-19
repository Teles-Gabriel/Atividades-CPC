/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
2 - Crie uma calculadora álcool x gasolina. O etanol vale a pena quando custar até 70% do valor
da gasolina. Como é feito o cálculo? Dividimos o valor do litro do álcool pelo da gasolina. Quando
o resultado é menor que 0,7, exiba uma recomendação dizendo para abastecer com álcool. Se
for maior, exiba a recomendação para escolher a gasolina.
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