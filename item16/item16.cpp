#include <iostream>
#include <memory>
#include <vector>
#include <mutex>

/*
 * todo  std::mutex is a move-only type  (i.e., a type that can be moved, but not copied),
 *       a side effect of adding m to Polynomial is that Polynomial
 *       loses the ability to be copied. It can still be moved
 * */
namespace {
    class RootHelper{
    private:
        mutable std::mutex m;
        mutable std::vector<float> roots{};
        mutable bool hasCalculated{false};
    public:
        std::vector<float> GetRoot() const {
            /*
             * todo 为什么按照视频的写法 std::lock_guard(m) 不行
             * */
            //std::lock_guard<std::mutex> lock(m);  //automatically lock/unlock
            std::lock_guard<std::mutex>(m);  //automatically lock/unlock
            if (hasCalculated) {
                return roots;
            }else {
                hasCalculated = true;
                return roots;
            }
        }
    };
}


int main() {
    return 0;
}
