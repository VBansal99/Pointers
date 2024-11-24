#include<iostream>

int main(){
    int value=5;
    int *ptr;
    ptr=&value;
    std::cout<<"The address of the ptr is:-"<<ptr<<std::endl;
    std::cout<<"The Value of the ptr is:-"<<*ptr<<std::endl;
    std::cout<<"The Address of the variable is:-"<<&value<<std::endl;
}