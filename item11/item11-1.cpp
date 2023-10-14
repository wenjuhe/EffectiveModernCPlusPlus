#include <iostream>

/*
 * The C++98 approach to preventing use of these functions is to declare them private and not define them
 * approach to 接近
 * */
namespace {
    bool IsLucky(int num) {
        std::cout << "Hello in IsLucky Int" << std::endl;
    }
    bool IsLucky(char ch) = delete;
}


int main() {
    //parameter mismatch
    //IsLucky('c');
    IsLucky(true);
    return 0;
}
