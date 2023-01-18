#pragma once

#include"main.h"

using namespace std;

class KoszulaBawelniana : public Ubranie{
    public:
        KoszulaBawelniana(const double p, int r) : Ubranie("Koszula bawelniana", p, "Pogniecione", r, 7) {};
};

class KoszulaJedwabna : public Ubranie{
    public:
        KoszulaJedwabna(const double p, int r) : Ubranie("Koszula jedwabna", p, "Pogniecione", r, 3) {};
};

class SpodnieBawelniane : public Ubranie{
    public:
        SpodnieBawelniane(const double p) : Ubranie("Spodnie bawelniane", p, "Pogniecione", 7, "Brak kantow") {};
};

class SpodnieJedwabne: public Ubranie{
    public:
        SpodnieJedwabne(const double p) : Ubranie("Spodnie jedwabne", p, "Pogniecione", 3, "Brak kantow") {};
};