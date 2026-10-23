#include <iostream>

namespace Math {
    int add(int a, int b) {
        return a + b;
    }
}
namespace Text {
    void add(int x, int y) {
        std::cout << x << " and " << y <<" added together \n";
    }
}
int main() {
    std::cout << Math::add(3, 4)<<'\n';
    Text::add(3, 4);
    return 0;
}