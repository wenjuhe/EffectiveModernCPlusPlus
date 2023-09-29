#Item 1
```c++
namespace {
    template<typename T>
    void func(ParamType param) {
        
    }
}
```
> case 1 T is reference / pointer
```c++
namespace {
    template<typename T>
    void func(T& param) {
        
    }
}
```
1) if has reference,ignore the reference
2) regular match
> case 2 T is a universal ref erence 
> case 3 T is not a reference / pointer
> case 4 Array Decay