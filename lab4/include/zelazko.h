#pragma once

#include "main.h"

using namespace std;

class ZelazkoPhilips : public Zelazko{
    public:
        ZelazkoPhilips(const double c) : Zelazko("Philips", c, 0, 5) {};
};

class ZelazkoTefal : public Zelazko{
    public:
        ZelazkoTefal(const double c) : Zelazko("Tefal", c, 0, 7) {};
};