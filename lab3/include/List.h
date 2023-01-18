#pragma once

#include<iostream>
#include<vector>
#include<functional>

using namespace std;

class List{
    public:
        List();

        void insert(int);
        void print(string) const;
        void print() const;

        int& operator[](int);

        List filter(std::function<bool(int x)>);


    private:
        vector<int> _list;
        int _size;
};