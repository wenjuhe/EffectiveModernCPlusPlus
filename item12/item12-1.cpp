#include <iostream>
#include <memory>

/*
 * • The base class function must be virtual.
 * • The base and derived function names must be identical (except in the case of destructors).
 * • The parameter types of the base and derived functions must be identical.
 * • The constness of the base and derived functions must be identical.
 * • The return types and exception specifications of the base and derived functions must be compatible
 *
 * todo
 *  identical 相同的
 *  specifications 规范
 * */
namespace {
    class Base{
    public:
        virtual void Func() const {
            std::cout << "Hello in Base" << std::endl;
        }
        virtual ~Base() = default;
    };

    class Child : public Base{
    public:
        virtual void Func() const override{
            std::cout << "Hello in Child" << std::endl;
        }
        virtual ~Child()  = default;
    };
}


int main() {
    std::unique_ptr<Base> base_ptr = std::make_unique<Child>();
    base_ptr->Func();
    return 0;
}
