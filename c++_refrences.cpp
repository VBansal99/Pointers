#include<iostream>
void swap(int &a,int &val){
    int temp=0;
    temp=a;
    a=val;
    val=temp;
}
int main(){
    int a=10;
    //int &ref=a;
    int value=20;
    int &b=a;
    int &c=a;
    //int &c=value;  //Throws error of redeclaration
    // std::cout<<&ref<<std::endl;
    // std::cout<<ref<<std::endl;
    // std::cout<<&a<<std::endl;
    std::cout<<"The Value of a is:-"<<a<<std::endl;
    std::cout<<"The Value of b is:-"<<b<<std::endl;
    std::cout<<"The Value of c is:-"<<c<<std::endl;

    std::cout<<"The value of a before swap:-"<<a<<std::endl;
    std::cout<<"The Address of a before swap:-"<<&a<<std::endl;
    std::cout<<"The value of val before swap:-"<<value<<std::endl;
    std::cout<<"The address of val before swap:-"<<&value<<std::endl;
    swap(a,value);
    std::cout<<"The value of a after swap:-"<<a<<std::endl;
    std::cout<<"The Address of a after swap:-"<<&a<<std::endl;
    std::cout<<"The value of val after swap:-"<<value<<std::endl;
    std::cout<<"The address of val after swap:-"<<&value<<std::endl;
}