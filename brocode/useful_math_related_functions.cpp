#include <iostream>
#include <cmath>

int main(){

    double x = 3.25;
    double y = 3.99;
    double max;
    double min;
    double power;
    double squareRoot;
    double absValue;
    int roundNum;
    int roundUp;
    int roundDown;

    max = std::max(x, y);
    min = std::min(x, y);
    power = pow(2, 3);
    squareRoot = sqrt(9);
    absValue = abs(-7);
    roundNum = round(x);
    roundUp = ceil(x);
    roundDown = floor(y);
    
    std::cout<<"Max = "<<max<<'\n';
    std::cout<<"Min = "<<min<<'\n';
    std::cout<<"Power = "<<power<<'\n';
    std::cout<<"Square root = "<<squareRoot<<'\n';
    std::cout<<"Absolute value = "<<absValue<<'\n';
    std::cout<<"Round number = "<<roundNum<<'\n';
    std::cout<<"Round up = "<<roundUp<<'\n';
    std::cout<<"Round down = "<<roundDown<<'\n';

    return 0;
}