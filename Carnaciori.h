#ifndef CARNACIORI_H
#define CARNACIORI_H
#include "Carne_porc.h"
class Carnaciori : public Carne_porc
{
protected:
    std::string tip_carnaciori;
    std::list<std::string> alimentele_vegetale;
public:
    Carnaciori();
    Carnaciori(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string,std::string,std::list<std::string>);
    Carnaciori(Carne_porc,std::string,std::list<std::string>);
    double pretul() const;
    void afisare() const;
    void set_tip_carnaciori(std::string);
    void set_alimentele_vegetale(std::list<std::string>);
    std::string get_tip_carnaciori() const;
    std::list<std::string> get_alimentul_vegetal() const;
};
#endif // CARNACIORI_H
