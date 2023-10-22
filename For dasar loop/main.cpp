// #include <climits>
// #include <iostream>

// int main() {
//   int total = 0;
//   int min_value = INT_MAX;
//   int max_value = INT_MIN;

//   for (int i = 1; i <= 10; i++) {
//     int num;
//     std::cout << "Masukkan bilangan " << i << ": ";
//     if (!(std::cin >> num)) {
//       std::cerr << "Input bukan bilangan bulat. Coba lagi." << std::endl;
//       return 1; // Keluar dari program dengan kode kesalahan
//     }

//     total += num;

//     if (num < min_value) {
//       min_value = num;
//     }

//     if (num > max_value) {
//       max_value = num;
//     }
//   }

//   double average = static_cast<double>(total) / 10;

//   std::cout << "=====================" << std::endl;
//   std::cout << "Nilai Rata-rata = " << average << std::endl;
//   std::cout << "Nilai Terkecil = " << min_value << std::endl;
//   std::cout << "Nilai Terbesar = " << max_value << std::endl;

//   return 0;
// }
