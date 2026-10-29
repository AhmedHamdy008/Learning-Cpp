#include <iostream>

int main(){

    double x = (int) 3.14;
    std::cout<<x<<'\n';

    std::cout<<(char)100<<'\n';
    
    int correct= 8;
    int total= 10;
    double score=(double)correct/total;
    
    std::cout<<score*100<<"%\n";
    
    return 0;
}