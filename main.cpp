#include <iostream>
#include "faulty_library.h"

int main(int, char**) {
    std::string a = "tree";
    std::string b = "park";
    std::cout << "a: " << a << " b: " << b << std::endl;
    swap(a,b);
    std::cout << "a: " << a << " b: " << b << std::endl;
}
