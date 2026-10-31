//
// Created by Enes ATICI on 31.10.2026.
//


#include <iostream>

int scale(int number,int factor) {
    number *= factor;
    return number;
}


int x{4};
int a{scale(x,5)};
int b{scale(x,3)};

int main() {
    std::cout << a << "\n";
    std::cout << b << "\n";
}