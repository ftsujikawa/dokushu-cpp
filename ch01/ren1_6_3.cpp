#include <iostream>
#include <string>

int main() {
  std::string string = "Hello, \0 null character";

  std::cout << string << std::endl;
}