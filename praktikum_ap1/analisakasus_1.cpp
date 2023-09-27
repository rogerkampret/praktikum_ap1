// #include <iostream>
// using namespace std;

// int main() {
//   long penjualan;
//   float bonus;

//   cout << "menghitung bonus penjualanan";
//   cout << "penjualan: ";
//   cin >> penjualan;
//   if (penjualan > 50000 && penjualan < 10000000)
//     bonus = penjualan * 0.05;
//   else
//     bonus = 0;
//   if (penjualan >= 10000000)
//     bonus = penjualan * 0.01;
//   else
//     bonus = 0;
//   cout << "bonus penjualan: " << bonus;

//   // if (penjualan >= 10000000) {
//   //   cout << "uhuy" << endl;
//   // } else if ( penjualan < 10000000) {
//   //   cout << "ahay" << endl;
//   // }
//   return 0;
// }

// #include <iostream>
// #include <vector>

// int main() {
//     int jumlahIndividu;
//     std::vector<double> beratBadan;

//     // Input jumlah individu
//     std::cout << "Masukkan jumlah individu: ";
//     std::cin >> jumlahIndividu;

//     // Input berat badan setiap individu
//     for (int i = 1; i <= jumlahIndividu; ++i) {
//         double berat;
//         std::cout << "Masukkan berat badan individu ke-" << i << " (kg): ";
//         std::cin >> berat;
//         beratBadan.push_back(berat);
//     }

//     // Temukan individu dengan berat terbesar
//     double beratTerbesar = beratBadan[0];
//     int indeksTerbesar = 0;

//     for (int i = 1; i < jumlahIndividu; ++i) {
//         if (beratBadan[i] > beratTerbesar) {
//             beratTerbesar = beratBadan[i];
//             indeksTerbesar = i;
//         }
//     }

//     // Cetak individu dengan berat terbesar
//     std::cout << "Individu dengan berat terbesar adalah individu ke-" <<
//     (indeksTerbesar + 1) << " dengan berat " << beratTerbesar << " kg." <<
//     std::endl;

//     return 0;
// }

// #include <iostream>

// int main() {
//   int bilangan1, bilangan2;
//   char operasi;

//   // Input bilangan pertama
//   std::cout << "Masukkan bilangan pertama: ";
//   std::cin >> bilangan1;

//   // Input operator
//   std::cout << "Masukkan operator (+, -, *, /): ";
//   std::cin >> operasi;

//   // Input bilangan kedua
//   std::cout << "Masukkan bilangan kedua: ";
//   std::cin >> bilangan2;

//   // Melakukan perhitungan berdasarkan operator
//   int hasil;

//   switch (operasi) {
//   case '+':
//     hasil = bilangan1 + bilangan2;
//     break;
//   case '-':
//     hasil = bilangan1 - bilangan2;
//     break;
//   case '*':
//     hasil = bilangan1 * bilangan2;
//     break;
//   case '/':
//     // Periksa apakah pembagian dengan nol
//     if (bilangan2 != 0) {
//       hasil = bilangan1 / bilangan2;
//     } else {
//       std::cout << "Error: Pembagian dengan nol tidak diperbolehkan."
//                 << std::endl;
//       return 1; // Keluar dari program dengan kode error
//     }
//     break;
//   default:
//     std::cout << "Error: Operator tidak valid." << std::endl;
//     return 1; // Keluar dari program dengan kode error
//   }

//   // Cetak hasil perhitungan
//   std::cout << "Hasil perhitungan: " << hasil << std::endl;

//   return 0;
// }

// #Input data
// golongan = int(input("Masukkan golongan karyawan (1-5): ")) nama_karyawan =
//     input("Masukkan nama karyawan: ") jam_kerja =
//         float(input("Masukkan jumlah jam kerja per bulan: ")) gaji_per_jam =
//             0 #Inisialisasi gaji per jam

// #Tentukan gaji per jam berdasarkan golongan
//             if golongan == 1 : gaji_per_jam =
//                 10000 elif golongan == 2 : gaji_per_jam =
//                     20000 elif golongan == 3 : gaji_per_jam =
//                         30000 elif golongan == 4 : gaji_per_jam =
//                             40000 elif golongan == 5 : gaji_per_jam = 50000
//                             else
//     : print("Golongan karyawan tidak valid.") exit()

// #Hitung gaji tetap berdasarkan golongan
//           gaji_tetap = 0 #Inisialisasi gaji tetap

// #Tentukan gaji tetap berdasarkan golongan
//                            if golongan >= 1 and golongan <= 5
//     : if golongan == 1 : gaji_tetap = 1000000 elif golongan == 2 : gaji_tetap
//     =
//                                           2000000 elif golongan == 3
//     : gaji_tetap = 3000000 elif golongan == 4 : gaji_tetap =
//                        4000000 elif golongan == 5 : gaji_tetap = 5000000 else
//     : print("Golongan karyawan tidak valid.") exit()

// #Hitung gaji lembur jika jam kerja lebih dari 150 jam
//           if jam_kerja > 150
//     : lembur = (jam_kerja - 150) *gaji_per_jam * 1.5 else
//     : lembur = 0

// #Hitung total gaji
//       total_gaji =
//           gaji_tetap +
//           lembur

// #Output hasil perhitungan
//               print("\n===== Hasil Perhitungan Gaji Karyawan =====")
//                   print(f "Nama Karyawan: {nama_karyawan}")
//                       print(f "Golongan: {golongan}")
//                           print(f "Jam Kerja: {jam_kerja} jam")
//                               print(f "Gaji Tetap: Rp{gaji_tetap}")
//                                   print(f "Gaji Lembur: Rp{lembur}")
//                                       print(f "Total Gaji: Rp{total_gaji}")
