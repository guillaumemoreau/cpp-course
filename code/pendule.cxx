/**
   file : pendule.cxx

   une classe de pendule toute simple en un seul fichier source. non recommandable...

*/

#include <iostream>
using namespace std;

class pendule {
private:
  int annee;
  int mois;
  int jour;
  int heure;
  int minute;
  int seconde;
  
public:
  // accesseurs en lecture
  int getAnnee()    { return annee; }
  int getMois()     { return mois; }
  int getJour()     { return jour; }
  int getHeure()    { return heure; }
  int getMinute()   { return minute; }
  int getSeconde()  { return seconde; }

  // accesseurs en ecriture
  void setAnnee(int annee)     { this->annee = annee; }
  void setMois(int mois)       { this->mois = mois; }
  void setJour(int jour)       { this->jour = jour; }
  void setHeure(int heure)     { this->heure = heure; }
  void setMinute(int minute)   { this->minute = minute; }
  void setSeconde(int seconde) { this->seconde = seconde; }

  // constructeur
  pendule(int annee,int mois, int jour,int heure,int minute,int seconde) {
    this->annee = annee;
    this->mois = mois;
    this->jour = jour;
    this->heure = heure;
    this->minute = minute;
    this->seconde = seconde;
  }

  // affichage
  void print() {
    cout << jour << "/" << mois << "/" << annee << " " << heure << ":" << minute << ":" << seconde << endl;
  }
};

int main() {
  pendule p(2014,9,1,15,50,21);
  p.print();
}

