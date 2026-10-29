#include <iostream>


/*   1)typedef = reserved keyword used to create an 
     additional name (aliase) for another data type  
     
     2)using = better with templates                     
                                                       */

//typedef std::string text_t;
using text_t = std::string;     

int main(){
    text_t firstName = "Ahmed";
    std::cout<<firstName<<'\n';

    return 0;
}