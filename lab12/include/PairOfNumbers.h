# pragma once

#include<iostream>

using namespace std;

template<typename a_first, typename a_second>
class PairOfNumbers{
    public:
        //constructor
        PairOfNumbers(a_first& f, a_second& s) : first(f), second(s) {};

        //method which swappes our arguments
        PairOfNumbers<a_second, a_first> Swapped() const{
            return {second, first};
        }

        //just a simple print 
        void Print() const{
            cout<<"Print method: "<<first<<" "<<second<<endl;
        }

        //procedure which adds value passed as argument to our first and second
        void Add(a_second val){
            first += val;
            second += val;
        }

        //procedure which multiplies our first and second by passed value
        void Scale(a_second val){
            first *= val;
            second *= val;
        }

        //procedure which gives information about non-const object 
        void Info(){
            cout<<"This is NON-const pair of numbers"<<endl;
        }

        //procedure which gives information about const object 
        void Info() const{
            cout<<"This is const pair of numbers"<<endl;
        }

        a_first& first;
        a_second& second;
};