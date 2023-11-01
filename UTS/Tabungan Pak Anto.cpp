#include <iostream>
using namespace std;

int main() {
  // Variabel untuk menyimpan data yang dimasukkan oleh pengguna
  double tabunganDollar, tabunganEuro, kursEuroToUSD, kursUSDToIDR,
      hargaMobilIDR;

  // Meminta pengguna untuk memasukkan data
  cout << "*******************************************" << endl;
  cout << "  Program Perhitungan Pembelian Mobil Baru  " << endl;
  cout << "*******************************************" << endl;

  cout << "Masukkan jumlah tabungan dalam Dollar (US Dollar): ";
  cin >> tabunganDollar;

  cout << "Masukkan jumlah tabungan dalam Euro: ";
  cin >> tabunganEuro;

  cout << "Masukkan kurs 1 Euro ke US Dollar: ";
  cin >> kursEuroToUSD;

  cout << "Masukkan kurs 1 US Dollar ke Rupiah: ";
  cin >> kursUSDToIDR;

  cout << "Masukkan harga mobil baru dalam Rupiah: ";
  cin >> hargaMobilIDR;

  // Menghitung total tabungan dalam US Dollar
  double totalTabunganUSD = tabunganDollar + (tabunganEuro * kursEuroToUSD);

  // Menghitung total tabungan dalam Rupiah
  double totalTabunganIDR = totalTabunganUSD * kursUSDToIDR;

  // Menghitung sisa uang setelah membeli mobil
  double sisaUangIDR = totalTabunganIDR - hargaMobilIDR;

  // Menampilkan hasil perhitungan dengan dekorasi
  cout << "*******************************************" << endl;
  cout << "Hasil Perhitungan" << endl;
  cout << "*******************************************" << endl;
  cout << "Total tabungan Pak Anto dalam Rupiah: " << totalTabunganIDR << " IDR"
       << endl;
  cout << "Sisa uang Pak Anto setelah membeli mobil baru: " << sisaUangIDR
       << " IDR" << endl;

  return 0;
}
