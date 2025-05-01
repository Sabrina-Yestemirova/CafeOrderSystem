#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
#include "Food.h"
#include "Drink.h"
#include "Dessert.h"

int main() {
    std::vector<std::shared_ptr<MenuItem>> order;

    try {
        order.push_back(std::make_shared<Food>("Pasta", 7.99));
        order.push_back(std::make_shared<Drink>("Coffee", 2.50));
        order.push_back(std::make_shared<Dessert>("Cheesecake", 4.75));
        //Exception: Wrong price
    } catch (const std::exception& e) {
        std::cerr << "Error adding item: " << e.what() << std::endl;
    }

    std::cout << "\n ~~~~Order List~~~~ " << std::endl;
    for (const auto& item : order) {
        item->print();
    }

    double total = 0.0;
    std::for_each(order.begin(), order.end(), [&](const std::shared_ptr<MenuItem>& item) {
        total += item->getPrice();
    });

    std::cout << "\nTotal: €" << total << std::endl;

    std::cout << "\n ~~~~Desserts Only~~~~ "<< std::endl;
    std::for_each(order.begin(), order.end(), [](const std::shared_ptr<MenuItem>& item) {
        if (item->getType() == "Dessert") {
            item->print();
        }
    });
    std::cout<<std::endl;
    return 0;
}

