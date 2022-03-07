#include <iostream>

int main() {
  std::string string = "Hello World!";

  for (auto c: string) {
    std::cout << c << std::endl;
  }
}