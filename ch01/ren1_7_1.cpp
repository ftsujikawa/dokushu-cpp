#include <iostream>

int main() {
  int array[] = { 4, 2, 1, 9, 5 };

  int i = sizeof(array) / sizeof(array[0]);
  while (i--) {
    std::cout << array[i] << std::endl;
  }
}