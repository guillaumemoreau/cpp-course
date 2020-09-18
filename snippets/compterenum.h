#ifndef _rvcpp_compterenum_h
#define _rvcpp_compterenum_h

#include "compte.h"

class compteremun : public compte {
public:
    virtual void calc_interets();
    compteremun(int n);
};

class livret : public compteremun {
protected:
    float tauxannuel;
public:
    virtual void calc_interets();   
    livret(int n,float t);
};

class ccourantremun : public compteremun {
protected:
    float tauxquotidien;
    float seuil;
public:
    virtual void calc_interets();   
    ccourantremun(int n,float t,float s);
};

#endif
