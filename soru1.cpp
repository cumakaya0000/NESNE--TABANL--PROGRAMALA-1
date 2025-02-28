#include <iostream>
#include <iomanip>
#include <string>
#include <limits> // numeric_limits için
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string ad, soyad;
    int yas;
    float boy;
    char cinsiyet;

    cout << "Adinizi Girin: ";
    cin >> ad;
    cout << "Soyadinizi girin: ";
    cin >> soyad;
    cout << "Yasinizi girin: ";
    cin >> yas;
    cout << "Boyunuzu girin: ";
    cin >> boy;
    cout << "Cinsiyetinizi girin: ";
    cin >> cinsiyet;

    cout << "\nKullanici Bilgileri:\n";
    cout << "--------------------\n";
    cout << "Ad Soyad:\t\"" << ad << " " << soyad << "\"\n";
    cout << "Yas:\t\t" << yas << "\n";
    cout << "Boy:\t\t" << fixed << setprecision(2) << boy << "\n";
    cout << "Cinsiyet:\t" << cinsiyet << "\n";

    return 0;
}