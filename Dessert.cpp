#include "Dessert.h"

Dessert::Dessert(const std::string& name, double price)
    : Food(name, price) {}

void Dessert::print() const {
    std::cout << "Dessert: " << name << " (€" << price << ")" << std::endl;
}

std::string Dessert::getType() const {
    return "Dessert";
}

