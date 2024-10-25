#ifndef CARNE_PORC_H
#define CARNE_PORC_H
#include "Produse_la_gratar.h"
class Carne_porc : public Produse_la_gratar
{
protected:
    std::string rasa_porc;
public:
    Carne_porc();
    Carne_porc(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string);
    Carne_porc(Produse_la_gratar,std::string);
    void afisare() const;
    double pretul() const;
    void set_rasa_porc(std::string);
    std::string get_rasa_porc() const;
};
#endif // CARNE_PORC_H
