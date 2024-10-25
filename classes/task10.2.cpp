#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Item {
    std::string name;
    float price;
    int quantity;
};

int main() {

    std::vector<Item> inventory = {
        {"Laptop", 999.99, 10},
        {"Smartphone", 499.99, 5},
        {"Tablet", 299.99, 0}
    };

    auto updatePrice = [&inventory](const std::string& itemName, float newPrice) {
        for (auto& item : inventory) {
            if (item.name == itemName) {
                item.price = newPrice;
                std::cout << "Updated price of " << itemName << " to $" << newPrice << std::endl;
            }
        }
        std::cout << "Item " << itemName << " not found in inventory." << std::endl;
    };

    auto isOutOfStock = [inventory](const std::string& itemName) {
        for (const auto& item : inventory) {
            if (item.name == itemName) {
                return item.quantity == 0;
            }
        }
        std::cout << "Item " << itemName << " not found in inventory." << std::endl;
        return false;
    };

    auto calculateTotalValue = [&inventory]() {
        float totalValue = 0.0;
        for (const auto& item : inventory) {
            totalValue += item.price * item.quantity;
        }
        return totalValue;
    };

    updatePrice("Smartphone", 449.99);

    if (isOutOfStock("Laptop")) {
        std::cout << "Laptop is out of stock." << std::endl;
    } else {
        std::cout << "Laptop is in stock." << std::endl;
    }

    float totalValue = calculateTotalValue();
    std::cout << "Total inventory value: $" << totalValue << std::endl;

    return 0;
}