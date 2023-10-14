#include <iostream>
#include <vector>

namespace{
    class Widget{
    private:
        int a_;
    public:
        Widget(){
            std::cout << "Hello in default constructor" << std::endl;
        }
        Widget(int a) : a_(a){
            std::cout << "Hello in one argument constructor" << std::endl;
        }
        Widget(int a,bool b) : a_(a){
            std::cout << "Hello in two arguments constructor" << std::endl;
        }
        /*Widget(std::initializer_list<int> il){
            std::cout << "Hello in std::initializer_list<int> constructor" << std::endl;
        }*/
        Widget(std::initializer_list<std::string> il){
            std::cout << "Hello in std::initializer_list<string> constructor" << std::endl;
        }
    };
}


int main() {
    Widget w1(1);
    Widget w2{2};
    Widget w3();  //Function declaration, c++ parse
    Widget w4{};
    std::cout << "***" << std::endl;
    Widget w5(1,false);
    Widget w6{2,false};
    Widget w7{{}};
    Widget w8{};
    Widget w9({});
    return 0;
}
