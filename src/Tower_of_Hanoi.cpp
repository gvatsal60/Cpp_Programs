#include "Tower_of_Hanoi.h"

void TowerOfHanoi::TOH(int val, str firstVal, str secondVal, str thirdVal) const {
  if (val > 0) {
    TOH(val - 1, firstVal, thirdVal, secondVal);
    std::cout << "(" << firstVal << ", " << thirdVal << ")" << std::endl;
    TOH(val - 1, secondVal, firstVal, thirdVal);
  }
}

#if 1
int main(int argc, char const *argv[]) {
  TowerOfHanoi toh;
  int n;

  std::cout << "Enter No. of Disks: ";
  std::cin >> n;
  toh.TOH(n, "1", "2", "3");

  return 0;
}
#endif
