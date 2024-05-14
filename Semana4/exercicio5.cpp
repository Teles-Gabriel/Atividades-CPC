#include <iostream>
using namespace std;

int main() {
    int numeros[5];

    cout << "Digite cinco numeros entre 1 e 30: \n";
    for (int i = 0; i < 5; ++i) {
        do {
            cout << "Numero " << i + 1 << ": ";
            cin >> numeros[i];
            if (numeros[i] < 1 || numeros[i] > 30) {
                cout << "Por favor, digite um numero entre 1 e 30. \n";
            }
        } while (numeros[i] < 1 || numeros[i] > 30);
    }

    cout << "\n Grafico de barras: \n";
    for (int i = 0; i < 5; ++i) {
        cout << "Numero " << numeros[i] << ": ";
        for (int j = 0; j < numeros[i]; ++j) {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
