#include <iostream>
int main()
{
    int a = 20;
    int b = 10;
    int *ptr1 = nullptr;
    int *ptr2 = nullptr;

    ptr1 = &a;
    ptr2 = &b;

    if (ptr1 != nullptr && ptr2 != nullptr)
    {
        std::cout << "Before swap " << "a:" << *ptr1 << " b:" << *ptr2 << std::endl;
        *ptr1 = *ptr1 + *ptr2; // 30
        *ptr2 = *ptr1 - *ptr2; // 20
        *ptr1 = *ptr1 - *ptr2; // 10
        std::cout << "After swap " << "a:" << *ptr1 << " b:" << *ptr2 << std::endl;
    }
}