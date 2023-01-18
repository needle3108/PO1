#pragma once

#include<vector>
#include<algorithm>

class Student;
class School;

using namespace std;

bool cmp(Student a, Student b){
                return a.get() > b.get();
}

class Table{
    public:
        Table(vector<Student>);
        Table(School*);

        Table & operator +=(Student v){
            this->_students.push_back(v);
            return *this;
        }

        Table & operator +=(School *v){
            this->_schools.push_back(v);
            return *this;
        }

        void sortpoints();

    private:
        vector<Student> _students;
        vector<School*> _schools;
};