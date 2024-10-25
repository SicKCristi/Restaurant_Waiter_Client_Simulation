#ifndef MUSCHI_DE_VITA_H
#define MUSCHI_DE_VITA_H
#include "Carne_vita.h"
class Muschi_de_vita : public Carne_vita
{
protected:
    std::list<std::string> condimentele_folosite;
public:
    Muschi_de_vita();
    Muschi_de_vita(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Muschi_de_vita(Carne_vita,std::list<std::string>);
    double pretul() const;
    void afisare() const;
    void set_condimentele_folosite(std::list<std::string>);
    std::list<std::string> get_condimentele_folosite() const;
};
#endif // MUSCHI_DE_VITA_H
