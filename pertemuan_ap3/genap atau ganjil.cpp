#include <iostream>

int main() {
  // Mendefinisikan variabel untuk menyimpan bilangan bulat
  int bilangan;

  // Meminta pengguna untuk memasukkan bilangan bulat
  std::cout << "Masukkan sebuah bilangan bulat: ";
  std::cin >> bilangan;

  // Memeriksa apakah bilangan tersebut genap atau ganjil
  if (bilangan % 2 == 0) {
    std::cout << "Bilangan genap" << std::endl;
  } else {
    std::cout << "Bilangan ganjil" << std::endl;
  }

  return 0;
}
