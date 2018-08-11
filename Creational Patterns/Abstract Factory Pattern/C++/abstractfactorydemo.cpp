#include "factories.h"

int main()
{
    Factoryproducer fp;
    Abstractfactory *f = fp.get_factory("SHAPE");

    Shape *s1 = (*f).get_shape("CIRCLE");
    Shape *s2 = (*f).get_shape("SQUARE");
    Shape *s3 = (*f).get_shape("RECTANGLE");

    (*s1).draw();
    (*s2).draw();
    (*s3).draw();

    f = fp.get_factory("COLOR");
    
    Color *c1 = (*f).get_color("RED");
    Color *c2 = (*f).get_color("GREEN");
    Color *c3 = (*f).get_color("BLUE");

    (*c1).fill();
    (*c2).fill();
    (*c3).fill();

    return 0;
}