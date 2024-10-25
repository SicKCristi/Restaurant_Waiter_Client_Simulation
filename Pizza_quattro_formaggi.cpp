#include "Pizza_quattro_formaggi.h"
Pizza_quattro_formaggi::Pizza_quattro_formaggi()
:Pizza()
{
    this->set_indice_textura(1);
}
Pizza_quattro_formaggi::Pizza_quattro_formaggi(double pr,double gr,double carb,double pro,int nr,std::list<std::string> t,int ind)
:Pizza(pr,gr,carb,pro,nr,t)
{
    this->set_indice_textura(ind);
}
Pizza_quattro_formaggi::Pizza_quattro_formaggi(Pizza p,int ind)
:Pizza(p)
{
    this->set_indice_textura(ind);
}
void Pizza_quattro_formaggi::afisare() const
{
    std::cout<<"Informatii despre Pizza Quattro Formaggi:"<<std::endl<<std::endl;
    Pizza::afisare();
    std::cout<<"Indicele de la 1-10 care arata cat de placuta este textura toppingului:"<<indice_textura<<std::endl;
    std::cout<<std::endl;
}
double Pizza_quattro_formaggi::pretul() const
{
    return Pizza::pretul();
}
void Pizza_quattro_formaggi::set_indice_textura(int ind)
{
    if(ind>=1 && ind<=10)
        indice_textura=ind;
    else
    {
        do{
            std::cout<<std::endl<<"Indicele introdus nu este in limita data, deci incearca o valoarea din aceasta limita!"<<std::endl;
            std::cout<<"Dati noul indice: ";
            std::cin>>ind;
        }while(ind<1 || ind>10);
        indice_textura=ind;
    }
}
int Pizza_quattro_formaggi::get_indice_textura() const
{
    return indice_textura;
}
