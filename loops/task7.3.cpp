#include <iostream>

int main(){
    constexpr int size=10;
    int arr[size],max[3];
    for (int i = 0; i <size ; i++)
    {
        std::cout<<"Enter arr["<<i+1<<"] :";
        std::cin>>arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max[0]){
            max[2]=max[1];
            max[1]=max[0];
            max[0]=arr[i];
        }
        else if (arr[i]>max[1]){
            max[2]=max[1];
            max[1]=arr[i];
            }
            else if (arr[i]>max[2]){
                max[2]=arr[i];
                }                
    }
    std::cout<<"max1="<<max[0]<<std::endl;
    std::cout<<"max2="<<max[1]<<std::endl;
    std::cout<<"max3="<<max[2]<<std::endl;
    
    return 0;
}