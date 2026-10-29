#include <iostream>

int main(){

    int students = 20;
    students ++;                 //increment  
    students+= 2;                //addition
    students --;                 //decrement
    students-=2;                 //subtraction
    students*=2;                 //multiplication
    students/=2;                 //division ( make sure its divisible because you are using an int or change to double)

    int remainder = students%3;  //modulus (the remainder)

    int pemdas= 6+(4-3)*5/-5;
    
    std::cout<<students<<'\n'<<remainder<<'\n'<<pemdas<<'\n';
    
    return 0;
    
    /*
    PEMDAS
    --------------------------------------
    1)Paranthesis
    2)Exponents
    3)multiplication   =   4)division
    5)addition         =   6) subtraction

    */
}