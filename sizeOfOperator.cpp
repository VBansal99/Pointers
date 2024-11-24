#include <iostream>
#include <cstddef>
class data_type
{
    public:
    char c;
    int data1;
    short s;
};
void fun(int arr[]){
    std::cout<<"Size of the array is:-"<<sizeof(arr)<<std::endl;
}
int main()
{
    // Simple explanation of sizeOf Operator
    // std::cout << "Size of int data type:-" << sizeof(int) << std::endl;
    // std::cout << "Size of char data type:-" << sizeof(char) << std::endl;
    // std::cout << "Size of Float data type:-" << sizeof(float) << std::endl;
    // std::cout << "Size of Double data type:-" << sizeof(double) << std::endl;
    // std::cout << "Size of Short data type:-" << sizeof(short) << std::endl;

    // // When Operand is of class type
    // data_type b;

    // std::cout << "Offset of class" << offsetof(data_type, data1) << std::endl;
    // std::cout << "Offset of char" << offsetof(data_type, c) << std::endl;
    // std::cout << "Offset of Short" << offsetof(data_type, s) << std::endl;
    // std::cout << "Size When operand is of class type:-" << sizeof(data_type) << std::endl;
    // std::cout << "Size When operand is of class type:-" << sizeof(b) << std::endl;

    int arr[]={1,2,3,4,5};
    fun(arr);
}
