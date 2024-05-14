#include <iostream>
using namespace std;

int main() {
    int min = 1, max = 100, guess;
    char response;

    cout << "Pense em um numero entre 1 e 100 e eu tentarei adivinha-lo.\n";

    while (min <= max) {
        guess = min + (max - min) / 2;

        cout << "O numero em que voce esta pensando e " << guess << "? (s/n): ";
        cin >> response;

        if (response == 's' || response == 'S') {
            cout << "Otimo! Adivinhei seu numero: " << guess << endl;
            break;
        }

        cout << "O numero e maior que " << guess << "? (s/n): ";
        cin >> response;

        if (response == 's' || response == 'S') {
            min = guess + 1;
        } else {
            max = guess - 1;
        }
    }

    if (min > max) {
        cout << "Parece que houve algum engano, vamos tentar novamente." << endl;
    }

    return 0;
}
