#include <iostream>
#include <string>

class Student {
private:
    int Id;
    int Age;
    std::string Name;

public:
    
    void setId(int id) {
        Id = id;
    }
    
    int getId() const {
        return Id;
    }

    void setAge(int age) {
        Age = age;
    }

    
    int getAge() const {
        return Age;
    }

    
    void setName(const std::string& name) {
        Name = name;
    }

    
    std::string getName() const {
        return Name;
    }

    void displayInfo() const {
        std::cout << "Student ID: " << Id << std::endl;
        std::cout << "Student Name: " << Name << std::endl;
        std::cout << "Student Age: " << Age << std::endl;
    }
};

int main() {
    
    Student student1;
    Student student2;

   
    student1.setId(101);
    student1.setName("Alice");
    student1.setAge(20);

    
    student2.setId(102);
    student2.setName("Bob");
    student2.setAge(22);

    std::cout << "Information of Student 1:" << std::endl;
    student1.displayInfo();

    std::cout << "Information of Student 2:" << std::endl;
    student2.displayInfo();

    return 0;
}