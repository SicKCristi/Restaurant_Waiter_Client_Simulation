#ifndef PIEPT_DE_PUI_H
#define PIEPT_DE_PUI_H
#include "Carne_pui.h"
class Piept_de_pui : public Carne_pui
{
protected:
    std::list<std::string> condimentele_folosite;
public:
    Piept_de_pui();
    Piept_de_pui(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Piept_de_pui(Carne_pui,std::list<std::string>);
    double pretul() const;
    void afisare() const;
    void set_condimentele_folosite(std::list<std::string>);
    std::list<std::string> get_condimentele_folosite() const;
};
#endif // PIEPT_DE_PUI_H
