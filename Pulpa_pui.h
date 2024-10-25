#ifndef PULPE_PUI_H
#define PULPE_PUI_H
#include "Carne_pui.h"
class Pulpa_pui : public Carne_pui
{
protected:
    std::list<std::string> condimentele_folosite;
public:
    Pulpa_pui();
    Pulpa_pui(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Pulpa_pui(Carne_pui,std::list<std::string>);
    void afisare() const;
    double pretul() const;
    void set_condimentele_folosite(std::list<std::string>);
    std::list<std::string> get_condimentele_folosite() const;

};
#endif // PULPE_PUI_H
