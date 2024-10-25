#include <iostream>

void max_num(int num1,int num2,int num3){
    int result;
    if(num1>num2 && num1>num3){
        result= num1;
    }
    else if(num2>num1 && num2>num3){
        result= num2;
        }
        else{
            result= num3;
        }
        std::cout<<"The maximum number is "<<result<<std::endl;
}

int main ()
{
    int num1,num2,num3;
    std::cout<<"Enter the first number: ";
    std::cin>>num1;
    std::cout<<"Enter the second number: ";
    std::cin>>num2;
    std::cout<<"Enter the third number: ";
    std::cin>>num3;
    max_num(num1,num2,num3);
return 0;
}