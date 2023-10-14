#include <iostream>
#include <vector>
#include <unordered_map>

class A{
public:
    A(){}
    A(const A& a) {
        std::cout << "in copy constructor" << std::endl;
    }
    bool operator == (const A& a)const {
        return false;
    }
};

namespace std{
    template<>
    struct hash<A>{
        std::size_t operator() (const A& a) const {
            return 1;
        }
    };
}

namespace{
    void Func() {
        A a1;
        A a2;
        //primitive + pointer
        std::unordered_map<A,int> m = {{a1,123},{a2,456}};
        std::cout << "begin" << std::endl;
        /*
         * todo const std::pair<const A,int>&  无拷贝
         *      const std::pair<A,int>&        有拷贝
         *      const auto&
         * */
        for (const auto& p : m) {
            std::cout << p.second << std::endl;
        }
    }
}


int main() {
    Func();
    return 0;
}
