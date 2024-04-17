/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    10 - Escreva um algoritmo que solicite ao usuário que digite uma String com 5 caracteres e
    calcule quantas vezes e quais vogais aparecem nesta String. Mostre na tela estes dois
    resultados. Depois utilize o seguinte código de criptografia que modifica a vogal ´a´ por ´i´,a
    vogal ´e´ por ´o´ e a vogal ´i´ por ´u´ e faça as devidas alterações na String . Mostre na tela
    a nova String criptografada
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string entrada;
    cout << "Esse programa calcula quantas vogais existem no palavra com 5 caracteres e criptografa a string. \n";
    cout << "Digite uma string com 5 caracteres: ";
    cin >> entrada;

    if (entrada.length() != 5) {
        cout << "Erro: A string deve conter exatamente 5 caracteres." << endl;
        return 1;
    }

    int contador_a = 0, contador_e = 0, contador_i = 0, contador_o = 0, contador_u = 0;

    // Contagem de vogais
    for (size_t i = 0; i < entrada.length(); ++i) {
        char letra = entrada[i];
        switch (letra) {
            case 'a':
            case 'A':
                contador_a++;
                break;
            case 'e':
            case 'E':
                contador_e++;
                break;
            case 'i':
            case 'I':
                contador_i++;
                break;
            case 'o':
            case 'O':
                contador_o++;
                break;
            case 'u':
            case 'U':
                contador_u++;
                break;
            default:
                break;
        }
    }

    cout << "Quantidade de vogais:" << endl;
    cout << "A: " << contador_a << endl;
    cout << "E: " << contador_e << endl;
    cout << "I: " << contador_i << endl;
    cout << "O: " << contador_o << endl;
    cout << "U: " << contador_u << endl;

    // Criptografar a string
    for (size_t i = 0; i < entrada.length(); ++i) {
        switch (entrada[i]) {
            case 'a':
                entrada[i] = 'i';
                break;
            case 'A':
                entrada[i] = 'I';
                break;
            case 'e':
                entrada[i] = 'o';
                break;
            case 'E':
                entrada[i] = 'O';
                break;
            case 'i':
                entrada[i] = 'u';
                break;
            case 'I':
                entrada[i] = 'U';
                break;
            default:
                break;
        }
    }

    cout << "String criptografada: " << entrada << endl;

    return 0;
}
