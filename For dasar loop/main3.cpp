#include <iostream>

int main() {
  int n;
  long long faktorial = 1;

  std::cout << "Masukkan bilangan bulat positif: ";
  std::cin >> n;

  if (n < 0) {
    std::cout << "Faktorial hanya dapat dihitung untuk bilangan bulat positif."
              << std::endl;
  } else {
    for (int i = 1; i <= n; i++) {
      faktorial *= i;
    }

    std::cout << "Faktorial dari " << n << " adalah " << faktorial << std::endl;
  }

  return 0;
}
