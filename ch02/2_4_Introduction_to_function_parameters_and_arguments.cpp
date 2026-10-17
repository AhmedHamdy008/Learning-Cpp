#include <iostream>
using namespace std;


int userInput()
{
    cout<<"enter a number: ";
    int input{};
    cin>>input;
    return input;
}


int add(int a, int b) {
    return a+b;
}


int Multiply(int c, int d) {
    return c*d;
}


void printResult(int value) {
    cout<<"Result is: " <<value<<"\n";
}

int main()
{
    int num1 {userInput()};
    int num2 {userInput()};

    printResult(add(num1,num2));
    printResult(add(num1,Multiply(num1,num2)));
    printResult(Multiply(num1,num2));
    printResult(add(Multiply(num1,5),add(num2,3)));

    return 0;
}