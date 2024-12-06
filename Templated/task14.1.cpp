#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
private:
    std::vector<T> elements; 

public:
    
    void push(const T& element) {
        elements.push_back(element);
    }

    
    T pop() {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        T elem = elements.back(); 
        elements.pop_back(); 
        return elem; 
    }

    
    bool isEmpty() const {
        return elements.empty();
    }

   
    size_t size() const {
        return elements.size();
    }

   
    T top() const {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::top(): empty stack");
        }
        return elements.back();
    }
};

int main() {
    Stack<int> intStack;
    
    
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << "Popped: " << intStack.pop() << std::endl; // Outputs 3
    std::cout << "Top element: " << intStack.top() << std::endl; // Outputs 2
    std::cout << "Stack size: " << intStack.size() << std::endl; // Outputs 2

    return 0;
}