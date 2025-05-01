#ifndef DRINK_H
#define DRINK_H

#include "MenuItem.h"

class Drink : public MenuItem {
public:
    Drink(const std::string& name, double price);
    void print() const override;
    std::string getType() const override;
};

#endif

