/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*
2 - Escreva um programa que imprima os seguintes padrões separadamente, um abaixo do outro,
cada padrão separado do próximo por uma linha em branco. Use laços for para gerar os padrões.
Todos os asteriscos (*) devem ser impressos por uma única declaração na forma: cout << ‘*’ ;
o que faz com que os asteriscos imprimam lado a lado, uma declaração no formato cout << '\n';
pode ser usado para passar para a próxima linha. Uma instrução no formato cout << ' '; pode ser
usado para exibir um espaço para os dois últimos padrões. (Dica: os dois últimos padrões exigem
que cada linha comece com um número apropriado de espaços em branco.) Crédito extra: combine
seu código dos quatro problemas separados em um único programa que imprime todos os quatro
padrões lado a lado, fazendo um uso inteligente dos laços aninhados for. Para todas as partes deste
exercício - minimize o número de asteriscos e espaços e o número de instruções que imprimem
esses caracteres
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int linhas = 10;

    for (int i = 1; i <= linhas; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n";

    for (int i = linhas; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "\n";

    string linha, asterisco;

    linha = "";
    
    for (int i = linhas; i >= 1; --i) {
        cout << linha;
        for (int j = i; j >= 1; j--){
            cout << "*";
        }
        linha = linha + " ";
        
        cout << endl;
    }

    cout << "\n";

    for (int i = linhas; i >= 1; --i) {
        for (int j = i; j >= 2; j--){
            cout << " ";
        }

        for (int j = 1; j <= 10 - (i-1); j++){
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
