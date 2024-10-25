#ifndef PIZZA_H
#define PIZZA_H
#include "Produse_la_bucata.h"
class Pizza : public Produse_la_bucata
{
protected:
    std::list<std::string> topping;
public:
    Pizza();
    Pizza(double,double,double,double,int,std::list<std::string>);
    Pizza(Produse_la_bucata,std::list<std::string>);
    void afisare() const;
    double get_pretul() const;
    void set_topping(std::list<std::string>);
    std::list<std::string> get_topping() const;
};
#endif // PIZZA_H
