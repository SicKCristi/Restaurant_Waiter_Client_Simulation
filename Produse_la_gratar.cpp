#include "Produse_la_gratar.h"
Produse_la_gratar::Produse_la_gratar()
:Produse_la_gramaj()
{
    this->set_mod_gatire("Na");
    this->set_tara_origine_carne("Na");
    this->set_crescatorie("Na");
    this->set_hrana("Na");
}
Produse_la_gratar::Produse_la_gratar(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h)
:Produse_la_gramaj(gr,p,g,c,pro),mod_gatire(mg),tara_origine_carne(orig),crescatorie(cresc),hrana(h)
{
}
Produse_la_gratar::Produse_la_gratar(Produse_la_gramaj pg,std::string ga,std::string orig,std::string cresc,std::string h)
:Produse_la_gramaj(pg),mod_gatire(ga),tara_origine_carne(orig),crescatorie(cresc),hrana(h)
{
}
double Produse_la_gratar::pretul() const
{
    return Produse_la_gramaj::pretul();
}
void Produse_la_gratar::afisare() const
{
    Produse_la_gramaj::afisare();
    std::cout<<"Modul de gatire a carnii: "<<mod_gatire<<std::endl;
    std::cout<<"Tara de origine a carnii: "<<tara_origine_carne<<std::endl;
    std::cout<<"Locul in care a fost crescut animalul: "<<crescatorie<<std::endl;
}
void Produse_la_gratar::set_mod_gatire(std::string ga)
{
    mod_gatire=ga;
}
void Produse_la_gratar::set_tara_origine_carne(std::string orig)
{
    tara_origine_carne=orig;
}
void Produse_la_gratar::set_crescatorie(std::string cresc)
{
    crescatorie=cresc;
}
void Produse_la_gratar::set_hrana(std::string h)
{
    hrana=h;
}
std::string Produse_la_gratar::get_mod_gatire() const
{
    return mod_gatire;
}
std::string Produse_la_gratar::get_tara_origine_carne() const
{
    return tara_origine_carne;
}
std::string Produse_la_gratar::get_crescatorie() const
{
    return crescatorie;
}
std::string Produse_la_gratar::get_hrana() const
{
    return hrana;
}
