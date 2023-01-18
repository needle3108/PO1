#pragma once

class Drawable{
    public:
        virtual double length() const = 0;
        virtual void draw() const = 0;
};

class Transformable{
    public:
        virtual void shift(const double x1, const double y1) = 0;

};