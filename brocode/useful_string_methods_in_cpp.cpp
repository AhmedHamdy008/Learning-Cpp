#include <iostream>
#include <string>

int main(){

std::string name;

std::cout<<"Enter Your name: ";
std::getline(std::cin,name);

if(name.length()>12){

    std::cout<<"Name cant be more than 12 charcaters";
}


else if(name.empty()){

std::cout<<"You didn't enter your name.";

}


else{
    std::cout<<"Welcome "<<name<<'\n';
}

name.append("@gmail.com");

std::cout<<"Your username is "<<name<<'\n';

std::cout<<name.at(5)<<'\n';

std::cout<<name.find("a")<<'\n';

name.insert(5, "a");
std::cout<<name<<'\n';

name.erase(5,16 );
std::cout<<name<<'\n';

name.clear();                                //clears value of name
std::cout<<"Hello "<<name;


    return 0;
}