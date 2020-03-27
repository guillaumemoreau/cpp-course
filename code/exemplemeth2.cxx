/**
   file : exemplemeth1.cxx

   classe simple avec methodes declarees a l'interieur de celle-ci

*/

#include <iostream>
using namespace std;

#include "exemplemeth2.h"

void exemplemeth2::methode1(int a,int b) {
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;
}

int exemplemeth2::somme(int a,int b) {
  return a+b;
}

int main() {
  int x,y;
  cin >> x >> y;
  exemplemeth2 t;
  t.methode1(x,y);
  cout << t.somme(x,y) << endl;
}
