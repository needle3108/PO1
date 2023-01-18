#include"school.h"
#include"student.h"
#include"table.h"

Table::Table(vector<Student> s){
    _students = s;
}

Table::Table(School* s){
    _schools.push_back(s);
}

void Table::sortpoints(){
    sort(_students.begin(), _students.end(), cmp);
}