#include "ubranie.h"

using namespace std;

void Ubranie::Wypisz(){
    if(_name == "Koszula bawelniana" || _name == "Koszula jedwabna"){
        cout<<_name<<" cena: "<<_prize<<". "<<_stan<<". "<<_rekaw<<"."<<endl;
    }
    else{
        cout<<_name<<" cena: "<<_prize<<". "<<_stan<<". "<<_kanty<<"."<<endl;
    }
}

void Ubranie::SkrocRekawy(){
    _rekaw = "Krotki rekaw";
}

void Ubranie::Prasuj(const Zelazko z){
    if(_stan == "Pogniecione"){
        if(z._temp > _max_temp) cout<<"Zelazko za gorace"<<endl;
        else{
            _stan = "Wyprasowane";
            cout<<"--Prasuje "<<_name<<" zelazkiem o temp. "<<z._temp<<endl;
        }
    }
    else cout<<"--Ubranie nie wymaga prasowania."<<endl;
}

void Ubranie::PrasujKanty(const Zelazko z){
    if(_kanty == "Brak kantow"){
        if(z._temp > _max_temp) cout<<"Zelazko za gorace"<<endl;
        else{
            _kanty = "Kanty";
            cout<<"--Prasuje nogawki "<<_name<<" zelazkiem o temp. "<<z._temp<<endl;
        }
    }
    else cout<<"Ubranie ma kanty."<<endl;

}