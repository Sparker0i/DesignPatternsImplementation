#include <iostream>

using std::cout;

class Shape
{
    public:
        virtual void draw() {}
};

class Circle : public Shape
{
    public:
        void draw()
        {
            cout << "Inside Circle::draw()\n";
        }
};

class Square : public Shape
{
    public:
        void draw()
        {
            cout << "Inside Square::draw()\n";
        }
};

class Rectangle : public Shape
{
    public:
        void draw()
        {
            cout << "Inside Rectangle::draw()\n";
        }
};