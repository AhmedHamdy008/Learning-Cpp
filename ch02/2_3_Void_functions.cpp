#include <iostream>
using namespace std;

void printa()                        // void = no return
{
    cout<<"Hello to lesson 2.3\n";
}

int printb()                         // returns an int
{
    cout<<"enter a number:  ";
    int b{};                         //direct list initialization to 0
    cin>>b;
    return b;
}


int main()
{
    printa();                // void = no return
    int b {printb()};        // stores the value function printb returned
    cout<<"double the value is: "<<b*2<< "\n";
    return 0;
}