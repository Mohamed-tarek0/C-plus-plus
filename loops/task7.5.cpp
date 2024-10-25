#include <iostream>
#include<array>
#include <algorithm>

void func(std::array<int,5> arr){
    int size_arr;
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=0)
        size_arr++;
    }
 std::cout<<"max size of array : "<<arr.size()<<"\n";
 std::cout<<"size of array : "<<size_arr<<"\n";
 std::cout<<"size of Element :"<<sizeof(arr[1])<<std::endl;
}

int main(){
    std::array<int,5> arr{5,3,7}; 
    func(arr);
    return 0;
}