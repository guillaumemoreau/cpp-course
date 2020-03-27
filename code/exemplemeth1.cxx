/**
   file : exemplemeth1.cxx

   classe simple avec methodes declarees a l'interieur de celle-ci

*/

#include <iostream>
using namespace std;

class exemplemeth1 {
public:
  void methode1(int a,int b) {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
  }

  int somme(int a,int b) {
    return a+b;
  }
};

int main() {
  int x,y;
  cin >> x >> y;
  exemplemeth1 t;
  t.methode1(x,y);
  cout << t.somme(x,y) << endl;
}
