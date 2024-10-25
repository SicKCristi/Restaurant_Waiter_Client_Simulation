#include "Client.h"
#include "Baza_produse.h"
#include "Produse_la_bucata.h"
#include "Produse_la_gratar.h"
#include "Carne_porc.h"
#include "Carne_pui.h"
#include "Carne_vita.h"
#include "Piept_de_pui.h"
#include "Ceafa_de_porc.h"
#include "Carnaciori.h"
#include "Muschi_de_vita.h"
#include "Cotlet_de_porc.h"
#include "Pulpa_pui.h"
#include "Pulpa_vita.h"
#include "Pizza.h"
#include "Pizza_quattro_stagioni.h"
#include "Pizza_quattro_formaggi.h"
#include "Pizza_vegetala.h"
#include "Pizza_diavola.h"
#include "Pizza_prosciutto_e_funghi.h"
#include "Pizza_napolitana.h"
#include "Pizza_casei.h"
#include "Functii_ajutatoare.h"

#define NR_LINII 120
#define NR_CLINTI 4

int main()
{
    std::string nume="Marcel";
    double buget=200;

    Client c1(nume,buget);
    ///c1.afisare_date();

    /*system("pause");
    system("cls");*/

    double pret=15.5;
    double grasimi=10.2;
    double carbohidrati=2.25;
    double proteine=25;

    Baza_produse bp1(pret,grasimi,carbohidrati,proteine);
    ///bp1.afisare();

    /*system("pause");
    system("cls");*/

    int gramaj=150.5;

    Produse_la_gramaj pgr1(pret,grasimi,carbohidrati,proteine,gramaj);
    ///pgr1.afisare();

    /*system("pause");
    system("cls");*/

    int nr_bucati=1;

    Produse_la_bucata pb1(pret,grasimi,carbohidrati,proteine,nr_bucati);
    ///pb1.afisare();

    /*system("pause");
    system("cls");*/

    std::string mod_gatire("bine facuta");
    std::string tara_origine_carne("Romania");
    std::string crescatorie("ferma");
    std::string hrana("porumb");

    Produse_la_gratar pg1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana);
    ///pg1.afisare();

    /*system("pause");
    system("cls");*/

    std::string rasa_porc("romanesc");

    Carne_porc cp1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_porc);
    ///cp1.afisare();

    /*system("pause");
    system("cls");*/
    std::string rasa_vita("de munte");

    Carne_vita cv1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_vita);
    ///cv1.afisare();

    /*system("pause");
    system("cls");*/

    std::string rasa_pui("de carne");

    Carne_pui cpui1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_pui);
    ///cpui1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> condimente_folosite_piept_pui;
    condimente_folosite_piept_pui.push_back("Sare");
    condimente_folosite_piept_pui.push_back("Piper negru");
    condimente_folosite_piept_pui.push_back("Usturoi granulat");
    condimente_folosite_piept_pui.push_back("Cimbru");

    Piept_de_pui pui1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_vita,condimente_folosite_piept_pui);
    ///pui1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> condimente_folosite_muschi_vita;
    condimente_folosite_muschi_vita.push_back("Sare");
    condimente_folosite_muschi_vita.push_back("Piper negru");
    condimente_folosite_muschi_vita.push_back("Usturoi granulat");
    condimente_folosite_muschi_vita.push_back("Cimbru");
    condimente_folosite_muschi_vita.push_back("Rozmarin");

    Muschi_de_vita muschiv1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_vita,condimente_folosite_muschi_vita);
    ///muschiv1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> condimente_folosite_ceafa_porc;
    condimente_folosite_ceafa_porc.push_back("Sare");
    condimente_folosite_ceafa_porc.push_back("Piper negru");
    condimente_folosite_ceafa_porc.push_back("Sos marinat");

    Ceafa_de_porc ceafa1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_porc,condimente_folosite_ceafa_porc);
    ///ceafa1.afisare();

    /*system("pause");
    system("cls");*/

    std::string tip_carnaciori("oltenesti");
    std::list<std::string> alimente_vegetale_folosite;
    alimente_vegetale_folosite.push_back("Boabe mustar");
    alimente_vegetale_folosite.push_back("Soia");

    Carnaciori carnaciori1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_porc,tip_carnaciori,alimente_vegetale_folosite);
    ///carnaciori1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> condimente_folosite_cotlet_de_porc;
    condimente_folosite_cotlet_de_porc.push_back("Sare");
    condimente_folosite_cotlet_de_porc.push_back("Piper negru");
    condimente_folosite_cotlet_de_porc.push_back("Boia de ardei dulce");

    Cotlet_de_porc cotlet1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_porc,condimente_folosite_cotlet_de_porc);
    ///cotlet1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> condimente_folosite_pulpa_pui;
    condimente_folosite_pulpa_pui.push_back("Sare");
    condimente_folosite_pulpa_pui.push_back("Piper negru");
    condimente_folosite_pulpa_pui.push_back("Boia de ardei dulce");
    condimente_folosite_pulpa_pui.push_back("Usturoi granulat");

    Pulpa_pui pulpa_pui1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_pui,condimente_folosite_pulpa_pui);
    ///pulpa_pui1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> condimente_folosite_pulpa_vita;
    condimente_folosite_pulpa_vita.push_back("Sare");
    condimente_folosite_pulpa_vita.push_back("Piper negru");
    condimente_folosite_pulpa_vita.push_back("Boia de ardei dulce");
    condimente_folosite_pulpa_vita.push_back("Usturoi granulat");

    Pulpa_vita pulpa_vita1(pret,grasimi,carbohidrati,proteine,gramaj,mod_gatire,tara_origine_carne,crescatorie,hrana,rasa_vita,condimente_folosite_pulpa_vita);
    ///pulpa_vita1.afisare();

    /*system("pause");
    system("cls");*/

    std::list<std::string> topping;
    topping.push_back("Mozzarella");
    topping.push_back("Sos rosii");
    topping.push_back("Ciuperci");
    topping.push_back("Peperonni");
    topping.push_back("Ardei");
    topping.push_back("Ciuperci");

    Pizza pizza1(pret,grasimi,carbohidrati,proteine,nr_bucati,topping);
    ///pizza1.afisare();

    /// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    /// Idee la pizza-uri-le din meniu
    /// Daca se alege un anumit tip de pizza
    /// Se vor pune by default iingredientele cheie
    /// Dar putem lasa clientul sa pune si elemente extra
    /// Dar ele trebuie sa fie prezente intr-o lista cu topping-uri pentru pizza
    /// Daca topping pe care clientul vrea sa il adauge este, atunci il punem
    /// Altfel, ii spunem ca nu se poate
    /// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

    /*system("pause");
    system("cls");*/

    int indice_topping=5;

    topping.clear();
    topping.push_back("Mozzarella");
    topping.push_back("Prosciutto");
    topping.push_back("Ciuperci");
    topping.push_back("Anghinare");
    topping.push_back("Masline negre");
    topping.push_back("Masline verzi");
    topping.push_back("Sos rosii");

    Pizza_quattro_stagioni pqs1(pret,grasimi,carbohidrati,proteine,nr_bucati,topping,indice_topping);
    ///pqs1.afisare();

    /*system("pause");
    system("cls");*/

    int indice_textura=8;

    topping.clear();
    topping.push_back("Mozzarella");
    topping.push_back("Gorgonzola");
    topping.push_back("Parmezan");
    topping.push_back("Ricotta");
    topping.push_back("Prosciutto");
    topping.push_back("Ciuperci");
    topping.push_back("Sos rosii");

    Pizza_quattro_formaggi pqf1(pret,grasimi,carbohidrati,proteine,nr_bucati,topping,indice_textura);
    pqf1.afisare();

    /*system("pause");
    system("cls");*/

    std::vector<Baza_produse*> meniu;

    meniu.push_back(new Baza_produse(bp1));
    meniu.push_back(new Produse_la_gramaj(pgr1));
    meniu.push_back(new Produse_la_bucata(pb1));
    meniu.push_back(new Produse_la_gratar(pg1));
    meniu.push_back(new Carne_porc(cp1));
    meniu.push_back(new Carne_vita(cv1));
    meniu.push_back(new Carne_pui(cpui1));
    meniu.push_back(new Piept_de_pui(pui1));
    meniu.push_back(new Ceafa_de_porc(ceafa1));
    meniu.push_back(new Muschi_de_vita(muschiv1));
    meniu.push_back(new Carnaciori(carnaciori1));
    meniu.push_back(new Cotlet_de_porc(cotlet1));
    meniu.push_back(new Pulpa_pui(pulpa_pui1));
    meniu.push_back(new Pulpa_vita(pulpa_vita1));
    meniu.push_back(new Pizza_quattro_stagioni(pqs1));
    meniu.push_back(new Pizza_quattro_formaggi(pqf1));

    /*

    /// Meniul inainte de sortarea in functie de pret
    std::cout<<"Meniul inainte de sortare:"<<std::endl<<std::endl;
    afisare_meniu(meniu);

    /// Sortarea meniului folosind o expresie lambda
    sortare_cu_lambda(meniu);

    /// Meniul dupa sortarea in functie de pret
    std::cout<<"Meniul dupa sortare in functie de pret:"<<std::endl<<std::endl;
    afisare_meniu(meniu);

    */

    /*

    std::string bare(NR_LINII,'-');
    std::cout<<bare<<std::endl<<bare<<std::endl;

    */

    return 0;
}
