#include <iostream>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] < arr[j+1]) {
                // Tukar elemen jika elemen saat ini lebih kecil dari elemen berikutnya
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    const int n = 5; // Ganti dengan ukuran array umur Anda
    int umur[n] = {25, 30, 22, 35, 28}; // Ganti dengan data umur Anda

    std::cout << "Umur sebelum diurutkan: ";
    for (int i = 0; i < n; i++) {
        std::cout << umur[i] << " ";
    }

    // Panggil fungsi bubbleSort untuk mengurutkan umur
    bubbleSort(umur, n);

    std::cout << "\nUmur setelah diurutkan (dari tua ke muda): ";
    for (int i = 0; i < n; i++) {
        std::cout << umur[i] << " ";
    }

    return 0;
}
