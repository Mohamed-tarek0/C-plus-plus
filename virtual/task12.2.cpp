#include <iostream>
#include <cmath>
#include <string>
#include <limits>


class Calculator {
public:
    virtual void add() = 0;
    virtual void sub() = 0;
    virtual void Display() = 0;
};


class CalculatorBase : public Calculator {
public:
    void add() override {
        double a, b;
        std::cout << "Enter two numbers to add: ";
        std::cin >> a >> b;
        std::cout << "Sum: " << (a + b) << std::endl;
    }

    void sub() override {
        double a, b;
        std::cout << "Enter two numbers to subtract: ";
        std::cin >> a >> b;
        std::cout << "Difference: " << (a - b) << std::endl;
    }

    void Display() override {
        std::cout << "Basic Calculator operation" << std::endl;
    }
};


class ProgrammerCalculator : public CalculatorBase {
public:
    void hexaToDecimal() {
        std::string hex;
        std::cout << "Enter a hexadecimal number: ";
        std::cin >> hex;
        int decimal = stoi(hex, nullptr, 16);
        std::cout << "Decimal: " << decimal << std::endl;
    }

    void decimalToHexa() {
        int decimal;
        std::cout << "Enter a decimal number: ";
        std::cin >> decimal;
        std::cout << "Hexadecimal: " << hex << decimal << std::endl;
    }

    void Display() override {
        std::cout << "Programming Calculator operation" << std::endl;
    }
};


class ScientificCalculator : public CalculatorBase {
public:
    void sin_ang() {
        double angle;
        std::cout << "Enter angle in degrees: ";
        std::cin >> angle;
        std::cout << "Sine: " << sin(angle * M_PI / 180) << std::endl;
    }

    void cos_ang() {
        double angle;
        std::cout << "Enter angle in degrees: ";
        std::cin >> angle;
        std::cout << "Cosine: " << cos(angle * M_PI / 180) << std::endl; 
    }

    void Display() override {
        std::cout << "Scientific Calculator operation" << std::endl;
    }
};

int main() {
    char choice;
    int attempts = 0;

    while (true) {
        std::cout << "Choose a calculator:\n";
        std::cout << "C: Basic Calculator\n";
        std::cout << "S: Scientific Calculator\n";
        std::cout << "P: Programmer Calculator\n";
        std::cout << "E: Exit\n";
        std::cin >> choice;

        CalculatorBase* Cal = nullptr;

        switch (choice) {
            case 'C':
                Cal = new CalculatorBase();
                break;
            case 'S':
                Cal = new ScientificCalculator();
                break;
            case 'P':
                Cal = new ProgrammerCalculator();
                break;
            case 'E':
                return 0;
            default:
                std::cout << "Invalid choice. Try again." << std::endl;
                attempts++;
                if (attempts >= 3) {
                    std::cout << "Too many invalid attempts. Exiting." << std::endl;
                    return 0;
                }
                continue;
        }

        Cal->Display();

        char operation;
        std::cout << "Choose an operation:\n";
        if (choice == 'C') {
            std::cout << "A: Add\nS: Subtract\n";
            std::cin >> operation;
            if (operation == 'A') {
                Cal->add();
            } else if (operation == 'S') {
                Cal->sub();
            } else {
                std::cout << "Invalid operation." << std::endl;
            }
        } else if (choice == 'S') {
            std::cout << "S: Sine\nC: Cosine\n";
            std::cin >> operation;
            if (operation == 'S') {
                static_cast<ScientificCalculator*>(Cal)->sin_ang();
            } else if (operation == 'C') {
                static_cast<ScientificCalculator*>(Cal)->cos_ang();
            } else {
                std::cout << "Invalid operation." << std::endl;
            }
        } else if (choice == 'P') {
            std::cout << "H: Hexadecimal to Decimal\nD: Decimal to Hexadecimal\n";
            std::cin >> operation;
            if (operation == 'H') {
                static_cast<ProgrammerCalculator*>(Cal)->hexaToDecimal();
            } else if (operation == 'D') {
                static_cast<ProgrammerCalculator*>(Cal)->decimalToHexa();
            } else {
                std::cout << "Invalid operation." << std::endl;
            }
        }

        delete Cal; 
    }

    return 0;
}