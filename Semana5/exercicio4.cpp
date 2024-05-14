#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int geraPergunta() {
    int num1 = rand() % 10;
    int num2 = rand() % 10;
    cout << "Quanto e " << num1 << " vezes " << num2 << "?\n";
    return num1 * num2;
}

int main() {
    srand(time(0));
    int respostaCorreta, respostaUsuario;

    respostaCorreta = geraPergunta();

    while (true) {
        cin >> respostaUsuario;

        if (respostaUsuario == respostaCorreta) {
            cout << "Muito bom!" << endl;
            respostaCorreta = geraPergunta();
        } else {
            cout << "Nao. Por favor, tente novamente.\n";
        }
    }

    return 0;
}
