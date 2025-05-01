#ifndef MENU_ITEM_H
#define MENU_ITEM_H

#include <string>
#include <iostream>

class MenuItem {
protected:
    std::string name;
    double price;

public:
    MenuItem(const std::string& name, double price);
    virtual ~MenuItem() = default;

    virtual void print() const = 0;
    virtual std::string getType() const = 0;
    double getPrice() const;
};

#endif

