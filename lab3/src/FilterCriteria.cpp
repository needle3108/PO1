#include"FilterCriteria.h"

FilterCriteria::FilterCriteria() : _size(0) {};

void FilterCriteria::add(std::function<bool(int x)> f){
    _crit.push_back(f);
    _size++;
};

int FilterCriteria::size(){
    return _size;
};

std::function<bool(int x)> FilterCriteria::get(int i){
    return _crit[i];
};