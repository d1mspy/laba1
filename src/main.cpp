#include <iostream>
#include "utils.cpp"

int main() {
    int x = 5;
    int y = 10;
    int sum = 0;
    sum = add(x, dec(y));
    std::cout << "x + (y - 1) = " << sum << '\n';
    std::cout << cmp(x, y) << '\n';
}