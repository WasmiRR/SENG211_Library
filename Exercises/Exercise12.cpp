//
// Created by Enes ATICI on 31.10.2026.
//

#include <iostream>

int countdown(int value) {

    if (value==0) {
        return 0;
    }
    std::cout<<value<<" ";
    return countdown(value-1);
}

int main() {
    std::cout << countdown(5) << " ";
}