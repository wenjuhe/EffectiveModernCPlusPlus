#include <iostream>
#include <memory>
#include <vector>

namespace {
    //C++98 rule of three
    //C++11 rule of five
    class Widget{
    public:
        //default constructor
        Widget() {
            std::cout << "In Widget()" << std::endl;
        }

        //copy constructor
        Widget(const Widget& rhs) {
            std::cout << "In Widget(const Widget& rhs)" << std::endl;
        }

        //copy == operator
        Widget& operator=(const Widget& rhs) {
            std::cout << "In operator=(const Widget& rhs)" << std::endl;
            return *this;
        }

        //move constructor
        Widget(Widget&& rhs) noexcept{
            std::cout << "In Widget(Widget&& rhs)" << std::endl;
        }

        //move assignment operator
        Widget& operator=(Widget&& rhs) noexcept {
            std::cout << "In operator=(Widget&& rhs)" << std::endl;
            return *this;
        }

        //destructor
        ~Widget(){
            std::cout << "In destructor" << std::endl;
        }
    };

}


int main() {
    Widget w1{};
    Widget w2{w1};
    /*
     * todo 等价于 w2.operator=(w1)
     * */
    w2 = w1;
    Widget w3 = std::move(w2);
    w3 = std::move(w1);
    return 0;
}
