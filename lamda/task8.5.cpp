#include <iostream>

int main(){
    int num = 5;
    auto lamd =[&num](){
        std::cout<<"Number after chage : "<<num<<std::endl;
    };

    auto lamda=[](int a){
        a=7;
        std::cout<<"Number after chage : "<<a<<std::endl;
    };

    lamd();
    lamda(num);
    
}