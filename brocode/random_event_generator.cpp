#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

    srand(time(0));

    int num= (rand() % 3)+1;
    
    switch(num){

        case 1: std::cout<<"You won a car!\n";
              break;
        case 2: std::cout<<"You won 100 dollars!\n";
              break;
        case 3: std::cout<<"You lost.\n";
              break;

    }

return 0;
}