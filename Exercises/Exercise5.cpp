//
// Created by Enes ATICI on 30.10.2026.
//


#include <iostream>


int add(int a, int b);

int main(){
    int sum(add(4,9));
    std::cout <<sum;


}

int add(int a, int b) {
    return a+b;
}
