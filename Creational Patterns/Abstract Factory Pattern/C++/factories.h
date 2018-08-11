#include "shapes.h"
#include "colors.h"
#include "equals.h"
#include <string>
#define elif else if

using std::string;
using X::is_equals;

class Abstractfactory
{
    public:
        virtual Shape* get_shape(string choice) {}
        virtual Color* get_color(string choice) {}
};

class Colorfactory : public Abstractfactory
{
    public:
        Color* get_color(string choice)
        {
            if (is_equals(choice , "RED"))
                return new Red;
            elif (is_equals(choice , "BLUE"))
                return new Blue;
            elif (is_equals(choice , "GREEN"))
                return new Green;
            else
                return NULL;
        }

        Shape* get_shape(string choice)
        {
            return NULL;
        }
};

class Shapefactory : public Abstractfactory
{
    public:
        Shape* get_shape(string choice)
        {
            if (is_equals(choice , "CIRCLE"))
                return new Circle;
            elif (is_equals(choice , "SQUARE"))
                return new Square;
            elif (is_equals(choice , "RECTANGLE"))
                return new Rectangle;
            else
                return NULL;
        }

        Color* get_color(string choice)
        {
            return NULL;
        }
};

class Factoryproducer
{
    public:
        Abstractfactory* get_factory(string choice)
        {
            if (is_equals(choice , "SHAPE"))
                return new Shapefactory;
            elif (is_equals(choice , "COLOR"))
                return new Colorfactory;
            else
                return NULL;
        }
};