#include <iostream>


namespace {
    template<typename T>
    class TypeDisplayer;  //declaration

    template<typename T>
    void func(T  param) {
        //TypeDisplayer<decltype(param)> type_displayer;
        param = 100;
    }
}



int main() {
    int x = 10;
    const int cx = x;
    const int& rx = x;
    //func(x);    //T ---> int, ParamType int
    //func(cx);   //T ---> int, ParamType int
    func(rx);   //T ---> int, ParamType int
    std::cout << rx << std::endl;
    //func(27);     //T ---> int, ParamType  int
    return 0;
}
