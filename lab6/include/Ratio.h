#pragma once

#include<iostream>
#include"Primitive.h"

class Ratio : public Primitive{
    public:
        Ratio() = default;
        Ratio(Primitive &o1, Primitive &o2) : _object1(&o1), _object2(&o2) {};

        double making() override{
            return _object1->making() / _object2->making();
        }

        void print() final{
            std::cout<<"(";
            _object1->print();
            std::cout<<"/";
            _object2->print();
            std::cout<<")";
        }

        void PrintWithValue() final{
            std::cout<<"(";
            _object1->print();
            std::cout<<"/";
            _object2->print();
            std::cout<<") = "<<making()<<std::endl;
        }

    private:
        Primitive *_object1;
        Primitive *_object2;
};