//
// Created by Enes ATICI on 31.10.2026.
//

#include <iostream>


void printLine(char symbol, int count) {
    for (int i{0}; i<count; i++) {
        std::cout << symbol;;
    }
    return ;

    std::cout << "\n";
}
    int main() {

        printLine('-',  10);

    }
