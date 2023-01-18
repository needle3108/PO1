#pragma once
#include<string>
#include<vector>
#include"student.h"
#include<iostream>

using namespace std;

class School{
    friend class Student;
    public:
        School(string n, int p) : _name(n), _places(p) {};

        string getclass(){
            return _name;
        }

        int getmax(){
            return _places;
        }

        void print(){
            cout<<getclass()<<" - "<<getmax()<<": ";
            if(_accepted.size() == 0){
                cout<<"brak przyjetych";
            }
        }

    private:
        string _name;
        int _places;
        vector<Student*> _accepted;
};