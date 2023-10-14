#include <iostream>
#include <memory>

namespace {
    class Base{
    public:
        virtual Base& Func() const {
            std::cout << "Hello in Base" << std::endl;
            return const_cast<Base&> (*this);
        }
        virtual ~Base() = default;
    };

    class Child : public Base{
    public:
        virtual Child& Func() const override{
            std::cout << "Hello in Child" << std::endl;
            return const_cast<Child&>(*this);
        }
        virtual ~Child()  = default;
    };
}


int main() {
    std::unique_ptr<Base> base_ptr = std::make_unique<Child>();
    base_ptr->Func();
    return 0;
}
