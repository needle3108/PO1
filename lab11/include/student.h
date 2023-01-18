#pragma once
#include<string>
#include<vector>
#include<initializer_list>

using namespace std;

class School;

class Student{
    public:
        Student(string, int, std::initializer_list<School*>);

    void print();

    int get(){
        return _points;
    }

    private:
        string _name;
        int _points;
        vector <School*> _s;
        School* _accepted;
};