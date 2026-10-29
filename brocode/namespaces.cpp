#include <iostream>

//using namespace std can cause conflicts better if not used
using std::cout;
using std::string;

namespace first {
    int x=1;
}

namespace second{
    int x =2;
}

int main(){
using namespace first;

cout<<x<<'\n'<<second::x;

}