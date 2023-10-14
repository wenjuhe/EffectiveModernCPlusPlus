#include <iostream>
#include <vector>

namespace{
    void Func(int a) {
        std::cout << "Hello in int a";
    }
    void Func(void* ptr) {
        std::cout << "Hello in void ptr";
    }
}


int main() {
    //Func(NULL);
    Func(nullptr);
    return 0;
}
