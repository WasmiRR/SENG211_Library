//
// Created by Enes ATICI on 31.10.2026.
//

#include <iostream>

int sum(const int values[], int size) {

    int total{0};
    for (int i{0}; i <size;  i++) {
        total += values[i];
    }
    return total;

}

int main() {
    int data[]{2,4,8};
    int result{sum(data, 3)};
    std::cout<<result;
}



