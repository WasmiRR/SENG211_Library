#include <iostream>
#include <limits>


int main() {

    std::cout << "Integer size: " << sizeof (int) << " bytes\n";

    std::cout << "Double size: " << sizeof (double) << " bytes\n";

    std::cout << "Maximum possible value of int: " << std::numeric_limits<int>::max() << "\n";

    bool nedesem {true};

    std::cout << std::boolalpha << nedesem;

    return 0;



}
