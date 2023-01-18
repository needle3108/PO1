#pragma once
#include <string>
#include "Node.h"

class NodeInt: public Node
{
public:
    NodeInt(int v): Node(), _data(v) {}
    virtual std::string toString() const final
    {
        return std::to_string(_data);
    }
    int valInt() { return _data; }
    Node* clone()
    {
        Node* temp = new NodeInt(_data);
        return temp;
    }
private:
    int _data;
};

class NodeFloat: public Node
{
public:
    NodeFloat(float v): Node(), _data(v) {}
    virtual std::string toString() const final
    {
        return std::to_string(_data);
    }
    float valFloat() { return _data; }
    Node* clone()
    {
        Node* temp = new NodeFloat(_data);
        return temp;
    }
private:
    float _data;
};

class NodeString: public Node
{
public:
    NodeString() = default;
    NodeString(std::string v): Node(), _data(v) {}
    virtual std::string toString() const final
    {
        return _data;
    }
    std::string& valString() { return _data; }
    Node* clone()
    {
        Node* temp = new NodeString(_data);
        return temp;
    }
private:
    std::string _data;
};