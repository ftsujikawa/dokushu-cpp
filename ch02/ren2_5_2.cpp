#include <iostream>

class C {
  using integer = int;
  integer value;

public:
  integer getter();
  void setter(integer new_value);
};

C::integer C::getter() {
  return value;
}
void C::setter(C::integer i) {
  value = i;
}

int main() {
  C c;
  c.setter(10);
  std::cout << c.getter() << std::endl;
}