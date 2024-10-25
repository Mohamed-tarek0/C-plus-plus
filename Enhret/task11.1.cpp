#include <iostream>
#include <string>

class PaymentMethod{

private:
float amount ;

public :

PaymentMethod(float amo):amount{amo} {};

void Set_amount(float amu){
    amount = amu;
}

void Get_amount()const{
    std::cout<<"Amount is "<< amount <<std::endl;
    }
void welcom_screen(){
    std::cout<<"Welcome to payment method \n";

}
};

class CreditCard :public PaymentMethod {

    private:
    std::string CardName;
    int CardNumber;

    public:

    CreditCard(float amu,std::string name , int number) :
    PaymentMethod(amu),CardName{name},CardNumber{number} {};


    void processPayment() {
        std::cout << "Processing Credit Card Payment:\n";
        PaymentMethod::Get_amount();
        std::cout << "Card Name: " << CardName << "\n";
        std::cout << "Card Number: " << CardNumber << "\n";
    }
};

class PayPal: public CreditCard {

    private:
    std::string Email;

    public:
    PayPal(float amu,std::string name , int number,std::string email) :
    CreditCard(amu,name,number),Email{email} {};
    void processPayment() {
        std::cout << "Processing PayPal Payment:\n";
        CreditCard::processPayment();
        std::cout << "Email: " << Email << "\n";
        }

};

int main() {
    
    int choice{0},n{0};
    std::string name ,email;
    int number;
    float amount;

    PaymentMethod p(2000);
    CreditCard card(amount,name,number);

    std::cout<<"Welcom to payment method choose one of method : \n";
    std::cout<<"1. Credit Card \n";
    std::cout<<"2. PayPal \n";
    std::cin>>choice;

    switch (choice) {

        case 1:
            std::cout<<"Enter Card Name :";
            std::cin>>name;
            std::cout<<"Enter Card Number :";
            std::cin>>number;
            std::cout<<"choose : \n1-set amount \n 2-get amount \n";
            std::cin>>n;

        switch (n) {
            case 1:
                std::cout<<"Enter Card Amount :";
                std::cin>>amount;
                break;
            case 2:
                p.Get_amount();
            }

        CreditCard card(amount,name,number);
        card.processPayment();

        break;

        case 2:

            std::cout<<"Enter Card Name :";
            std::cin>>name;
            std::cout<<"Enter Card Number :";
            std::cin>>number;
            std::cout<<"Enter Card Email :";
            std::cin>>email;
            std::cout<<"choose : \n1-set amount \n2-get amount \n";
            std::cin>>n;

        switch (n) {
            case 1:
                std::cout<<"Enter Card Amount :";
                std::cin>>amount;
                break;
            case 2:
                p.Get_amount();
        }

        PayPal card_p(amount,name,number,email);
        card_p.processPayment();
        break;
    }
        


}
