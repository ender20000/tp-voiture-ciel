#include<iostream>
using namespace std;

class CVoiture
{
private:
    string carburant;
    string marque;
    string modele;
    int puissance;
    int vitesse;

public:  
    void accelerer(int kmh);
    void affiche();
    void arreter();
    void demmarer();
    void ralentir(int kmh);

    CVoiture(string ncarburant, string nmarque, int npuissance, string nmodele){
        carburant = ncarburant;
        marque = nmarque;
        modele = nmodele;
        puissance = npuissance;
    }
};