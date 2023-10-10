#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengonversi angka Arab ke angka Romawi
string arabToRoman(int num) {
    int arab[] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string romawi[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"};

    string hasil = "";

    for (int i = 12; i >= 0; i--) {
        while (num >= arab[i]) {
            hasil += romawi[i];
            num -= arab[i];
        }
    }

    return hasil;
}

int main() {
    int angkaArab;

    cout << "Masukkan angka Arab: ";
    cin >> angkaArab;

    if (angkaArab <= 0 || angkaArab > 3999) {
        cout << "Angka Arab harus antara 1 dan 3999." << endl;
    } else {
        string angkaRomawi = arabToRoman(angkaArab);
        cout << "Angka Romawi: " << angkaRomawi << endl;
    }

    return 0;
}
