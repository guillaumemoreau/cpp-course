// main de test pour les points

#include <iostream>
using namespace std;

#include "t_point.h"

int main() {
  point<double> p1;
  point<int> p2(2,2);

  cout << p2.norm2() << endl;
}
