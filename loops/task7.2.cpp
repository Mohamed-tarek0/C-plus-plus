#include<iostream>

int main(){
    constexpr int size = 5;
    double sum=0 ,result;
    int arr[size];

    std::cout<<"Enter the Numbers \n";
    for(int i = 0; i < size; i++){
        std::cout<< "Enter "<<i+1 <<" :";
        std::cin>>arr[i];
        }
        
        for(int i = 0; i < size; i++){
            sum =  sum + arr[i];
            }
        result=sum/size;
        std::cout<<"Total sum of the numbers is "<<sum<<"\n";
        std::cout<<"Average of the numbers is "<<result<<std::endl;
    return 0;
}