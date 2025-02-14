#include <iostream>
#include "utils.cpp"

int main() {
    int x = 5;
    int y = 10;
    int sum = 0, prod = 0;
    sum = add(x, dec(y));
    prod = mul(x, y);
    std::cout << "x + (y - 1) = " << sum << '\n';
    std::cout << "x * y = " << prod << '\n';
    std::cout << "result of comparing x and y: " << cmp(x, y) << '\n';
    std::cout << "program finished!";
}