#include <iostream>
using namespace std; 

int main() {
    unique_ptr<int> p1(new int); 

    *p1 = 2;
    cout << "p1 = "  << *p1 << endl;

    // ATTENTION
    //unique_ptr<int> p2(p1.get());

    // move pour transferer a une nouvelle reference 
    unique_ptr<int> p2(std::move(p1)); 

    // on ne peut plus l'utiliser sous l'ancien nom 
    //cout << "p1 = "  << *p1 << endl;
    
    *p2 = 7;
    cout << "p2 = " << *p2 << endl;
    // on rend la reference a p1
    p1 = std::move(p2);
    cout << "p1 = " << *p1 << endl;

    // partie sur les smart pointers 
    shared_ptr<int> x1(new int);
    shared_ptr<int> x2(x1);
    shared_ptr<int> x3(x1);
 
    *x1 = 1;
    *x2 = 2;
    *x3 = 3;
    cout << "int is referenced " << x1.use_count() << " time(s)" << endl;

    return 0;
}