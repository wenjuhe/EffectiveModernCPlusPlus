#include <iostream>
#include <vector>


//Sum class template representing the proxy object
template<typename Left,typename Right>
class Sum{
private:
    const Left& left_;
    const Right& right_;
public:
    Sum(const Left& left,const Right& right):left_(left),right_(right){}
    double operator[](size_t index) const {
        return left_[index] + right_[index];
    }
};


//Matrix class
class Matrix {
private:
    size_t rows_;
    size_t cols_;
    std::vector<double> data_;
public:
    Matrix(size_t rows,size_t cols) : rows_(rows),cols_(cols),data_(rows * cols){}

    //Operator to access element of Matrix
    double operator[](size_t index) const {
        return data_[index];
    }

    /*
     * Matrix sum = m1 + m2 + m3 + m4
     *  Sum<Matrix,Sum<Matrix,Sum<Matrix,Sum<Matrix,Matrix>>>>
     * Operator to add two matrices using a Sum proxy
     * */
    template<typename Other>
    Sum<Matrix,Other> operator+(const Other& other) const{
        return Sum<Matrix,Other>(*this,other);
    }
};


int main() {
    return 0;
}
