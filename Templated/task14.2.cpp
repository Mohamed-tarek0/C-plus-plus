#include <iostream>
#include <cstring>

template <typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
void mySwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

class Person {
private:
    std::string name;
    int age;

public:
    
    Person(std::string name, int age) : name(name), age(age) {}

   
    Person(const Person &other) : name(other.name), age(other.age) {}

    
    bool operator>(const Person &other) const {
        return age > other.age;
    }

    
    bool operator==(const Person &other) const {
        return (name == other.name) && (age == other.age);
    }

    
    void display() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
};

int main() {
    
    int a = 5, b = 10;
    double x = 5.5, y = 3.3;

    std::cout << "Max of a and b: " << myMax(a, b) << std::endl;
    std::cout << "Max of x and y: " << myMax(x, y) << std::endl;

    mySwap(a, b);
    mySwap(x, y);
    std::cout << "After swap, a: " << a << ", b: " << b << std::endl;
    std::cout << "After swap, x: " << x << ", y: " << y << std::endl;

   
    Person person1("Alice", 30);
    Person person2("Bob", 25);

    std::cout << "Person 1: ";
    person1.display();
    std::cout << "Person 2: ";
    person2.display();

   
    Person older = myMax(person1, person2);
    std::cout << "Older person: ";
    older.display();

    mySwap(person1, person2);
    std::cout << "After swap:" << std::endl;
    std::cout << "Person 1: ";
    person1.display();
    std::cout << "Person 2: ";
    person2.display();

    return 0;
}