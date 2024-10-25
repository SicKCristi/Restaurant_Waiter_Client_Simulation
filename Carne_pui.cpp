#include "Carne_pui.h"
Carne_pui::Carne_pui()
:Produse_la_gratar()
{
    this->set_rasa_pui("Na");
}
Carne_pui::Carne_pui(double gr,double p,double g,double c,double pro,std::string mg,std::string orig,std::string cresc,std::string h,std::string rp)
:Produse_la_gratar(gr,p,g,c,pro,mg,orig,cresc,h),rasa_pui(rp)
{
}
Carne_pui::Carne_pui(Produse_la_gratar pg,std::string rp)
:Produse_la_gratar(pg),rasa_pui(rp)
{
}
void Carne_pui::afisare() const
{
    Produse_la_gratar::afisare();
    std::cout<<"Rasa puiului: "<<rasa_pui<<std::endl;
}
double Carne_pui::pretul() const
{
    return Produse_la_gratar::pretul();
}
void Carne_pui::set_rasa_pui(std::string rp)
{
    rasa_pui=rp;
}
std::string Carne_pui::get_rasa_pui() const
{
    return rasa_pui;
}
