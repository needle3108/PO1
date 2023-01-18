#pragma once
#include <string>

class Node
{
public:
    Node() = default;
    virtual std::string toString() const = 0;
    void setNext(Node* v) { _next = v; }
    Node* getNext() { return _next; }
    virtual Node* clone() = 0;
private:
    Node* _next = nullptr;
};