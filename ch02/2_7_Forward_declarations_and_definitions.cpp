#include <iostream>
using namespace std;

int add(int x, int y); //forward declaration = add exists

int main()
{
    cout<<"2 + 3 = "<<add(2,3)<<'\n';
    return 0;
}
int add(int x, int y)   //definition = what is the action that's going to happen
{
    return x+y;
}