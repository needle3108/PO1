#pragma once

#include<iostream>
#include"Argumenty.h"
#include"Algo.h"

class Suma : public Algo{
    public:
        Suma() = default;

        Argumenty wykonaj(Argumenty a) const{
            double sum = 0.0;

            for(int i=0; i<a._wektor.size(); i++){
                sum+=a._wektor[i];
            }

            Argumenty b(1);
            b(0, sum);

            return b;
        }

        Algo* sklonuj(){
            return new Suma(*this);
        }
};