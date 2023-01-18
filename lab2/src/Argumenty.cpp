#include"Argumenty.h"

Argumenty::Argumenty(int s){
    _wektor.resize(s);
}

void Argumenty::print(const string n) const{
    cout<<n<<" ";
    for(int i=0; i<_wektor.size(); i++){
        cout<<_wektor[i]<<" ";
    }
    cout<<endl;
}

Argumenty& Argumenty::operator()(int index, double value){
    _wektor[index] = value;
    return *this;
}

void Argumenty::print(const string n, ostream& output){
    output<<n<<" ";
    for(int i=0; i<_wektor.size(); i++){
        output<<_wektor[i]<<" ";
    }
    cout<<endl;
}