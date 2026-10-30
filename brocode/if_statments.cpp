#include <iostream>

int main(){

    int age;
    
    std::cout<<"Enter your age: ";
    std::cin>>age;

    if(age>=100){                          //has to be added before a>=18 or the you are an adult would run before it and it will be ignored

        std::cout<<"You are too old";

    }
     
    else if(age >= 18){
    std::cout<<"You are an adult!";
    }
    else if(age<0){
        std::cout<<"You arent born yet ???";
    }
    else{
        std::cout<<"You are not an adult";
    }

    return 0;
}