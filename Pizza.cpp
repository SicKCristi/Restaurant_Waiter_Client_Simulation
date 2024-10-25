#include "Pizza.h"
Pizza::Pizza()
:Produse_la_bucata()
{
}
Pizza::Pizza(double pr,double gr,double carb,double pro,int nr,std::list<std::string> t)
:Produse_la_bucata(pr,gr,carb,pro,nr),topping(t)
{
}
Pizza::Pizza(Produse_la_bucata pb,std::list<std::string> t)
:Produse_la_bucata(pb),topping(t)
{
}
void Pizza::afisare() const
{
    Produse_la_bucata::afisare();
    std::cout<<"Ingredientile pentru topping:"<<std::endl;
    int ind=0;
    for(auto it=topping.begin();it!=topping.end();it++)
        std::cout<<"Ingredientul "<<++ind<<": "<<(*it)<<std::endl;
}
double Pizza::get_pretul() const
{
    return Produse_la_bucata::pretul();
}
void Pizza::set_topping(std::list<std::string> t)
{
    topping=t;
}
std::list<std::string> Pizza::get_topping() const
{
    return topping;
}
