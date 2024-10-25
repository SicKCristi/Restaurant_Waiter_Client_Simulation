#ifndef CARNE_PUI_H
#define CARNE_PUI_H
#include "Produse_la_gratar.h"
class Carne_pui : public Produse_la_gratar
{
protected:
    std::string rasa_pui;
public:
    Carne_pui();
    Carne_pui(double,double,double,double,double,std::string,std::string,std::string,std::string,std::string);
    Carne_pui(Produse_la_gratar,std::string);
    void afisare() const;
    double pretul() const;
    void set_rasa_pui(std::string);
    std::string get_rasa_pui() const;
};
#endif // CARNE_PUI_H
