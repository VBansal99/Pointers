#include <iostream>
class pointerArithmetic
{
    void pointer_arithmetic();
    void increment_decrement_operators();
    void subscriting_via_pointer_arithmetic();

    int x{5};

public:
    void runPointerArithmetic()
    {
        pointer_arithmetic();
    }
    void runIncrementDecrementOperators()
    {
        increment_decrement_operators();
    }
    void runSubscriptingPointer(){
        subscriting_via_pointer_arithmetic();
    }
};

void pointerArithmetic::pointer_arithmetic()
{
    const int* ptr{&x};
    std::cout << "With Increment values:-" << std::endl;
    std::cout << "Address of ptr:-" << ptr << std::endl
              << "Address of ptr with incremented values:-" << (ptr + 1) << std::endl
              << "Address of ptr with incremented values:-" << (ptr + 2) << std::endl;
    std::cout << *ptr << std::endl; // Values will not increment
    std::cout << "With Decrement values:-" << std::endl;
    std::cout << "Address of ptr:-" << ptr << std::endl
              << "Address of ptr with incremented values:-" << (ptr - 1) << std::endl
              << "Address of ptr with incremented values:-" << (ptr - 2) << std::endl;
    std::cout << *ptr << std::endl; // Values will not decrement
}

void pointerArithmetic::increment_decrement_operators()
{
    const int* ptr{&x};
    std::cout<<"The Address of the ptr is:-"<<ptr<<std::endl;

    ptr++;
    std::cout<<"After increment the address of the ptr is:-"<<ptr<<std::endl;

    ptr--;
    std::cout<<"After decrement the address of thr ptr is:-"<<ptr<<std::endl;

    ++ptr;
    std::cout<<"After preincrement the address of the ptr is:-"<<ptr<<std::endl;

    --ptr;
    std::cout<<"After predecrement the address of thr ptr is:-"<<ptr<<std::endl;
}

void pointerArithmetic::subscriting_via_pointer_arithmetic(){
    const int arr[]{1,2,3,4,5};
    const int* ptr{arr};
    std::cout<<"The Value of ptr is:-"<<*ptr<<std::endl;
    std::cout<<"With Specific Index:-"<<ptr[2]<<std::endl;

    // via subscripting
    std::cout<<&arr[0]<<" "<<&arr[1]<<" "<<&arr[2]<<std::endl;
    std::cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<std::endl;

    std::cout<<arr<<" "<<(arr+1)<<" "<<(arr+2)<<std::endl;
    std::cout<<*arr<<" "<<*(arr+1)<<" "<<*(arr+2)<<std::endl;

    // with relative address
    std::cout<<*ptr<<" "<<ptr[0]<<std::endl;
    std::cout<<*(ptr+1)<<" "<<ptr[1]<<std::endl;

    ptr=&arr[3];
    std::cout<<*ptr<<" "<<ptr[0]<<std::endl;
    std::cout<<*(ptr+1)<<" "<<ptr[1]<<std::endl;
}
int main()
{
    pointerArithmetic p1;
    p1.runPointerArithmetic();
    p1.runIncrementDecrementOperators();
    p1.runSubscriptingPointer();
}