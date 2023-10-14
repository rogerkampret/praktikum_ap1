#include <iostream>

int main() {
    int day, month, year, hour, minute, second;
    int choice;

    // Input tanggal dan waktu awal
    std::cout << "Masukkan tanggal (d): ";
    std::cin >> day;

    std::cout << "Masukkan bulan (m): ";
    std::cin >> month;

    std::cout << "Masukkan tahun (y): ";
    std::cin >> year;

    std::cout << "Masukkan jam (h): ";
    std::cin >> hour;

    std::cout << "Masukkan menit (min): ";
    std::cin >> minute;

    std::cout << "Masukkan detik (s): ";
    std::cin >> second;

    // Pilihan pengguna
    std::cout << "Pilih tindakan yang diinginkan:" << std::endl;
    std::cout << "1. Tambahkan 10 hari" << std::endl;
    std::cout << "2. Tambahkan 1 detik (hari berikutnya)" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        // Tambahkan 10 hari
        day += 10;
    } else if (choice == 2) {
        // Tambahkan 1 detik
        second++;
    } else {
        std::cout << "Pilihan tidak valid!" << std::endl;
        return 1;
    }
    
    // Tabel jumlah hari dalam bulan
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Periksa apakah tahun kabisat
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29; // Tahun kabisat, Februari memiliki 29 hari
    }

    // Periksa dan atur tanggal dan bulan jika melebihi jumlah hari dalam bulan
    while (day > days_in_month[month]) {
        day -= days_in_month[month];
        month++;

        if (month > 12) {
            month = 1;
            year++;
        }
    }

    // Periksa dan atur detik, menit, dan jam jika melebihi 59 detik, 59 menit, atau 23 jam
    if (second > 59) {
        second = 0;
        minute++;
    }
    if (minute > 59) {
        minute = 0;
        hour++;
    }
    if (hour > 23) {
        hour = 0;
    }

    // Output tanggal dan waktu setelah ditambahkan 10 hari atau 1 detik
    std::cout << "Tanggal dan waktu setelah tindakan: " << day << "-" << month << "-" << year << " " << hour << ":" << minute << ":" << second << std::endl;

    return 0;
}
