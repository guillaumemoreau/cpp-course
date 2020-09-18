#include <iostream>
#include <list>
using namespace std;

#include "compterenum.h"

int main() {
    list<compteremun*> agence;
    agence.push_back(new livret(1,0.03));
    agence.push_back(new ccourantremun(1,0.001,1500.0));

    for (compteremun* & c : agence) {
        c->calc_interets();
    }

}