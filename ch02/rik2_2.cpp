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

vector3d::element_type vector3d::getX() {
  return x;
}
void setX(vector3d::element_type x) {
  x = x;
}
vector3d::element_type vector3d::getY() {
  return y;
}
void setY(vector3d::element_type y) {
  y = y;
}
vector3d::element_type vector3d::getZ() {
  return z;
}
void setZ(vector3d::element_type z) {
  z = z;
}

int main() {

}