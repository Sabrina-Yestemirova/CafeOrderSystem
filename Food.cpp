#include "Food.h"

Food::Food(const std::string& name, double price)
    : MenuItem(name, price) {}

void Food::print() const {
    std::cout << "Food: " << name << " (€" << price << ")" << std::endl;
}

std::string Food::getType() const {
    return "Food";
}

