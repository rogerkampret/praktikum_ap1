// #include <iostream>
// using namespace std;

// // Constants
// const double ROOM_COST = 100.00;       // Cost of renting one room per night
// const double DISCOUNT_10_ROOMS = 0.10; // 10% discount for 10 or more rooms
// const double DISCOUNT_20_ROOMS = 0.20; // 20% discount for 20 or more rooms
// const double DISCOUNT_30_ROOMS = 0.30; // 30% discount for 30 or more rooms
// const double ADDITIONAL_DISCOUNT =
//     0.05; // Additional 5% discount for booking at least three days

// int main() {
//   // Input from the user
//   double room_cost, sales_tax_percent;
//   int num_rooms, num_days;

//   cout << "Welcome to Hotel Booking Calculator🏨!" << endl;

//   cout << "Enter the cost of renting one room per night: $";
//   cin >> room_cost;

//   cout << "Enter the number of rooms booked: ";
//   cin >> num_rooms;

//   cout << "Enter the number of days the rooms are booked: ";
//   cin >> num_days;

//   cout << "Enter the sales tax rate (as a percentage): ";
//   cin >> sales_tax_percent;

//   // Calculate the base cost before discounts
//   double total_base_cost = room_cost * num_rooms * num_days;

//   // Calculate the discount based on the number of rooms booked
//   double discount = 0.0;
//   if (num_rooms >= 30) {
//     discount = DISCOUNT_30_ROOMS;
//     cout << discount << endl;
//   } else if (num_rooms >= 20) {
//     discount = DISCOUNT_20_ROOMS;
//     cout << discount << endl;
//   } else if (num_rooms >= 10) {
//     discount = DISCOUNT_10_ROOMS;
//     cout << discount << endl;
//   }

//   // Calculate the total cost after discounts
//   double total_cost_after_discount =
//       total_base_cost - (total_base_cost * discount);

//   // Calculate the additional discount for booking at least three days
//   if (num_days >= 3) {
//     total_cost_after_discount *= (1 - ADDITIONAL_DISCOUNT);
//   }

//   // Calculate the sales tax amount
//   double sales_tax_amount =
//       (total_cost_after_discount * sales_tax_percent) / 100;

//   // Calculate the total billing amount
//   double total_billing_amount = total_cost_after_discount + sales_tax_amount;

//   // Output the results
//   cout << "\nCost of renting one room per night: $" << room_cost << endl;
//   cout << "Discount on each room as a percent: " << discount * 100 << "%"
//        << endl;
//   cout << "Number of rooms booked: " << num_rooms << endl;
//   cout << "Number of days the rooms are booked: " << num_days << endl;
//   cout << "Total cost of the rooms: $" << total_base_cost << endl;
//   cout << "Sales tax (%" << sales_tax_percent << "): $" << sales_tax_amount
//        << endl;
//   cout << "Total billing amount💰: $" << total_billing_amount << endl;

//   cout << "Thank you for the order" << endl;

//   return 0;
// }

#include <iostream>

int main() {
  // Mendefinisikan variabel-variabel untuk menyimpan masukan dari pengguna
  double panjangKertas, lebarKertas, marginAtas, marginBawah, marginKiri,
      marginKanan, ukuranTitik;
  char spasi;

  // Meminta pengguna untuk memasukkan nilai-nilai
  std::cout << "Masukkan panjang kertas (dalam inci): ";
  std::cin >> panjangKertas;

  std::cout << "Masukkan lebar kertas (dalam inci): ";
  std::cin >> lebarKertas;

  std::cout << "Masukkan margin atas (dalam inci): ";
  std::cin >> marginAtas;

  std::cout << "Masukkan margin bawah (dalam inci): ";
  std::cin >> marginBawah;

  std::cout << "Masukkan margin kiri (dalam inci): ";
  std::cin >> marginKiri;

  std::cout << "Masukkan margin kanan (dalam inci): ";
  std::cin >> marginKanan;

  std::cout << "Masukkan ukuran titik teks: ";
  std::cin >> ukuranTitik;

  // Tanyakan kepada pengguna tentang preferensi spasi
  std::cout << "Apakah teksnya berjarak ganda? (Y/T): ";
  std::cin >> spasi;

  // Hitung lebar dan tinggi yang tersedia untuk mencetak
  double lebarTersedia = lebarKertas - marginKiri - marginKanan;
  double tinggiTersedia = panjangKertas - marginAtas - marginBawah;

  // Hitung jumlah karakter dalam satu baris
  int karakterPerBaris = static_cast<int>(lebarTersedia / (ukuranTitik / 72.0));

  // Hitung jumlah baris yang dapat dicetak
  int barisPerHalaman =
      static_cast<int>(tinggiTersedia / ((spasi == 'Y' || spasi == 'y')
                                             ? (2 * ukuranTitik / 72.0)
                                             : (ukuranTitik / 72.0)));

  // Tampilkan hasilnya
  std::cout << "Jumlah karakter dalam satu baris: " << karakterPerBaris
            << std::endl;
  std::cout << "Jumlah baris yang dapat dicetak di atas kertas:
               " << barisPerHalaman << std::endl;

      return 0;
}
