#pragma once

#include<iostream>
#include<functional>
#include<vector>

using namespace std;

class FilterCriteria{
    public:
        FilterCriteria();

        void add(std::function<bool(int x)>);
        int size();
        std::function<bool(int x)> get(int);


    private:
        std::vector<std::function<bool(int x)>> _crit;
        int _size;
};