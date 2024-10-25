#ifndef PULPA_VITA_H
#define PULPA_VITA_H
#include "Carne_vita.h"
class Pulpa_vita : public Carne_vita
{
protected:
    std::list<std::string> condimentele_folosite;
public:
    Pulpa_vita();
    Pulpa_vita(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Pulpa_vita(Carne_vita,std::list<std::string>);
    void afisare() const;
    double pretul() const;
    void set_condimentele_folosite(std::list<std::string>);
    std::list<std::string> get_condimentele_folosite() const;
};
#endif // PULPA_VITA_H
