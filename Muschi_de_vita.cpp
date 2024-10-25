#include "Muschi_de_vita.h"
Muschi_de_vita::Muschi_de_vita()
:Carne_vita()
{
    condimentele_folosite.clear();
}
Muschi_de_vita::Muschi_de_vita(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rv,std::list<std::string> cf)
:Carne_vita(gr,p,g,c,pro,mg,orig,cresc,h,rv),condimentele_folosite(cf)
{
}
Muschi_de_vita::Muschi_de_vita(Carne_vita cv,std::list<std::string> cf)
:Carne_vita(cv),condimentele_folosite(cf)
{
}
double Muschi_de_vita::pretul() const
{
    return Carne_vita::pretul();
}
void Muschi_de_vita::afisare() const
{
    std::cout<<"Informatii despre muschi de vita:"<<std::endl<<std::endl;
    Carne_vita::afisare();
    std::cout<<"Condimentele folosite la muschiul de vita:"<<std::endl;
    int ind=0;
    for(auto it=condimentele_folosite.begin();it!=condimentele_folosite.end();it++)
        std::cout<<"Condimentul "<<++ind<<": "<<(*it)<<std::endl;
    std::cout<<std::endl;
}
void Muschi_de_vita::set_condimentele_folosite(std::list<std::string> cf)
{
    condimentele_folosite=cf;
}
std::list<std::string> Muschi_de_vita::get_condimentele_folosite() const
{
    return condimentele_folosite;
}
