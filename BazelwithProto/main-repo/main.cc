#include <iostream>
#include "proto/point.pb.h"

int main() {

  my_protos::point::Point p;
  p.set_x(123);
  p.set_y(456);
  std::cout << p.DebugString();

  return 0;
}
