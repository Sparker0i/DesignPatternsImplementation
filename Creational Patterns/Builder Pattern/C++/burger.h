#ifndef BURGER_H
#define BURGER_H
#include "item.h"

class Burger : public Item
{
    public:
        Packing* packing()
        {
            return new Wrapper;
        }

        virtual float price() {}
};

class Vegburger : public Burger
{
    public:
        string name()
        {
            return "Veg Burger";
        }

        float price()
        {
            return 25.0f;
        }
};

class Chickenburger : public Burger
{
    public:
        string name()
        {
            return "Chicken Burger";
        }

        float price()
        {
            return 45.0f;
        }
};
#endif