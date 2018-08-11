#include <iostream>

using std::cout;

class Color
{
    public:
        virtual void fill() {}
};

class Red : public Color
{
    public:
        void fill()
        {
            cout << "Inside Red::fill()\n";
        }
};

class Green : public Color
{
    public:
        void fill()
        {
            cout << "Inside Green::fill()\n";
        }
};

class Blue : public Color
{
    public:
        void fill()
        {
            cout << "Inside Blue::fill()\n";
        }
};