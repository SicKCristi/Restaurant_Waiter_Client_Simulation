#ifndef PRODUSE_LA_GRATAR_H
#define PRODUSE_LA_GRATAR_H
#include "Produse_la_gramaj.h"
class Produse_la_gratar : public Produse_la_gramaj
{
protected:
    std::string mod_gatire;
    std::string tara_origine_carne;
    std::string crescatorie;
    std::string hrana; /// std::vector<std::string> hrana    maybe ???
public:
    Produse_la_gratar();
    Produse_la_gratar(double,double,double,double,double,std::string,std::string,std::string,std::string);
    Produse_la_gratar(Produse_la_gramaj,std::string,std::string,std::string,std::string);
    double pretul() const;
    void afisare() const;
    void set_mod_gatire(std::string);
    void set_tara_origine_carne(std::string);
    void set_crescatorie(std::string);
    void set_hrana(std::string);
    std::string get_mod_gatire() const;
    std::string get_tara_origine_carne() const;
    std::string get_crescatorie() const;
    std::string get_hrana() const;
};
#endif // GRODUSE_LA_GRATAR_H
