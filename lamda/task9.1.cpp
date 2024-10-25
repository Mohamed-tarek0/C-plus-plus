#include <iostream>
#include <vector>
#include <array>

bool test(std::vector <int>& check){
    for(int i=1;i<check.size();++i){
        if(check[i]>check[i-1]){
            return false;
        }
        else{
            return true ;
        }
    } 
}

int main(){
    
    int n;
    std::cout<<"Enter number of arr : ";
    std::cin>>n;
    std::vector <int> arr(n);
    for(int i=0;i<n;i++){
        std::cout<<"enter number arr{"<<i+1<<"} : ";
        std::cin>>arr[i];
    }

    bool a=test(arr);
    std::cout<<"Rasalt = "<< a <<std::endl;
}

