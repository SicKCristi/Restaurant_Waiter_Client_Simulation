#include "Client.h"
Client::Client()
{
    nume_client="";
    buget=-1;
}
Client::Client(std::string nume, double b)
:nume_client(nume),buget(b)
{
}
void Client::set_nume_client(std::string nume)
{
    nume_client=nume;
}
void Client::set_buget(double b)
{
    buget=b;
}
void Client::afisare_date() const
{
    std::cout<<"Datele despre client:"<<std::endl;
    std::cout<<"Numele clientului:"<<nume_client<<std::endl;
    std::cout<<"Bugetul clientului:"<<buget<<std::endl;
    std::cout<<std::endl;
}
