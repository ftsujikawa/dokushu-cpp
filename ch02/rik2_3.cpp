#include <iostream>

class vector3d {
public:
  using element_type = int;

private:
  element_type x;
  element_type y;
  element_type z;

public:
  element_type getX();
  void setX(element_type x);
  element_type getY();
  void setY(element_type y);
  element_type getZ();
  void setZ(element_type z);
};

vector3d::element_type vector3d::getX() { return x; }
void vector3d::setX(vector3d::element_type X) { x = X; }
vector3d::element_type vector3d::getY() { return y; }
void vector3d::setY(vector3d::element_type Y) { y = Y; }
vector3d::element_type vector3d::getZ() { return z; }
void vector3d::setZ(vector3d::element_type Z) { z = Z; }

int main() {
  int x = 0, y = 0, z = 0;

  std::cin >> x >> y >> z;

  vector3d vec;
  vec.setX(x);
  vec.setY(y);
  vec.setZ(z);
}