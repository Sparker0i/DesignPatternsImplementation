#ifndef DRINK_H
#define DRINK_H
#include "item.h"

class Colddrink : public Item
{
    public:
        Packing* packing()
        {
            return new Bottle;
        }

        virtual float price() {}
};

class Pepsi : public Colddrink
{
    public:
        string name()
        {
            return "Pepsi";
        }

        float price()
        {
            return 12.0f;
        }
};

class Coke : public Colddrink
{
    public:
        string name()
        {
            return "Coke";
        }

        float price()
        {
            return 15.0f;
        }
};
#endif