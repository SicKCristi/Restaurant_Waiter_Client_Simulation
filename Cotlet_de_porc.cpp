#include "Cotlet_de_porc.h"
Cotlet_de_porc::Cotlet_de_porc()
:Carne_porc()
{
}
Cotlet_de_porc::Cotlet_de_porc(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp,std::list<std::string> cf)
:Carne_porc(gr,p,g,c,pro,mg,orig,cresc,h,rp),condimentele_folosite(cf)
{
}
Cotlet_de_porc::Cotlet_de_porc(Carne_porc cp,std::list<std::string> cf)
:Carne_porc(cp),condimentele_folosite(cf)
{
}
void Cotlet_de_porc::afisare() const
{
    std::cout<<"Informatii despre cotletul de porc:"<<std::endl<<std::endl;
    Carne_porc::afisare();
    std::cout<<"Lista cu condimentele folosite:"<<std::endl;
    int ind=0;
    for(auto it=condimentele_folosite.begin();it!=condimentele_folosite.end();it++)
        std::cout<<"Condimentul "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
double Cotlet_de_porc::pretul() const
{
    return Carne_porc::pretul();
}
void Cotlet_de_porc::set_condimetele_folosite(std::list<std::string> cf)
{
    condimentele_folosite=cf;
}
std::list<std::string> Cotlet_de_porc::get_condimentele_folosite() const
{
    return condimentele_folosite;
}
