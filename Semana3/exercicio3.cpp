/*
    By: Gabriel Teles Medeiros de Aguiar
    Matrícula: 241008550
    Curso: Engenharia de Redes de Comunicação - UnB
    Matéria: Computação Para a Engenharia
*/

/*    
    3 - Palíndromo é um número ou texto que se lê da mesma maneira de trás para frente ou de
    frente para trás. Por exemplo, cada um dos dígitos a seguir é um palindrome: 12321, 55555,
    45554 and 11611. Escreva um código que lê cinco dígitos inteiros e determina se é um
    palíndromo. (Dica: use a divisão e o operador módulo para separar o número em seus dígitos
    individuais)
*/

#include <iostream>
using namespace std;

int main() {
    int numero, digito1, digito2, digito4, digito5;
    
    cout << "Esse programa verifica se um numero e um palindromo \n";
    cout << "Digite um numero de cinco digitos: ";
    cin >> numero;

    digito1 = numero / 10000;
    digito2 = (numero / 1000) % 10;
    digito4 = (numero / 10) % 10;
    digito5 = numero % 10;

    if (digito1 == digito5 && digito2 == digito4) {
        cout << "O numero " << numero << " e um palindromo." << endl;
    } else {
        cout << "O numero " << numero << " nao e um palindromo." << endl;
    }

    return 0;
}
