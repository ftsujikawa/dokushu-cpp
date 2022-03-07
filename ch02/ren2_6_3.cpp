#include <iostream>
#include <string>

int main() {
  std::string str;

  do {
    std::cout << "> ";
    std::getline(std::cin, str);
    std::cout << "入力された内容は、\"" << str << "\"です。" << std::endl;
  } while(str != "");
}