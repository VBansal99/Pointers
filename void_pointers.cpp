#include<iostream>
int main(){
    // int *ptr;
    // float f=3.05;
  //  *ptr=&f;   // Throws an error to overcome this we use void pointers
   // std::cout<<"The Value of the *ptr is:-"<<*ptr<<std::endl;

    void *ptr;
    float f=3.05;
    ptr=&f;
    std::cout<<"Address of the ptr is:-"<<&ptr<<std::endl;
    std::cout<<"Address of the ptr again is:-"<<ptr<<std::endl;
    std::cout<<"Value of the ptr is:-"<<*(static_cast<float*>(ptr))<<std::endl;
    std::cout<<"Address of the float value is:-"<<&f<<std::endl;
    std::cout<<"Value of the float is:-"<<f<<std::endl;

}