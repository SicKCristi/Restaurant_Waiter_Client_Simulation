#include "Pulpa_pui.h"
Pulpa_pui::Pulpa_pui()
:Carne_pui()
{
}
Pulpa_pui::Pulpa_pui(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp,std::list<std::string> cf)
:Carne_pui(gr,p,g,c,pro,mg,orig,cresc,h,rp),condimentele_folosite(cf)
{
}
Pulpa_pui::Pulpa_pui(Carne_pui cp,std::list<std::string> cf)
:Carne_pui(cp),condimentele_folosite(cf)
{
}
void Pulpa_pui::afisare() const
{
    std::cout<<"Informatii despre pulpa de pui:"<<std::endl<<std::endl;
    Carne_pui::afisare();
    std::cout<<"Condimentele folosite la pulpa de pui:"<<std::endl;
    int ind=0;
    for(auto it=condimentele_folosite.begin();it!=condimentele_folosite.end();it++)
        std::cout<<"Condimentul "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
double Pulpa_pui::pretul() const
{
    return Carne_pui::pretul();
}
void Pulpa_pui::set_condimentele_folosite(std::list<std::string> cf)
{
    condimentele_folosite=cf;
}
std::list<std::string> Pulpa_pui::get_condimentele_folosite() const
{
    return condimentele_folosite;
}
