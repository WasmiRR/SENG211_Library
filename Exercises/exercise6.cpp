//
// Created by Enes ATICI on 30.10.2026.
//


#include <iostream>

int power(int base, int exponent) {
    int result{1};
    for (int i{0}; i<exponent; i++) {


        result *= base;

    }
    return result;
}
    int main(){


        int answer{power(3,4)};
        std::cout << answer;
    }
