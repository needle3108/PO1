#pragma once

#include<iostream>

class AbstractiveClass {
    public:
        virtual void PrintWithValue() = 0;
        virtual double making() = 0;
};

class Primitive : public AbstractiveClass{
    public:
        Primitive() = default;
        Primitive(double value) : _x(value) {};

        void PrintWithValue() override {std::cout<<"";}
        double making() override {return _x;}

        void Set(double value){
            _x = value;
        }

        virtual void print() {std::cout<<_x;}

    private:
        double _x;
};