#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));

    //3 12 sided dice
    int num1= (rand() % 12)+1;
    int num2= (rand() % 12)+1;
    int num3= (rand() % 12)+1;

    std::cout<<num1<<' '<<num2<<' '<<num3<<'\n';

    int total= num1 + num2 + num3;
    if(total>=21){

    std::cout<<"You have won !";

    }
    else{

    std::cout<<"You have lost.";

    }

return 0;
}