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
> case 2 T is a universal reference 
```c++
namespace {
    template<typename T>
    void func(T&& param) {
         
    }
}
```
1) if l-value, ---> T &
2) if r-value, ---> normal rules apply
> case 3 T is not a reference / pointer
1) ignore reference & const
> case 4 Array Decay