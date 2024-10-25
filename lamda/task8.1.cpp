#include <iostream>

int sum_num(int a,int b){
    return a+b;
}
int sup_num(int a,int b){
    return a-b;
}
int main(){
    int x,y,ans;
    char o;
    std::cout<<"selct your opration (+ , -): ";
    std::cin>>o;
    std::cout<<"enter frist number: ";
    std::cin>>x;
    std::cout<<"enter second number: ";
    std::cin>>y;

    switch (o)
    {
    case '+':
       ans = sum_num(x,y);
       std::cout<<"result is : "<<ans<<std::endl;
        break;
    case '-':
    ans = sup_num(x,y);
    std::cout<<"result is : "<<ans<<std::endl;
    break;
    default:
    std::cout<<"wrong input ";
        break;
    }
    return 0;
}
