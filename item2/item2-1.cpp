#include <iostream>
namespace {
    template<typename T>
    class TypeDisplayer;

    template<typename T>
    void Func1(T t){}

    template<typename T>
    void Func2(const T t){}

    template<typename T>
    void Func3(const T& t){}
};
int main() {
    auto x = 10;         // T int, ParamType int
    const auto cx = 20;  //
    const auto& rcx = x; // T int, ParamType const int&
    return 0;
}
