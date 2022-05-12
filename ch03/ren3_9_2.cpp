#include <iostream>

class S {
  static int count;

public:
  S();

  static int get();
};

int S::count = 0;

S::S() {
  count++;
}

int S::get() {
  return count;
}

int main() {
  S a;
  std::cout << S::get() << std::endl;
}
