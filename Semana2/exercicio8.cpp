/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Implemente um código que solicite o valor de dois catetos para o usuário, realize o cálculo e imprima o valor da hipotenusa.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float catetoUm, catetoDois, hipotenusa, quadradoDosCatetos;

    cout << "Esse programa calcula a hipotenusa dado os catetos";
    cout << "Insira o valor do primeiro cateto: ";
    cin >> catetoUm;

    cout << "\n Insira o valor do segundo cateto: ";
    cin >> catetoDois;

    quadradoDosCatetos = pow(catetoUm, 2) + pow(catetoDois,2);
    hipotenusa = sqrt(quadradoDosCatetos);

    cout << "\n A hipotenusa e igual a: " <<hipotenusa;

}