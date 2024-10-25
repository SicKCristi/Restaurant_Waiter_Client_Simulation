#include "Functii_ajutatoare.h"
void sortare_cu_lambda(std::vector<Baza_produse*> &meniu)
{
    sort(meniu.begin(),meniu.end(),[](Baza_produse *a1,Baza_produse *a2)
    {
        return a1->pretul()<a2->pretul();
    });
}
void afisare_meniu(const std::vector<Baza_produse*> &meniu)
{
    std::vector<Baza_produse*>::const_iterator it;
    int i=0;
    for(it=meniu.begin();it!=meniu.end();it++)
    {
        std::cout<<"Produsul "<<++i<<" din vector este:"<<std::endl<<std::endl;
        (*it)->afisare();
        system("pause");
        system("cls");
    }
}
