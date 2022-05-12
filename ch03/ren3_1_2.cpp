#include <iostream>

class A {
  int a;

public:
  int& get();
  const int& get() const;
};

int& A::get() {
  return a;
}

const int& A::get() const {
  return a;
}

int main() {
  A a;
  a.get();

  const A ca = a;
  ca.get();
}