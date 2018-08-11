#ifndef PACKING_H
#define PACKING_H
#include <string>
using std::string;

class Packing
{
    public:
        virtual string pack() {}
};

class Wrapper : public Packing
{
    public:
        string pack()
        {
            return "Wrapper";
        }
};

class Bottle : public Packing
{
    public:
        string pack()
        {
            return "Bottle";
        }
};
#endif