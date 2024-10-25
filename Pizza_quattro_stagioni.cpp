#include "Pizza_quattro_stagioni.h"
Pizza_quattro_stagioni::Pizza_quattro_stagioni()
:Pizza()
{
    this->set_indice_topping(1);
}
Pizza_quattro_stagioni::Pizza_quattro_stagioni(double pr,double gr,double carb,double pro,int nr,std::list<std::string> t,int ind)
:Pizza(pr,gr,carb,pro,nr,t)
{
    this->set_indice_topping(ind);
}
Pizza_quattro_stagioni::Pizza_quattro_stagioni(Pizza p,int ind)
:Pizza(p)
{
    this->set_indice_topping(ind);
}
void Pizza_quattro_stagioni::afisare() const
{
    std::cout<<"Informatii despre Pizza Quattro Stagioni:"<<std::endl<<std::endl;
    Pizza::afisare();
    std::cout<<"Indicele de la 1-10 care arata cat de incarcat este toppingul:"<<indice_topping<<std::endl;
    std::cout<<std::endl;
}
double Pizza_quattro_stagioni::pretul() const
{
    return Pizza::pretul();
}
void Pizza_quattro_stagioni::set_indice_topping(int ind)
{
    if(ind>=1 && ind<=10)
        indice_topping=ind;
    else
    {
        do{
            std::cout<<"Dati noul indice: ";
            std::cin>>ind;
            if(ind<1 || ind>10)
                std::cout<<std::endl<<"Indicele introdus nu este in limita data, deci incearca o valoarea din aceasta limita!"<<std::endl;
        }while(ind<1 || ind>10);
        indice_topping=ind;
    }
}
int Pizza_quattro_stagioni::get_indice_topping() const
{
    return indice_topping;
}
