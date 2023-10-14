#include <iostream>

/*
 * Both scoped and unscoped enums support specification of the underlying type.
 * The default underlying type for scoped enums is int. Unscoped enums have no
 * default underlying type.
 * */
namespace {
    //scoped enum
    /*
     * 1.scope avoid name conflict
     * 2.scope prevent conversion to int
     * */
    enum class Color {
        white,
        yellow,
        blue,
    };

    auto white = 100;
}


int main() {
    Color color = Color::white;
    return 0;
}
