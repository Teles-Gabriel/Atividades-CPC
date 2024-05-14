#include <iostream>
#include <math.h>
using namespace std;

bool ehPrimoN2(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool ehPrimoSqrtN(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Numeros primos entre 2 e 1000 usando n/2:\n";
    for (int num = 2; num <= 1000; ++num) {
        if (ehPrimoN2(num)) {
            cout << num << " ";
        }
    }
    cout << "\nNumeros primos entre 2 e 1000 usando sqrt(n):\n";
    for (int num = 2; num <= 1000; ++num) {
        if (ehPrimoSqrtN(num)) {
            cout << num << " ";
        }
    }
    cout << endl;
    return 0;
}
