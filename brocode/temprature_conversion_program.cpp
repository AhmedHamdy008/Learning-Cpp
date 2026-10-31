#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout<<"********** Temprature **********\n";

    std::cout<<"F = Fahrenheit\n";
    std::cout<<"C = Celcius\n";
    std::cout<<"Which unit would u like to convert to? : ";
    std::cin>>unit;

    if(unit=='C'|| unit=='c'){
         
        std::cout<<"Enter the temprature in Fahrenheit: ";
        std::cin>>temp;
        
        temp=(temp - 32.0 ) / 1.8;

        std::cout<<"Temprature is: "<<temp<<"C\n";
    }
    else if(unit=='F'|| unit=='f'){

        std::cout<<"Enter the temprature in Celcius: ";
        std::cin>>temp;

        temp= (temp*1.8) + 32.0;

        std::cout<<"Temprature is: "<<temp<<"F\n";
    }
    else{
        std::cout<<"You didnt enter in  a valid unit\n";
    }

    std::cout<<"********************************\n";

    return 0;
}
