#include "zelazko.h"

using namespace std;

void Zelazko::UstawTemperature(int t){
    if(t > _max_temp) cout<<"Ten model nie obsluguje takiego zakresu temperatur"<<endl;
    else _temp = t;
}

void Zelazko::Wypisz(){
    cout<<_name<<" cena: "<<_prize<<". Temperatura: "<<_temp<<endl;
}