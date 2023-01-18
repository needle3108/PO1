#pragma once

#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Argumenty{
    friend class Suma;
    friend class Pierwiastek;

    public:
        Argumenty(int);
        Argumenty(int, double);

        void print(const string) const;
        void print(const string, ostream&);

        Argumenty& operator()(int, double);

    private:
        vector<double> _wektor;
};