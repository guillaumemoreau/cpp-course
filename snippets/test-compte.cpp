#include <iostream>
using namespace std;

#include "compte.h"

int main() {
    compte janick(65136);
    janick.crediter(2000.0);
    cout << "solde du compte janick : " << janick.getSolde() << endl;
    if (janick.debiter(1000.0)) {
        cout << "debit autorise" << endl;
    }
    else {
        cout << "operation interdite" << endl;
    }
    cout << "solde du compte janick : " << janick.getSolde() << endl;
    compte *thomas = new compte(45558);
    thomas->crediter(500);
    cout << "solde du compte thomas : " << thomas->getSolde() << endl;
    delete thomas;
}

