#include<iostream>

#define GREETING "Hello World!"
#define PRINT_EXTRA

int main() {
    std::cout<<GREETING<<'\n';
#ifdef PRINT_EXTRA
    std::cout<<"PRINT_EXTRA is defined so this line runs normally\n";
    #endif

#ifndef DNE
    std::cout<<"This line runs as DNE isn't defined\n";
    #endif

#if 0
    std::cout<<"this line is ignored/disabled and the comiler doesnt see it";
#endif
    return 0;
}
