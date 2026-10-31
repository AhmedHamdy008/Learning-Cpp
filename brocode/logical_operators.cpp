#include <iostream>

int main(){

    int age;
    int height;

    std::cout<<"Enter your age: ";
    std::cin>>age;

    std::cout<<"Enter your height in cm: ";
    std::cin>>height;

    bool allowed = (age >= 18 || age>=8 && height >=120) && !(height>=200);

    std::cout<<(allowed ? "Enjoy the ride!" : "Sorry u cant ride");

    return 0;
}