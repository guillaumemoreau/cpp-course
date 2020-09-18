
#ifndef _rvcpp_comptead_h
#define _rvcpp_comptead_h 

#include "compte.h"



class comptead : public compte {
protected:
    float montant_ad;

public:
    bool debiter(float montant);
    void infos() const;
    void setMontantAD(float m);
    comptead(int numero);
};

#endif
