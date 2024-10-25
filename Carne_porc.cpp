#include "Carne_porc.h"
Carne_porc::Carne_porc()
:Produse_la_gratar()
{
    this->set_rasa_porc("Na");
}
Carne_porc::Carne_porc(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp)
:Produse_la_gratar(gr,p,g,c,pro,mg,orig,cresc,h),rasa_porc(rp)
{
}
Carne_porc::Carne_porc(Produse_la_gratar pg,std::string rp)
:Produse_la_gratar(pg),rasa_porc(rp)
{
}
void Carne_porc::afisare() const
{
    Produse_la_gratar::afisare();
    std::cout<<"Rasa porcului: "<<rasa_porc<<std::endl;
}
double Carne_porc::pretul() const
{
    return Produse_la_gratar::pretul();
}
void Carne_porc::set_rasa_porc(std::string rp)
{
    rasa_porc=rp;
}
std::string Carne_porc::get_rasa_porc() const
{
    return rasa_porc;
}
