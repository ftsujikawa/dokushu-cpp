#include <iostream>

class Book {
  std::string title;
  std::string writer;
  int price;

public:
  Book(std::string title, std::string writer, int price);
  Book(const Book& other);

  std::string get_titile() const;
  std::string get_writer() const;
  int get_price() const;
};

Book::Book(std::string title, std::string writer, int price)
    : title(title), writer(writer), price(price) {}

Book::Book(const Book& other)
  : title(other.title), writer(other.writer), price(other.price) {}

std::string Book::get_titile() const {
  return title;
}

std::string Book::get_writer() const {
  return writer;
}

int Book::get_price() const {
  return price;
}

int main() {
  Book b("c++", "auther", 3000);
  Book copy(b);

  std::cout << b.get_titile() << " " << b.get_writer() << " " << b.get_price() << std::endl;

  std::cout << copy.get_titile() << " " << copy.get_writer() << " "
            << copy.get_price() << std::endl;
}