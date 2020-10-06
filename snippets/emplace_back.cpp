#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Person1 {
public:
    string name;
    int age;
 
    Person1() {
        cout << "default constructor Person1" << endl;
        name = "unknown";
        age = -1;
    }
 
    Person1(string n, int a) : name(n), age(a) {
      cout << "construct Person1" << endl;
    }
   
    Person1(const Person1& p) {
      cout << "copy constructor Person1" << endl;
      name = p.name;
      age = p.age;
    }
       
    Person1& operator=(const Person1& p) {
      name = p.name;
      age = p.age;
      cout << "assign Person1" << endl;
      return *this;    
    }
   
    friend ostream& operator<<(ostream& out, Person1& p) {
      out << p.name << ", " << p.age;
      return out;
    }

    /**
   * introduction of a move constructor and use of std::move()
   */    
    Person1(Person1&& p) : name(std::move(p.name)), age(p.age) {
      cout << "move Person1  { " << name << ", " << age << " }" << endl;
    }
};


void test1() {
  vector<Person1> v;
  cout << endl << "PUSH BACK" << endl;
    cout << string(40, '-') << endl;
    cout << "- push back" << endl;
    v.push_back(Person1("Masha", 5));
}

void test2() {
    vector<Person1> v;
    cout << endl << "EMPLACE BACK" << endl; 
    cout << string(40, '-') << endl;
    v.emplace_back(Person1("Masha", 5));
}

int main() {
    test1();
    test2();
}