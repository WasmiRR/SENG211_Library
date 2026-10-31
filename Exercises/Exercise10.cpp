//
// Created by Enes ATICI on 31.10.2026.
//
#include <iostream>

void addOne(int& number) {

    ++number;
}

int main() {
    int value{5};
    addOne(value);
    std::cout<<value<<"\n";

}