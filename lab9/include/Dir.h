#pragma once

#include<iostream>
#include<string>
#include"File.h"
#include<vector>

using namespace std;

class Dir final{
    public:
        Dir(string nazwa) : _name(nazwa), _type("DIR") {}

        Dir operator +=(Dir* podkatalog){
            _next.push_back(podkatalog);
            return *this;
        }

        Dir operator +=(File* plik){
            _plik.push_back(plik);
            return *this;
        }

        friend ostream& operator <<(ostream& output, const Dir& dir){
            output<<dir._name<<" ("<<dir._type<<")"<<endl<<" ";

            Dir *tmp = dir._next[0];
            output<<" "<<tmp->_name<<" ("<<tmp->_type<<")"<<endl<<"\t";

            for(int i=0; i<tmp->_next.size(); i++){
                Dir *tmp1 = tmp->_next[i];
                output<<tmp1->_name<<" ("<<tmp1->_type<<")"<<endl<<"\t";
                for(int j=0; j<tmp1->_next.size();j++){
                    Dir *tmp2 = tmp1->_next[j];
                    output<<tmp2->_name<<" ("<<tmp2->_type<<")"<<endl;
                }
                for(int j=0; j<tmp1->_plik.size();j++){
                    File *tmp2 = tmp1->_plik[j];
                    output<<tmp2->GetName()<<" ("<<tmp2->GetType()<<")"<<endl;
                }
            }

            for(int i=0; i<tmp->_plik.size(); i++){
                File *tmp1 = tmp->_plik[i];
                output<<tmp1->GetName()<<" ("<<tmp1->GetType()<<")"<<endl<<"\t";
            }
            return output;
        }

        Dir* findDir(string name){
            Dir* tmp;
            if(this->_name == "."){
                tmp = this->_next[0];
            }
            else{
                tmp = this;
            }

            for(int i=0; i<tmp->_next.size(); i++){
                if(tmp->_next[i]->_name == name) return _next[i];
            }
        }

        void add(Dir* k){
            _next.push_back(k);
        }

    private:
        string _name;
        string _type;
        vector<File*> _plik;
        vector<Dir*> _next;
};