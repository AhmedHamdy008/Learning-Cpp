#include <iostream>
#include <string>

// cout << = insertion operator
// cin >> = extraction operator

int main(){

std::string name;
std::string country;
int age;


std::cout<<"Where do you live?: ";
std::cin>>country;                         //for string with no spaces


std::cout<<"What is your full name?: ";    
std::getline(std::cin>>std::ws, name);              //for strings including spaces ,picks up the entire line use std::ws to prevent buffer

std::cout<<"What's your age?: ";
std::cin>>age;

std::cout<<"Hello "<<name<<'\n';
std::cout<<"You are "<<age<<" Years old."<<'\n';
std::cout<<"You live in "<<country<<'\n';
    
return 0;
}