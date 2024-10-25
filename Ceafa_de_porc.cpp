#include "Ceafa_de_porc.h"
Ceafa_de_porc::Ceafa_de_porc()
:Carne_porc()
{
    condimente_folosite.clear();
}
Ceafa_de_porc::Ceafa_de_porc(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp,std::list<std::string> cf)
:Carne_porc(gr,p,g,c,pro,mg,orig,cresc,h,rp),condimente_folosite(cf)
{
}
Ceafa_de_porc::Ceafa_de_porc(Carne_porc cp,std::list<std::string> cf)
:Carne_porc(cp),condimente_folosite(cf)
{
}
double Ceafa_de_porc::pretul() const
{
    return Carne_porc::pretul();
}
void Ceafa_de_porc::afisare() const
{
    std::cout<<"Informatii despre ceafa de porc:"<<std::endl<<std::endl;
    Carne_porc::afisare();
    std::cout<<"Condimentele folosite la ceafa de porc:"<<std::endl;
    int ind=0;
    for(auto it=condimente_folosite.begin();it!=condimente_folosite.end();it++)
        std::cout<<"Condimentul "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
void Ceafa_de_porc::set_condimente_folosite(std::list<std::string> cf)
{
    condimente_folosite=cf;
}
std::list<std::string> Ceafa_de_porc::get_condimente_folosite() const
{
    return condimente_folosite;
}
