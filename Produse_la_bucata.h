#ifndef PRODUSE_LA_BUCATA_H
#define PRODUSE_LA_BUCATA_H
#include "Baza_produse.h"
class Produse_la_bucata : public Baza_produse
{
protected:
    int nr_bucati;
public:
    Produse_la_bucata();
    Produse_la_bucata(double,double,double,double,int);
    Produse_la_bucata(Baza_produse,int);
    void afisare() const;
    double pretul() const;
    void set_nr_bucati(int);
    int get_nr_bucati() const;
};
#endif // PRODUSE_LA_BUCATA_H
