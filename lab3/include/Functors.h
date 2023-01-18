#pragma once

#include<iostream>

class DivisibleBy{
    public:
        DivisibleBy(int x) : _div(x) {};
        bool operator()(int value) {return value % _div == 0;};

    private:
        int _div;
};

class GreaterThan{
    public:
        GreaterThan(int x) : _than(x) {};
        bool operator()(int value) {return value > _than;};

    private:
        int _than;    
};