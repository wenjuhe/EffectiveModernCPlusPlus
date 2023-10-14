#include <iostream>
#include <memory>
#include <vector>

namespace {
    class User{
    private:
        std::vector<int> vec = {1,2,3};
    public:
        std::vector<int>& GetVec() &{
            std::cout << "Hello in GetVec &" << std::endl;
            return vec;
        }

        //member reference ---> 避免额外的拷贝
        std::vector<int> GetVec() &&{
            std::cout << "Hello in GetVec &&" << std::endl;
            return std::move(vec);
        }
    };

}


int main() {

    //rvalue
    std::vector<int> hello = User().GetVec();


    //lvalue
    User user;
    user.GetVec();
    return 0;
}
