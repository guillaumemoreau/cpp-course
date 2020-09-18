#include "compte.h"
#include "compterenum.h"

void compteremun::calc_interets() {
    // do noting
}

compteremun::compteremun(int n) : compte(n) {
    // do nothing
}

void livret::calc_interets() {
    solde += solde*(1.0+tauxannuel);
}

livret::livret(int n,float t) : compteremun(n) {
    tauxannuel = t;
}

ccourantremun::ccourantremun(int n,float t,float s) : compteremun(n) {
    tauxquotidien = t;
    seuil = s;
}

void ccourantremun::calc_interets() {
    if (solde > seuil) {
        solde += (solde-seuil)*(1.0+tauxquotidien);
    }
}

