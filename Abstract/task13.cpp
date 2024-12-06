#include <iostream>
#include <vector>
#include <string>

class PageObject {
public:
    virtual void addItem(const std::string& item) {
        std::cout << "Adding item: " << item << " to PageObject." << std::endl;
    }

    virtual void removeItem(const std::string& item) {
        std::cout << "Removing item: " << item << " from PageObject." << std::endl;
    }

    virtual void deleteItem(const std::string& item) {
        std::cout << "Deleting item: " << item << " from PageObject." << std::endl;
    }
};

class Page : public PageObject {
public:
    void addItem(const std::string& item) override {
        std::cout << "Adding item: " << item << " to Page." << std::endl;
    }

    void removeItem(const std::string& item) override {
        std::cout << "Removing item: " << item << " from Page." << std::endl;
    }

    void deleteItem(const std::string& item) override {
        std::cout << "Deleting item: " << item << " from Page." << std::endl;
    }
};

class Copy : public PageObject {
private:
    std::vector<PageObject*> items;

public:
    void addItem(const std::string& item) override {
        std::cout << "Adding item: " << item << " to Copy." << std::endl;
        // In a real implementation, you would create a Page or PageObject to add
        // For simplicity, we will just store the item name
        items.push_back(new PageObject()); // Placeholder for actual PageObject
    }

    void removeItem(const std::string& item) override {
        std::cout << "Removing item: " << item << " from Copy." << std::endl;
        // Logic to remove item would go here
    }

    void deleteItem(const std::string& item) override {
        std::cout << "Deleting item: " << item << " from Copy." << std::endl;
        // Logic to delete item would go here
    }

    ~Copy() {
        // Clean up dynamically allocated PageObjects
        for (auto item : items) {
            delete item;
        }
    }
};

int main() {
    PageObject* pageObject = new PageObject();
    Page* page = new Page();
    Copy* copy = new Copy();

    pageObject->addItem("Item1");
    page->addItem("Item2");
    copy->addItem("Item3");

    pageObject->removeItem("Item1");
    page->removeItem("Item2");
    copy->removeItem("Item3");

    pageObject->deleteItem("Item1");
    page->deleteItem("Item2");
    copy->deleteItem("Item3");

    // Clean up
    delete pageObject;
    delete page;
    delete copy;

    return 0;
}