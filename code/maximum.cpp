#include <iostream>
using namespace std;

class Elephant {
protected:
    float taille;
public:
    float getTaille() const { return this->taille; }
    void setTaille(float a) { taille = a; }
};


int maximum(int a, int b) {
    if (a>b) {
        return a;
    }
    else {
        return b;
    }
}

template<typename T> T maximumTemplate(const T& a,const T& b) {
  if (a>b) {
    return a;
  }
  else {
    return b;
  }
}

template<> Elephant maximumTemplate(const Elephant&a,const Elephant&b) {
    if (a.getTaille() > b.getTaille()) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    cout << maximumTemplate<double>(2.4,6.5) << endl;
    cout << maximumTemplate<int>(2,4) << endl;

    Elephant e1,e2;
    e1.setTaille(2.5);
    e2.setTaille(2.76);

    maximumTemplate<Elephant>(e1,e2);

    // NB si pas ambuigite, on peut écrire
    cout << maximumTemplate(2,4);
    cout << maximumTemplate(string("titi"),string("toto"));

    cout << maximumTemplate<int>(2.5,4) << endl;
}
