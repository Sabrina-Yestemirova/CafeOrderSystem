#ifndef DESSERT_H
#define DESSERT_H

#include "Food.h"

class Dessert : public Food {
public:
    Dessert(const std::string& name, double price);
    void print() const override;
    std::string getType() const override;
};

#endif

