#include <iostream>
using namespace std;

#include "comptead.h"

void comptead::setMontantAD(float m) {
    montant_ad = m;
}


bool comptead::debiter(float montant) {
    if (!ib && solde+montant_ad>=montant) {
        solde -= montant;
        return true;
    }
    return false;
}

comptead::comptead(int n) : compte(n) {
    montant_ad = 0.0;
}

void comptead::infos() const {
    compte::infos();
    cout << "montant de l'autorisation de decouvert : " << montant_ad << endl;
}
