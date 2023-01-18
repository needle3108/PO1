#pragma once

#include<iostream>
#include<string>

using namespace std;

class File{
    public:
        File(string name) : _name(name), _type("FILE") {}

        string GetName(){
            return _name;
        }

        string GetType(){
            return _type;
        }

    private:
        string _name;
        string _type;
};


