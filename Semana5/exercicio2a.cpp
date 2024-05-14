#include <iostream>
#include <cmath>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Digite um numero para verificar se e primo: ";
    int numero;
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << numero << " e primo." << endl;
    } else {
        cout << numero << " nao e primo." << endl;
    }

    return 0;
}
