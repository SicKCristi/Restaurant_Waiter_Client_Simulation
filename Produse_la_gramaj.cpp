#include "Produse_la_gramaj.h"
Produse_la_gramaj::Produse_la_gramaj()
:Baza_produse()
{
    this->set_gramaj(-1);
}
Produse_la_gramaj::Produse_la_gramaj(double pr,double gr,double carb,double pro,double g)
:Baza_produse(pr,gr,carb,pro),gramaj(g)
{
}
Produse_la_gramaj::Produse_la_gramaj(Baza_produse bp,double g)
:Baza_produse(bp),gramaj(g)
{
}
void Produse_la_gramaj::afisare() const
{
    std::cout<<"Gramajul: "<<gramaj<<std::endl;
    Baza_produse::afisare();
}
double Produse_la_gramaj::pretul() const
{
    return (double)(gramaj/100)*pret;
}
void Produse_la_gramaj::set_gramaj(double g)
{
    gramaj=g;
}
double Produse_la_gramaj::get_gramaj() const
{
    return gramaj;
}
