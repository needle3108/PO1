#pragma once
#include "Node.h"
#include "NodeSpec.h"
#include <iostream>

class CyclicList
{
public:
    CyclicList() = default;
    CyclicList& operator<<(Node* v)
    {
        if(!_first)
        {
            _first = v;
            _last = v;
        }
        else
        {
            _last->setNext(v);
            _last = v;
            _last->setNext(_first);
        }
        return *this;
    }
    int count()
    {
        int c = 0;
        Node* temp = _first;
        do
        {
            c++;
            temp = temp->getNext();
        }while(temp != _first);

        return c;
    }
    friend std::ostream& operator<<(std::ostream &stream, const CyclicList& v)
    {
        Node* temp = v._first;
        do
        {
            stream << temp->toString() << " ";
            temp = temp->getNext();
        }while(temp != v._first);
        return stream;
    }
    Node* operator()()
    {
        return _first;
    }
    CyclicList& rotate()
    {
        _first = _first->getNext();
        _last = _last->getNext();
        return *this;
    }
    CyclicList& rotate_back()
    {
        for(int i = 0; i < count() - 1; i++)
            rotate();
        return *this;
    }
    CyclicList(const CyclicList& v)
    {
        Node *tmp = v._first;
        do{
            *this<<tmp->clone();
            tmp = tmp->getNext();
        }
        while(tmp!=v._last);
    }

    ~CyclicList(){
        Node *tmp = _first;
        while(tmp!=_last){
            Node *tmp2 = tmp->getNext();
            delete tmp;
            tmp = tmp2;
        }
        delete tmp;
    }
private:
    Node* _first = nullptr;
    Node* _last = nullptr;
};