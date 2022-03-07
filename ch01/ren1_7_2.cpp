#include <iostream>

int main() {
  int array[] = { 4, 2, 1, 9, 5 };

  for (int i = sizeof(array)/sizeof(array[0]); i--; ) {
    std::cout << array[i] << std::endl;
  }
}