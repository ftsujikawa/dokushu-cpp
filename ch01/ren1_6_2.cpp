#include <iostream>

int main() {
  char string[] = "Hello, \0 null character";

  std::cout << string << std::endl;
}