#ifndef rvcpp_compte_h
#define rvcpp_compte_h

class compte {
protected:
    float solde;
    bool ib;
    int numero;

public:
    float getSolde();
    int getNumero();

    void crediter(float montant);
    bool debiter(float montant);

    virtual void infos();
    
    // constructeurs
    compte(int numero);

    // destructeur
    ~compte();

};

#endif

