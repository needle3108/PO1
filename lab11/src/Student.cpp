#include"school.h"
#include"student.h"
#include<iostream>

Student::Student(string name, int p, initializer_list<School*> s){
    _name = name;
    _points = p;
    _s = s;
    _accepted = NULL;
}

void Student::print(){
    cout<<_name<<": "<<_points<<" [ ";
    for(int i=0; i<_s.size(); i++){
        cout<<_s[i]->_name<<" ";
    }
    cout<<"]";

    if(_accepted == NULL){
        cout<<"--> nieprzyjety\n";
    }
    else{
        cout<<_accepted->_name<<"\n";
    }
}