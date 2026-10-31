#include <iostream>


int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout<<"*************** Calculator ***************\n";

    std::cout<<"Enter operator (+ - * /): ";
    std::cin>>op;

    std::cout<<"Enter first number: ";
    std::cin>>num1;

    std::cout<<"Enter second number: ";
    std::cin>>num2;

    switch(op){
    
        case '+':
        result=num1+num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        case '-':
        result=num1-num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        case '*':
        result=num1*num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        case '/':
        result=num1/num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        default:
        std::cout<<"This isn't a valid operator\n";
        break;
    }
    
    std::cout<<"******************************************";



}