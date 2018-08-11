#ifndef MEAL_H
#define MEAL_H
#include "burger.h"
#include "drink.h"
#include <vector>
#include <iostream>

using std::vector;
using std::cout;

class Meal
{
    private:
        vector<Item*> items;

    public:
        void add_item(Item *item)
        {
            items.push_back(item);
        }

        float get_cost()
        {
            float cost = 0.0f;

            for (Item *item : items)
            {
                cost += (*item).price();
            }
            return cost;
        }

        void show_items()
        {
            for (Item *item : items)
            {
                cout << "Item : " << (*item).name();
                cout << ", Packing : " << (*item).packing() -> pack();
                cout << ", Price : " << (*item).price() << "\n";
            }
        }
};

class Mealbuilder
{
    public:
        Meal* prepare_veg_meal()
        {
            Meal *meal = new Meal();
            (*meal).add_item(new Vegburger());
            (*meal).add_item(new Coke());
            return meal;
        }

        Meal* prepare_non_veg_meal()
        {
            Meal *meal = new Meal();
            (*meal).add_item(new Chickenburger());
            (*meal).add_item(new Pepsi());
            return meal;
        }
};
#endif