#include "shapefactory.h"

int main()
{
    Shapefactory shapeFactory;
    Shape *shape1 = shapeFactory.get_shape("CIRCLE");
    (*shape1).draw();

    Shape *shape2 = shapeFactory.get_shape("RECTANGLE");
    (*shape2).draw();

    Shape *shape3 = shapeFactory.get_shape("SQUARE");
    (*shape3).draw();

    return 0;
}