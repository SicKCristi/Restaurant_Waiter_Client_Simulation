#ifndef CARNE_VITA_H
#define CARNE_VITA_H
#include "Produse_la_gratar.h"
class Carne_vita : public Produse_la_gratar
{
protected:
    std::string rasa_vita;
public:
    Carne_vita();
    Carne_vita(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string);
    Carne_vita(Produse_la_gratar,std::string);
    void afisare() const;
    double pretul() const;
    void set_rasa_vita(std::string);
    std::string get_rasa_vita() const;
};
#endif // CARNE_VITA_H
