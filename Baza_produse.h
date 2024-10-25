#ifndef BAZA_PRODUSE_H
#define BAZA_PRODUSE_H
#include <iostream>
#include <iomanip>
#include <string>
#include <list>
class Baza_produse
{
protected:
    double grasimi;
    double carbohidrati;
    double proteine;
    double pret;
public:
    Baza_produse();
    Baza_produse(double,double,double,double);
    void set_grasimi(double);
    void set_carbohidrati(double);
    void set_proteine(double);
    void set_pret(double);
    double get_grasimi() const;
    double get_carbohidrati() const;
    double get_proteine() const;
    double get_pret() const;
    virtual void afisare() const;
    virtual double pretul() const;
};
#endif // BAZA_PRODUSE_H
