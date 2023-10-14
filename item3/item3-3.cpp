#include <iostream>
#include <vector>

namespace{
    template<typename T>
    class TypeDisplayer;

    template<typename Container,typename Index>

    decltype(auto) Func(Container&& c,Index i) {
        return std::forward<Container>(c)[i];
    }
}

int main() {
    Func(std::vector<int>{1,2,3},0);
    return 0;
}
