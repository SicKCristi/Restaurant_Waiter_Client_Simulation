#include "Pulpa_vita.h"
Pulpa_vita::Pulpa_vita()
:Carne_vita()
{
}
Pulpa_vita::Pulpa_vita(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rv,std::list<std::string> cf)
:Carne_vita(gr,p,g,c,pro,mg,orig,cresc,h,rv),condimentele_folosite(cf)
{
}
Pulpa_vita::Pulpa_vita(Carne_vita cv,std::list<std::string> cf)
:Carne_vita(cv),condimentele_folosite(cf)
{
}
void Pulpa_vita::afisare() const
{
    std::cout<<"Informatii despre pulpa de vita:"<<std::endl<<std::endl;
    Carne_vita::afisare();
    std::cout<<"Condimentele folosite la pulpa de vita:"<<std::endl;
    int ind=0;
    for(auto it=condimentele_folosite.begin();it!=condimentele_folosite.end();it++)
        std::cout<<"Condimentul "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
double Pulpa_vita::pretul() const
{
    return Carne_vita::pretul();
}
void Pulpa_vita::set_condimentele_folosite(std::list<std::string> cf)
{
    condimentele_folosite=cf;
}
std::list<std::string> Pulpa_vita::get_condimentele_folosite() const
{
    return condimentele_folosite;
}
