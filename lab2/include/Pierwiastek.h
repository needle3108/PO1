#pragma once

#include<iostream>
#include"Argumenty.h"
#include"Algo.h"
#include<cmath>

class Pierwiastek : public Algo{
    public:
        Pierwiastek() = default;

        Argumenty wykonaj(Argumenty a) const{
            for(int i=0; i<a._wektor.size(); i++){
                a._wektor[i] = sqrt(a._wektor[i]);
            }

            return a;
        }

        Pierwiastek* sklonuj(){
            return new Pierwiastek(*this);
        }
};