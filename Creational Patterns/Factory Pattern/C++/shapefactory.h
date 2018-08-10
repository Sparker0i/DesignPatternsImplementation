#include "shapes.h"
#include <string>
#include <algorithm>

using std::string;

class Shapefactory
{
    private:
        bool iequals(const string& a, const string& b)
        {
            return std::equal
                (a.begin(), a.end(),
                b.begin(), b.end(),
                [](char a, char b) {
                    return tolower(a) == tolower(b);
                }
            );
        }
    public:
        Shape *get_shape(string shape)
        {
            if (iequals(shape , "CIRCLE"))
                return new Circle();
            else if (iequals(shape , "SQUARE"))
                return new Square();
            else if (iequals(shape , "RECTANGLE"))
                return new Rectangle();
            else
                return NULL;
        }
};