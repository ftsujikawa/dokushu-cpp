#include <iostream>

class Book {
  std::string title;
  std::string writer;
  int         price;

public:
  Book(std::string title, std::string writer, int price);
};

Book::Book(std::string title, std::string writer, int price)
  : title(title), writer(writer), price(price) {
}

int main() {
  Book b("c++", "auther", 3000);
}