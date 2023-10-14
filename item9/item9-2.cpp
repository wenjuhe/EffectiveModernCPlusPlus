#include <iostream>
#include <list>

namespace std{
    template<typename T>
    using remove_const_t = typename remove_const<T>::type;
}


int main() {
    const int a = 10;
    const int b = 20;
    //typedef
    std::remove_const<int>::type non_const_a = a;
    non_const_a = 11;
    std::cout << non_const_a << std::endl;

    std::remove_const_t<int> non_const_b_using = b;


    return 0;
}
