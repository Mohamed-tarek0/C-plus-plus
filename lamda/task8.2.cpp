#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& v,int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i; j < n - i - 1; j++) {
            if (v[j] > v[j + 1])
                std::swap(v[j], v[j + 1]);
        }
    }
}

void selectionSort(std::vector<int> &arr,int n) {
    for (int i = 0; i < n - 1; ++i) {
       int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j; 
            }
        }
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

void printArray(std::vector<int> &arr) {
    for (int &val : arr) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}


int main(){
    std::vector<int> arr;
    int n,num,so;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        arr.push_back(num);
        }
        std::cout<<"Choose a sorting algorithm:"
                <<"\n1. Bubble Sort"
                <<"\n2. Selection Sort\n";
        std::cin>>so;

        std::cout << "Original array: ";
        printArray(arr);
        
        switch(so){
            case 1:
            bubbleSort(arr,n);
            break;
            case 2:
            selectionSort(arr,n);
            break;
            default:
            std::cout<<"wrong input \n";
        }
        printArray(arr);
        

}