#include <iostream>
using namespace std;

int main() {
    double preco[6] = {0, 2.98, 4.50, 9.98, 4.49, 6.87};
    
    double total = 0.0;
    int produto;
    int quantidade;

    cout << "Digite o numero do produto e a quantidade vendida (digite 0 para encerrar): \n";

    while (true) {
        cout << "Produto numero: " << endl;
        cin >> produto;

        if (produto == 0) {
            break;
        }

        cout << "Quantidade vendida: " << endl;
        cin >> quantidade;

        cout << "Para finalizar digite 0" << endl;

        switch (produto) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                total += preco[produto] * quantidade;
                break;
            default:
                cout << "Numero do produto invalido!\n";
        }
    }

    cout << "Total de vendas R$ " << total << endl;

    return 0;
}
