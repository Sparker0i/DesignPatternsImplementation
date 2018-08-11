#include "meal.h"

int main()
{
    Mealbuilder mealbuilder;

    Meal* vegmeal = mealbuilder.prepare_veg_meal();
    cout << "Veg Meal : \n";
    (*vegmeal).show_items();
    cout << "Total Cost : " << (*vegmeal).get_cost() << "\n";

    Meal* nonvegmeal = mealbuilder.prepare_non_veg_meal();
    cout << "Non Veg Meal : \n";
    (*nonvegmeal).show_items();
    cout << "Total Cost : " << (*nonvegmeal).get_cost() << "\n";

    return 0;
}