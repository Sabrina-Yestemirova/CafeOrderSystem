#include "MenuItem.h"

MenuItem::MenuItem(const std::string& name, double price)
    : name(name), price(price) {}

double MenuItem::getPrice() const {
    return price;
}

