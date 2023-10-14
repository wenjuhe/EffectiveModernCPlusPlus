#include <iostream>
#include <vector>

/*
 * In C++11, perhaps the primary use for decltype is declaring function templates
 * where the function’s return type depends on its parameter types.
 * */

namespace{
    template<typename T>
    class TypeDisplayer;

    template<typename Container,typename Index>
    /*
     * todo 验证auto,auto&的区别!
     * */
    auto& Func(Container& c,Index i) {
        return c[i];
    }
}

int main() {
    std::vector<int> vec{1,2,3};
    /*
     * todo operator[] on a contaner of objects of type T typically returns a T&.
     * */
    vec[0] = 100;
    std::cout << vec[0] << std::endl;

    int& res = Func(vec,0);
    res = 200;
    std::cout << vec[0] << std::endl;
    return 0;
}
