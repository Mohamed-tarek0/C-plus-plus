#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

void Calculate(std::function<bool(void)> swap, std::function<void(void)> print) {
    if (swap()) {
        print();
    } else {
        std::cout << "Error: Swap operation failed." << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter number of Elements for both vectors: ";
    std::cin >> n;

    std::vector<int> v1(n);
    std::vector<int> v2(n);

    
    std::cout << "Enter Elements for v1:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> v1[i];
    }

    std::cout << "Enter Elements for v2:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> v2[i];
    }

    auto swap = [&]() -> bool {
        if (v1.empty() || v2.empty()) {
            return false; 
        }
        
        std::sort(v2.begin(), v2.end());
        
        for (int i = 0; i < n; i++) {
            std::swap(v1[i], v2[i]);
        }
        
        return true; 
    };

    auto print = [&]() {
        std::cout << "After swapping and sorting:" << std::endl;
        std::cout << "v1 (sorted elements from v2): ";
        for (auto &elem : v1) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;

        std::cout << "v2 (original elements from v1): ";
        for (auto &elem : v2) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    };

    Calculate(swap, print);

    return 0;
}