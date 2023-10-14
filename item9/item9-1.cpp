#include <iostream>
#include <list>

/*
 * todo
 *  confident 自信的
 *  convince 使确信
 *  guess 猜测
 * */
namespace{
    template<typename T>
    using MyAllocList = std::list<T,std::allocator<T>>;

    template<typename T>
    class Widget{
    private:
        MyAllocList<T> myAllocList;
    };

}


int main() {
    return 0;
}
