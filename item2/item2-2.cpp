#include <iostream>
namespace {
    template<typename T>
    class TypeDisplayer;

    template<typename T>
    void Func1(T t){
        TypeDisplayer<decltype(t)> td;
    }
};
int main() {
    auto x = {1,2,3}; //std::initializer_list<int>
    Func1(x);
    return 0;
}
