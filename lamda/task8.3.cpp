#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);

    std::cout << "Enter the elements:" << std::endl;
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    auto descending = [](int a, int b) {
        return a > b;
    };

    std::sort(arr.begin(), arr.end(), descending);

    std::cout << "Sorted elements in descending order:" << std::endl;
    for (const auto& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
