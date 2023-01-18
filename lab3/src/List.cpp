#include"List.h"

List::List() : _size(0){};

void List::insert(int value){
    _list.push_back(value);
    _size++;
}

void List::print(string c) const{
    cout<<c<<"[ ";
    for(int i=0; i<_size; i++){
        if(i==_size-1)
        {
         cout<<_list[i]<<" ]"<<endl;
        }

        else cout<<_list[i]<<" ";
    }
}

void List::print() const{
    cout<<"[ ";
    for(int i=0; i<_size; i++){
        if(i==_size-1)
        {
         cout<<_list[i]<<" ]"<<endl;
        }

        else cout<<_list[i]<<" ";
    }
}

int& List::operator[](int i){
    return _list[i];
}

List List::filter(std::function<bool(int x)> f){
    List l2;

    for(int i=0; i<_size; i++){
        if(f(_list[i])){
            l2.insert(_list[i]);
        }
    }

    return l2;
}