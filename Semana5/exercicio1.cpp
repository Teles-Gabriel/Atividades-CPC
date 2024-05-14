#include <iostream>
#include <iomanip>

using namespace std;

double celsiusParaFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

int main() {
    cout << fixed << setprecision(1);

    cout << "Celsius    Fahrenheit\n";
    cout << "---------------------\n";

    for (int celsius = 0; celsius <= 100; ++celsius) {
        double fahrenheit = celsiusParaFahrenheit(celsius);
        cout << setw(7) << celsius << "    " << setw(10) << fahrenheit << '\n';
    }

    return 0;
}
