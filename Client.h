#pragma once
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
#include <string>
#include <vector>
#include <queue>
#include <set>

class Client
{
private:
    std::string nume_client;
    double buget;
public:
    Client();
    Client(std::string,double);
    void afisare_date() const;
    void set_nume_client(std::string);
    void set_buget(double);
};
