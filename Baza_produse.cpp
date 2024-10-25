#include "Baza_produse.h"
Baza_produse::Baza_produse()
{
    this->set_pret(-1);
    this->set_grasimi(-1);
    this->set_carbohidrati(-1);
    this->set_proteine(-1);
}
Baza_produse::Baza_produse(double pr,double gr,double carb,double pro)
:pret(pr),grasimi(gr),carbohidrati(carb),proteine(pro)
{
}
void Baza_produse::set_grasimi(double gr)
{
    grasimi=gr;
}
void Baza_produse::set_carbohidrati(double carb)
{
    carbohidrati=carb;
}
void Baza_produse::set_proteine(double pro)
{
    proteine=pro;
}
void Baza_produse::set_pret(double pr)
{
    pret=pr;
}
double Baza_produse::get_grasimi() const
{
    return grasimi;
}
double Baza_produse::get_carbohidrati() const
{
    return carbohidrati;
}
double Baza_produse::get_proteine() const
{
    return proteine;
}
double Baza_produse::get_pret() const
{
    return pret;
}
void Baza_produse::afisare() const
{
    std::string aliniere(3,' ');
    std::cout<<"Pretul pentru produs: "<<pret<<std::endl;
    std::cout<< "MACRONUTRIENTI:"<<std::endl;
    std::cout<<aliniere<<"Grasimi: "<<grasimi<<std::endl;
    std::cout<<aliniere<<"Carbohidrati: "<<carbohidrati<<std::endl;
    std::cout<<aliniere<<"Proteine: "<<proteine<<std::endl;
}
double Baza_produse::pretul() const
{
    return 0;
}
