#pragma once

#include<iostream>
#include"Argumenty.h"

using namespace std;

class Algo{
    public:
        virtual Argumenty wykonaj(Argumenty a) const{
            return a;
        }

        virtual Algo* sklonuj(){
            return new Algo;
        }
};