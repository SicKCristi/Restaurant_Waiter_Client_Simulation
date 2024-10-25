#ifndef COTLET_DE_PORC_H
#define COTLET_DE_PORC_H
#include "Carne_porc.h"
class Cotlet_de_porc : public Carne_porc
{
protected:
    std::list<std::string> condimentele_folosite;
public:
    Cotlet_de_porc();
    Cotlet_de_porc(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Cotlet_de_porc(Carne_porc,std::list<std::string>);
    void afisare() const;
    double pretul() const;
    void set_condimetele_folosite(std::list<std::string>);
    std::list<std::string> get_condimentele_folosite() const;

};
#endif // COTLET_DE_PORC_H
