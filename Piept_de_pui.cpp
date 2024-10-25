#include "Piept_de_pui.h"
Piept_de_pui::Piept_de_pui()
:Carne_pui()
{
    condimentele_folosite.clear();
}
Piept_de_pui::Piept_de_pui(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp,std::list<std::string> cf)
:Carne_pui(gr,p,g,c,pro,mg,orig,cresc,h,rp),condimentele_folosite(cf)
{
}
Piept_de_pui::Piept_de_pui(Carne_pui cp,std::list<std::string> cf)
:Carne_pui(cp),condimentele_folosite(cf)
{
}
double Piept_de_pui::pretul() const
{
    return Carne_pui::pretul();
}
void Piept_de_pui::afisare() const
{
    std::cout<<"Informatii despre pieptul de pui:"<<std::endl<<std::endl;
    Produse_la_gratar::afisare();
    std::cout<<"Condimentele folosite la pieptul de pui:"<<std::endl;
    int ind=0;
    for(auto it=condimentele_folosite.begin();it!=condimentele_folosite.end();it++)
        std::cout<<"Condimentul "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
void Piept_de_pui::set_condimentele_folosite(std::list<std::string> cf)
{
    condimentele_folosite=cf;
}
std::list<std::string> Piept_de_pui::get_condimentele_folosite() const
{
    return condimentele_folosite;
}
