#include <iostream>
#include <vector>
#include <string>

// Abstract Class: LibraryItem
class LibraryItem {
public:
    virtual ~LibraryItem() {}

    virtual void displayInfo() const = 0;
    virtual bool isAvailable() const = 0;
    virtual void borrowItem() = 0;
    virtual void returnItem() = 0;
};

// Derived Class: Book
class Book : public LibraryItem {
private:
    std::string title;
    std::string author;
    bool available;

public:
    Book(const std::string& title, const std::string& author)
        : title(title), author(author), available(true) {}

    void displayInfo() const override {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Availability: " << (available ? "Available" : "Not Available") << std::endl;
    }

    bool isAvailable() const override {
        return available;
    }

    void borrowItem() override {
        if (available) {
            available = false;
            std::cout << "Book borrowed successfully." << std::endl;
        } else {
            std::cout << "Book is not available for borrowing." << std::endl;
        }
    }

    void returnItem() override {
        available = true;
        std::cout << "Book returned successfully." << std::endl;
    }
};

// Derived Class: Magazine
class Magazine : public LibraryItem {
private:
    std::string title;
    int issueNumber;
    bool available;

public:
    Magazine(const std::string& title, int issueNumber)
        : title(title), issueNumber(issueNumber), available(true) {}

    void displayInfo() const override {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Issue Number: " << issueNumber << std::endl;
        std::cout << "Availability: " << (available ? "Available" : "Not Available") << std::endl;
    }

    bool isAvailable() const override {
        return available;
    }

    void borrowItem() override {
        if (available) {
            available = false;
            std::cout << "Magazine borrowed successfully." << std::endl;
        } else {
            std::cout << "Magazine is not available for borrowing." << std::endl;
        }
    }

    void returnItem() override {
        available = true;
        std::cout << "Magazine returned successfully." << std::endl;
    }
};

int main() {
    // Create a vector to store library items
    std::vector<LibraryItem*> libraryItems;

    // Create instances of Book and Magazine
    Book book1("Book Title 1", "Author 1");
    Book book2("Book Title 2", "Author 2");
    Magazine magazine1("Magazine Title 1", 1);
    Magazine magazine2("Magazine Title 2", 2);

    // Add library items to the vector
    libraryItems.push_back(&book1);
    libraryItems.push_back(&book2);
    libraryItems.push_back(&magazine1);
    libraryItems.push_back(&magazine2);

    // Display information about each item
    for (const auto& item : libraryItems) {
        item->displayInfo();
        std::cout << std::endl;
    }

    // Demonstrate borrowing and returning functionality
    book1.borrowItem();
    book1.borrowItem(); // Attempt to borrow an already borrowed book
    book1.returnItem();

    magazine2.borrowItem();
    magazine2.returnItem();

    // Clean up dynamically allocated memory
    // Note: In this example, we don't need to delete the objects because they are
    //       allocated on the stack. However, if they were allocated on the heap
    //       using new, we would need to delete them to prevent memory leaks.

    return 0;
}