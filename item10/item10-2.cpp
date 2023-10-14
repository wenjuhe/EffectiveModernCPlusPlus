#include <iostream>

namespace {
    enum  Color {
        white,
        yellow,
        blue,
    };
}


int main() {
    Color color = Color::white;
    if (color < 12) {
        std::cout << "hello in color" << std::endl;
    }
    return 0;
}
