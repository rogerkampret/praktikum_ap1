#include <iostream>

int main() {
  // Mendefinisikan variabel untuk menyimpan tiga bilangan bulat
  int bilangan1, bilangan2, bilangan3;

  // Meminta pengguna untuk memasukkan tiga bilangan bulat
  std::cout << "Masukkan bilangan pertama: ";
  std::cin >> bilangan1;

  std::cout << "Masukkan bilangan kedua: ";
  std::cin >> bilangan2;

  std::cout << "Masukkan bilangan ketiga: ";
  std::cin >> bilangan3;

  // Membandingkan ketiga bilangan untuk menemukan bilangan maksimal
  int bilanganMaksimal =
      bilangan1; // Asumsikan bilangan pertama adalah yang maksimal

  if (bilangan2 > bilanganMaksimal) {
    bilanganMaksimal = bilangan2;
  }

  if (bilangan3 > bilanganMaksimal) {
    bilanganMaksimal = bilangan3;
  }

  // Menampilkan bilangan maksimal
  std::cout << "Bilangan paling maksimal adalah: " << bilanganMaksimal
            << std::endl;

  return 0;
}
