#include <iostream>

namespace accout{
    int salse=5410,g=salse;
    
    void savin_accout(int x){
        g+=x;
        std::cout<<"salse is "<<g<<std::endl;
    }
    void get_accout(){
        std::cout<<"salse is "<<g<<std::endl;
    }
    
}

int main(){
    int q,y;
    std::cout<<"chose one:\n1.get \n2.add \n";
    std::cin>>q;
    if (q==1)
    {
        accout::get_accout();
    }
    else if (q==2){
        std::cout<<"input the number you want to add:\n";
        std::cin>>y;
        accout::savin_accout(y);
    }
    else{
        std::cout<<"wrong choise\n";
    }
    
    return 0;
}