/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    Escreva um código que solicite ao usuário que digite a largura e o comprimento de uma sala.
    após a leitura dos valores, seu programa deve calcular e exibir a área da sala. 
    O comprimento e a largura serão inseridos como números de ponto flutuante. Inclua as unidades na mensagem de prompt e saida
*/

#include <iostream>
using namespace std;

int main(){
    float area, largura, comprimento;

    cout << "Esse programa calcula a area de uma sala. \n";
    
    cout << "\n Insira a largura da sala em metros: ";
    cin >> largura;

    cout << "\n Insira o comprimento da sala em metros: ";
    cin >> comprimento;

    area = largura * comprimento;
    cout << "\n A area da sala em metros quadrados e: " << area;

    return 0;
}
