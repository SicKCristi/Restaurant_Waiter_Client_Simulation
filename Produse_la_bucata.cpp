#include "Produse_la_bucata.h"
Produse_la_bucata::Produse_la_bucata()
:Baza_produse()
{
    this->set_nr_bucati(-1);
}
Produse_la_bucata::Produse_la_bucata(double pr,double gr,double carb,double pro,int nr)
:Baza_produse(pr,gr,carb,pro),nr_bucati(nr)
{
}
Produse_la_bucata::Produse_la_bucata(Baza_produse bp,int nr)
:Baza_produse(bp),nr_bucati(nr)
{
}
void Produse_la_bucata::afisare() const
{
    std::cout<<"Numarul de bucati: "<<nr_bucati<<std::endl;
    Baza_produse::afisare();
}
double Produse_la_bucata::pretul() const
{
    return nr_bucati*pret;
}
void Produse_la_bucata::set_nr_bucati(int nr)
{
    nr_bucati=nr;
}
int Produse_la_bucata::get_nr_bucati() const
{
    return nr_bucati;
}
