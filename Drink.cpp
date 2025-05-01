#include "Drink.h"

Drink::Drink(const std::string& name, double price)
    : MenuItem(name, price) {}

void Drink::print() const {
    std::cout << "Drink: " << name << " (€" << price << ")" << std::endl;
}

std::string Drink::getType() const {
    return "Drink";
}

