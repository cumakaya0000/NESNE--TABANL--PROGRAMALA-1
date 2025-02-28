#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string urunAdi;
    int adet;
    float birimFiyat;

    cout << "Urun adini girin: ";
    cin >> urunAdi;
    cout << "Adedi girin: ";
    cin >> adet;
    cout << "Birim fiyatini girin: ";
    cin >> birimFiyat;

    float toplamTutar = adet * birimFiyat;

    cout << "\nAlisveris Bilgileri:\n";
    cout << "--------------------\n";
    cout << "Urun Adi:\t\"" << urunAdi << "\"\n";
    cout << "Adet:\t\t" << adet << "\n";
    cout << "Birim Fiyati:\t" << fixed << setprecision(2) << birimFiyat << "\n";
    cout << "Toplam Tutar:\t" << fixed << setprecision(2) << toplamTutar << "\n";
    cout << "Ters Egik Cizgi: \\ \n";

    return 0;
}