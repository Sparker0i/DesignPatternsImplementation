#include "shape.h"
#include <iostream>

using std::cout;

class Circle : public Shape
{
    public:
        virtual ~Circle() {}
        void draw()
        {
            cout << "Inside Circle::draw()\n";
        }
};

class Square : public Shape
{
    public:
        virtual ~Square() {}
        void draw()
        {
            cout << "Inside Square::draw()\n";
        }
};

class Rectangle : public Shape
{
    public:
        virtual ~Rectangle() {}
        void draw()
        {
            cout << "Inside Rectangle::draw()\n";
        }
};