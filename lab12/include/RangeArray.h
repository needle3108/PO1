#pragma once

#include<vector>
#include"PairOfNumbers.h"

using namespace std;

template<typename typ>
class RangeArray{
    public:
        //constructor
        RangeArray(PairOfNumbers<int, typ> ob) : _data(ob.second - ob.first) {};

        //method which returns size of our vector
        int Size(){
            return _data.size();
        }
        
        //overload operator [] for our class
        typ & operator[](int el){
            return _data[_data.size()/2 + el];
        }

        //method returning value of our vector under passed index
        typ At(int i){
            return _data[_data.size()/2 + i];
        }

    private:    
        vector<typ> _data;
};