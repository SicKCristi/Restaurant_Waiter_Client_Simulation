#include "Carnaciori.h"
Carnaciori::Carnaciori()
:Carne_porc()
{
    this->set_tip_carnaciori("Na");
    alimentele_vegetale.clear();
}
Carnaciori::Carnaciori(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp,std::string tc,std::list<std::string> av)
:Carne_porc(gr,p,g,c,pro,mg,orig,cresc,h,rp),tip_carnaciori(tc),alimentele_vegetale(av)
{
}
Carnaciori::Carnaciori(Carne_porc cp,std::string tc,std::list<std::string> av)
:Carne_porc(cp),tip_carnaciori(tc),alimentele_vegetale(av)
{
}
double Carnaciori::pretul() const
{
    return Carne_porc::pretul();
}
void Carnaciori::afisare() const
{
    std::cout<<"Informatii despre carnaciorii de porc:"<<std::endl<<std::endl;
    std::cout<<"Tipul de carnacior: "<<tip_carnaciori<<std::endl;
    Carne_porc::afisare();
    std::cout<<"Alimentele vegetale folosite in carnaciori:"<<std::endl;
    int ind=0;
    for(auto it=alimentele_vegetale.begin();it!=alimentele_vegetale.end();it++)
        std::cout<<"Alimentul vegetal "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
void Carnaciori::set_tip_carnaciori(std::string carnaciori)
{
    tip_carnaciori=carnaciori;
}
void Carnaciori::set_alimentele_vegetale(std::list<std::string> av)
{
    alimentele_vegetale=av;
}
std::string Carnaciori::get_tip_carnaciori() const
{
    return tip_carnaciori;
}
std::list<std::string> Carnaciori::get_alimentul_vegetal() const
{
    return alimentele_vegetale;
}
