#include <iostream>

int main(){

int rows;
std::cout<<"Enter number of rows: ";
std::cin>>rows;

int columns;
std::cout<<"Enter number of columns: ";
std::cin>>columns;

char symbol='$';

for(int i=0; i<rows;i++){
for(int j=0;j<columns;j++){
  std::cout<<symbol<<' ';
}
std::cout<<'\n';
} 

return 0;
}