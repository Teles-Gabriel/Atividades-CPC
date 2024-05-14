#include <iostream>
using namespace std;

int main() {
    int limite = 20;

    for (int a = 1; a <= limite; ++a) {
        for (int b = a; b <= limite; ++b) {
            for (int c = b; c <= limite; ++c) {
                if (a*a + b*b == c*c) {
                    cout << "(" << a << ", " << b << ", " << c << ")" << endl;
                }
            }
        }
    }

    return 0;
}
