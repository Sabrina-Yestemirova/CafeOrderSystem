#ifndef FOOD_H
#define FOOD_H

#include "MenuItem.h"

class Food : public MenuItem {
public:
    Food(const std::string& name, double price);
    void print() const override;
    std::string getType() const override;
};

#endif

