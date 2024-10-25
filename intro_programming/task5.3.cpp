#include <iostream>

int main(){
    double num1,num2,result;
    char x;
    std::cout<<"Enter the first number: ";
    std::cin>>num1;
    std::cout<<"Enter the second number: ";
    std::cin>>num2;
    std::cout<<"Select your opreation :"
             <<"\n + or - or * or / \n";
             std::cin>>x;
    switch (x)
    {
    case '+':
        result = num1+num2;
        std::cout<<"Result is "<<result<<"\n";
        break;
    case '-':
    result = num1-num2;
    std::cout<<"Result is "<<result<<"\n";
    break;
    case '*':
    result = num1*num2;
    std::cout<<"Result is "<<result<<"\n";
    break;
    case '/':
    result = num1/num2;
    std::cout<<"Result is "<<result<<"\n";
    break;
    default:
    std::cout<<"Invalid input \n";
        break;
    }
    return 0;
}