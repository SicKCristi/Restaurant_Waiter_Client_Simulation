#ifndef CEAFA_DE_PORC_H
#define CEAFA_DE_PORC_H
#include "Carne_porc.h"
class Ceafa_de_porc : public Carne_porc
{
protected:
    std::list<std::string> condimente_folosite;
public:
    Ceafa_de_porc();
    Ceafa_de_porc(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Ceafa_de_porc(Carne_porc,std::list<std::string>);
    double pretul() const;
    void afisare() const;
    void set_condimente_folosite(std::list<std::string>);
    std::list<std::string> get_condimente_folosite() const;
};
#endif // CEAFA_DE_PORC_H
