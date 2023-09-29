#include <iostream>


namespace {
    template<typename T>
    class TypeDisplayer;  //declaration

    template<typename T>
    void func(T& param) {
        TypeDisplayer<decltype(param)> type_displayer;
    }
}



int main() {
    int x = 10;
    const int cx = x;
    const int& rx = x;
    func(x);    //T ---> int, ParamType int&
    //TypeDisplayer<decltype(x)> type_displayer;
    func(cx);   //T ---> const int, ParamType const int&
    //TypeDisplayer<decltype(cx)> type_displayer;
    func(rx);   //T ---> const int, ParamType const int&
    //TypeDisplayer<decltype(rx)> type_displayer;
    return 0;
}
