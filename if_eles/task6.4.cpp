#include <iostream>

double calculateRectangleArea(double width, double height){
    return width * height;
}
double calculateCircleArea(double radius){
    return 3.14 * radius * radius;
}
double calculateTriangleArea(double base, double height){
    return 0.5 * base * height;
}
int main()
{
    double r,w,h;
    int x;
    std::cout << "Enter the number of shapes you want to calculate the area of: "
              <<"\n1.circle 2.triangle 3.rectangle \n";
    std::cin >> x;
    if(x==1){
    std::cout << "Enter the radius of the circle: ";
    std::cin >> r;
    std::cout << "The area of the circle is: " << calculateCircleArea(r)<<"\n";
    }
    else if(x==2){
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> w;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> h;
    std::cout << "The area of the triangle is: " << calculateTriangleArea(w,h)<<"\n";
    }
    else if(x==3){
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> w;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> h;
    std::cout << "The area of the rectangle is: " << calculateRectangleArea(w,h)<<"\n";
    }
    

    return 0;
}