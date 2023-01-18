#pragma once

#include<iostream>
#include<vector>

using namespace std;

template<typename type>
class List{
    public:
        List() = default;

        List& add(type value){
            _list.push_back(value);
            return *this;
        }

        List(const List& copy){
            _list = copy._list;
        }

        List(List&& move) = default;

        bool contains(type value){
            for(int i=0; i<_list.size(); i++){
                if(_list[i] == value) return true;
            }
            return false;
        }

        friend ostream& operator <<(ostream& output, const List& lista){
            for(int i=0; i<lista._list.size(); i++){
                output<<lista._list[i]<<" ";
            }
            return output;
        }

        ~List(){
            _list.clear();
        }

    private:
        vector <type> _list;
};