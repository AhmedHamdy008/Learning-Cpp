#include <iostream>
using namespace std;
//function asks user to input a value (to remove redundancy when needing to make user input a number)
//return value is the input entered by the user
int getValue() {
    cout<<"Enter a number:  ";
    int input{};
    cin>>input;

    return input;
}



int main ()
{
    int num1 {getValue()};            //call 1 to get first number
    int num2 {getValue()};            //call 2 to get second number
    cout<<num1 << " + "<<num2<<" = " <<num1+num2<<"\n";

    return 0;
}
