#pragma once

#include<iostream>

using namespace std;

class Zelazko{
    public:
        Zelazko(string n, const double p, int t, int max) : _name(n), _prize(p), _temp(t), _max_temp(max) {};

        void UstawTemperature(int);
        void Wypisz();

    //zmienne skladowe klasy
        string _name;
        const double _prize;
        int _temp;
        int _max_temp;
};

class Ubranie{
    public:
        Ubranie(string n, const double p, string s, int r, int t) : _name(n), _prize(p), _stan(s), _max_temp(t) {
            if(r == 1) _rekaw = "Dlugi rekaw";
            else _rekaw = "Krotki rekaw";
        }

        Ubranie(string n, const double p, string s, int t, string k) : _name(n), _prize(p), _stan(s), _max_temp(t), _kanty(k) {};

        void Wypisz();
        void SkrocRekawy();
        void Prasuj(const Zelazko);
        void PrasujKanty(const Zelazko);

        void Pogniec(){
            _stan = "Pogniecione";
        }

    private:
        string _name;
        const double _prize;
        string _stan;
        string _rekaw;
        int _max_temp;
        string _kanty;
};