// #include <iomanip> // Untuk mengatur tampilan output
// #include <iostream>

// using namespace std;

// int main() {
//   string nama;
//   double nilai_uts, nilai_uas, nilai_tugas, nilai_akhir;
//   char indeks_nilai;

//   // Membaca input dari pengguna
//   cout << "======================================" << endl;
//   cout << "Selamat datang di Program Perhitungan Nilai Akhir" << endl;
//   cout << "======================================" << endl;
//   cout << "Masukkan nama mahasiswa: ";
//   cin >> nama;
//   cout << "Masukkan nilai UTS (0-100): ";
//   cin >> nilai_uts;
//   cout << "Masukkan nilai UAS (0-100): ";
//   cin >> nilai_uas;
//   cout << "Masukkan nilai Tugas (0-100): ";
//   cin >> nilai_tugas;
//   cout << "======================================" << endl;

//   // Menghitung nilai akhir
//   nilai_akhir = (0.3 * nilai_uts) + (0.4 * nilai_uas) + (0.3 * nilai_tugas);

//   // Menentukan indeks nilai
//   if (nilai_akhir >= 90.0) {
//     indeks_nilai = 'A';
//   } else if (nilai_akhir >= 80.0) {
//     indeks_nilai = 'B';
//   } else if (nilai_akhir >= 70.0) {
//     indeks_nilai = 'C';
//   } else {
//     indeks_nilai = 'D';
//   }

//   cout << "Hasil Perhitungan Nilai" << endl;
//   cout << "======================================" << endl;
//   cout << "Nama Mahasiswa: " << nama << endl;
//   cout << fixed << setprecision(2); // Menampilkan nilai desimal hingga 2
//   angka cout << "Nilai Akhir: " << nilai_akhir << endl;
//   cout << "Indeks
//       Nilai : " << indeks_nilai << endl; cout <<
//               "======================================"
//        << endl;

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {
  int tipeRumah, jumlahRumahTerjual;
  double bonus = 0;

  cout << "Masukkan tipe rumah: ";
  cin >> tipeRumah;

  cout << "Masukkan jumlah rumah yang terjual: ";
  cin >> jumlahRumahTerjual;

  if (tipeRumah == 45) {
    if (jumlahRumahTerjual >= 1 && jumlahRumahTerjual <= 5) {
      bonus = jumlahRumahTerjual * 500000;
    } else if (jumlahRumahTerjual > 5) {
      bonus = 5 * 500000 + (jumlahRumahTerjual - 5) * 1000000;
    }
  } else if (tipeRumah == 54) {
    if (jumlahRumahTerjual >= 1 && jumlahRumahTerjual <= 5) {
      bonus = jumlahRumahTerjual * 250000;
    } else if (jumlahRumahTerjual > 5) {
      bonus = 5 * 250000 + (jumlahRumahTerjual - 5) * 500000;
    }
  }

  cout << "Total bonus yang diterima: Rp. " << bonus << endl;

  return 0;
}
