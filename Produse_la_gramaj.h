#ifndef PRODUSE_LA_GRAMAJ_H
#define PRODUSE_LA_GRAMAJ_H
#include "Baza_produse.h"
class Produse_la_gramaj : public Baza_produse
{
protected:
    double gramaj;
public:
    Produse_la_gramaj();
    Produse_la_gramaj(double,double,double,double,double);
    Produse_la_gramaj(Baza_produse,double);
    void afisare() const;
    double pretul() const;
    void set_gramaj(double);
    double get_gramaj() const;
};
#endif // PRODUSE_LA_GRAMAJ_H
