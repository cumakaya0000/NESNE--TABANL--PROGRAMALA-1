#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float celsius;

    cout << "Celsius cinsinden sicaklik girin: ";
    cin >> celsius;

    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "\nSicaklik Donusumu:\n";
    cout << "--------------------\n";
    cout << "Celsius:\t" << fixed << setprecision(2) << celsius << "\n";
    cout << "Fahrenheit:\t" << fixed << setprecision(2) << fahrenheit << "\n";
    cout << "Formul: \"(Celsius * 9/5) + 32\"\n";

    return 0;
}