#include <iostream>

int main(){
    int num = 5;
    auto lamd =[&num](){
        num =9;
    };
    lamd();
    std::cout<<"Number after chage : "<<num<<std::endl;
}