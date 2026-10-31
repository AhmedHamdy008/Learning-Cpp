#include <iostream>

int main(){

    //ternary operator ?: = replacment to if and else statments
    //condition ? expr1 : expr2;

    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;

    std::cout<<(age<13 ? "Kid": age<20 ? "Teen" : age<60 ? "Adult" : "Elderly")<<'\n';
    
    return 0;
}