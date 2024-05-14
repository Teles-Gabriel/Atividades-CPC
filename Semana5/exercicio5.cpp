#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numero, palpite;
    char jogarNovamente;

    do {
        numero = rand() % 1000 + 1;
        cout << "Eu tenho um numero entre 1 e 1000.\n Voce consegue adivinhar o meu numero?\n Digite seu primeiro palpite." << endl;
        
        do {
            cin >> palpite;
            if (palpite == numero) {
                cout << "Excelente! Voce adivinhou o numero! Voce gostaria de jogar novamente (s ou n)?\n";
                cin >> jogarNovamente;
                break;
            } else if (palpite < numero) {
                cout << "Muito baixo. Tente novamente.\n";
            } else {
                cout << "Muito alto. Tente novamente.\n";
            }
        } while (palpite != numero);

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    return 0;
}
