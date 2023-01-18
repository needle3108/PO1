#pragma once

#include<cmath>

using namespace std;

class Point{
    public:
        Point() = default;
        Point(const double x, const double y) : _x(x), _y(y) {};

        const double &GetX() const{
            return this->_x;
        }

        const double &GetY() const{
            return this->_y;
        }

        void SetX(const double _x){
            this->_x = _x;
        }

        void SetY(const double _y){
            this->_y = _y;
        }

        double distance_pitagoras(const Point &p) const{
            return sqrt( pow(this->_x - p._x, 2) + pow(this->_y - p._y, 2));
        }

        friend ostream &operator<<(const &ostream o, const Point &p);


    private:
        const double _x;
        const double _y;
};

ostream &operator<<(const &ostream o, const Point &p){
    return o<<"("<<p.GetX()<<", "<<p.GetY()<<")";
}

class Shape{
    public:
        virtual const double length() = 0;
        virtual void setPoint(const Point &p){
            this->position.SetX(p.GetX());
            this->position.SetY(p.GetY());
        }

    protected:
        Point position;    
};

class ClosedShape : public Shape{
    virtual double area() const = 0;
};

