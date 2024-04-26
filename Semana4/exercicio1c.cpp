#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int termos = 10;
    double x, e_x = 1.0;
    cout << "Digite o valor de x: ";
    cin >> x;

    for (int i = 1; i <= termos; ++i) {
        double termo = pow(x, i) / 1.0;
        for (int j = 1; j <= i; ++j) {
            termo /= j;
        }
        e_x += termo;
    }

    cout << "O valor de e^" << x << " aproximado apos " << termos << " termos e: " << e_x << endl;

    return 0;
}
