#ifndef ITEM_H
#define ITEM_H
#include <string>
#include "packing.h"
using std::string;

class Item
{
    public:
        virtual string name() {}
        virtual Packing* packing() {}
        virtual float price() {}
};
#endif