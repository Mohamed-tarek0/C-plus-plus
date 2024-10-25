#include <iostream>

int main() {
    int x = 3, y = 9, z = 10;

    auto print = [&]() {
        x *= 2;
        y *= 2;
        z *= 2;
        std::cout << "Updated values (by reference): x = " << x << ", y = " << y << ", z = " << z << std::endl;
    };

    auto print_value = [=]() {
        std::cout << "Values (by value): x = " << x << ", y = " << y << ", z = " << z << std::endl;
    };

    auto print_only_two = [&](int factor) {
        x += factor;
        y += factor;
        std::cout << "Updated values (only x and y): x = " << x << ", y = " << y << std::endl;
    };

    print();               
    print_value();        
    print_only_two(10);   

    return 0;
}