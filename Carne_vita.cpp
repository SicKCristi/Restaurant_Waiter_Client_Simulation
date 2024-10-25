#include "Carne_vita.h"
Carne_vita::Carne_vita()
:Produse_la_gratar()
{
    this->set_rasa_vita("Na");
}
Carne_vita::Carne_vita(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rv)
:Produse_la_gratar(gr,p,g,c,pro,mg,orig,cresc,h),rasa_vita(rv)
{
}
Carne_vita::Carne_vita(Produse_la_gratar pg,std::string rv)
:Produse_la_gratar(pg),rasa_vita(rv)
{
}
void Carne_vita::afisare() const
{
    Produse_la_gratar::afisare();
    std::cout<<"Rasa vitei: "<<rasa_vita<<std::endl;
}
double Carne_vita::pretul() const
{
    return Produse_la_gratar::pretul();
}
void Carne_vita::set_rasa_vita(std::string rv)
{
    rasa_vita=rv;
}
std::string Carne_vita::get_rasa_vita() const
{
    return rasa_vita;
}
