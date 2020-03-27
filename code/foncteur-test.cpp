#include <functional>
#include <algorithm>
#include <string>
#include <iostream>
#include <list>

using namespace std;

class isvowel {
public:
  bool operator()(char c) {
    if (c=='a' || c=='e' || c=='i' || c=='u' || c=='i' || c=='y') {
      return true;
    }
    else {
      return false;
    }
  }
};

class containsvowel {
public:
  bool operator()(string const& s) {
    return any_of(s.begin(),s.end(),isvowel());
  }
};

int main() {
  containsvowel cv;
  cout << (cv("ghjg") ? "voyelle" : "pas de voyelle") << endl;
  cout << (cv("fe(rgfgt") ? "voyelle" : "pas de voyelle") << endl;

  list <string > ls; 
  ls.push_back("kfkgike"); 
  ls.push_back("jfjgg"); 
  ls.push_back("i"); 
  ls.push_back("ayrud");

  cout << "nb chaine avec voyelle : " << count_if(ls.begin(),ls.end(),cv);
}

