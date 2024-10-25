#include <iostream>

int main(){
    int n;
    double factorial=1.0;
    std::cout << "Enter a number: ";
    std::cin >> n;
    

    if (n < 0){
        std::cout << "Error! Factorial of a negative number doesn't exist.";
    }
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        std::cout << "Factorial of " << n << " = " << factorial<< std::endl;    
    }

    return 0;
}