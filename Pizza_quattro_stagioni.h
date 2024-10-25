#ifndef PIZZA_QUATTRO_STAGIONI_H
#define PIZZA_QUATTRO_STAGIONI_H
#include "Pizza.h"
class Pizza_quattro_stagioni : public Pizza
{
protected:
    int indice_topping; /// (1-10) cat de incarcat sa fie toppingul
public:
    Pizza_quattro_stagioni();
    Pizza_quattro_stagioni(double,double,double,double,int,std::list<std::string>,int);
    Pizza_quattro_stagioni(Pizza,int);
    void afisare() const;
    double pretul() const;
    void set_indice_topping(int);
    int get_indice_topping() const;
};
#endif // PIZZA_QUATTRO_STAGIONI_H
