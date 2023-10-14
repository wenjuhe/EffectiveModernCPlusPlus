#include <iostream>
#include <vector>

namespace{
    template<typename T>
    class TypeDisplayer;

    template<typename Container,typename Index>

    decltype(auto) Func(Container& c,Index i) {
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
