#ifndef PIZZA_QUATTRO_FORMAGGI_H
#define PIZZA_QUATTRO_FORMAGGI_H
#include "Pizza.h"
class Pizza_quattro_formaggi : public Pizza
{
protected:
    int indice_textura; /// (1-10) cat de buna sa fie textura
public:
    Pizza_quattro_formaggi();
    Pizza_quattro_formaggi(double,double,double,double,int,std::list<std::string>,int);
    Pizza_quattro_formaggi(Pizza,int);
    void afisare() const;
    double pretul() const;
    void set_indice_textura(int);
    int get_indice_textura() const;
};
#endif // PIZZA_QUATTRO_FORMAGGI_H
