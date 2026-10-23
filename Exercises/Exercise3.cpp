#include <iostream>

int main() {
    int studentAge{};
    double gpa{};
    std::cout << "Enter your age: ";
    std::cin >> studentAge;
    std::cout << "Enter your gpa: ";
    std::cin >> gpa;

    std::cout << "Your age is " << studentAge << " and your gpa is " <<  gpa << "\n";
    return 0;

}
