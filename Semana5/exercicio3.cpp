#include <iostream>
#include <vector>
using namespace std;

bool perfect(int n, vector<int>& fatores) {
    int soma = 0;
    fatores.clear();
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            soma += i;
            fatores.push_back(i);
        }
    }
    return soma == n;
}

int main() {
    cout << "Numeros perfeitos entre 1 e 1000 e seus fatores:\n";

    for (int num = 1; num <= 1000; num++) {
        vector<int> fatores;
        if (perfect(num, fatores)) {
            cout << num << " e um numero perfeito. Fatores: ";
            for (int fator : fatores) {
                cout << fator << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
