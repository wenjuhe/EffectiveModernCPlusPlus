#include <iostream>

namespace {
    template<typename T>
    void Func(T a) {
        std::cout << "In T a" <<std::endl;
    }

    template<>
    void Func(int num) = delete;
}


int main() {
    Func<long>(5);
    Func<std::string>("");
    return 0;
}
