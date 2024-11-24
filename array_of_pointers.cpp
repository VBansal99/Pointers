#include<iostream>
int main(){
    int ptr[5];
    int *ptr2[5];
    // int marks[10];
    // std::cout<<"Enter the elements in array:-";
    // for(int i=0;i<10;i++){
    //     std::cin>>marks[i];
    // }
    // ptr=marks;
    // std::cout<<"Value of the *ptr is:-"<<*ptr<<std::endl;
    // std::cout<<"Value of the *array is:-"<<*marks<<std::endl;
    // std::cout<<"Address of marks is:-"<<marks<<std::endl;
    // std::cout<<"Address of ptr is:-"<<ptr<<std::endl;
    std::cout<<"Enter Five number:-";
    for(int i=0;i<5;i++){
        std::cin>>ptr[i];
    }
    for(int i=0;i<5;i++){
        ptr2[i]=&ptr[i];
    }

    std::cout<<"The Vaues of ptr1 are:-";
    for(int i=0;i<5;i++){
        std::cout<<ptr[i]<<std::endl;
    }

    std::cout<<"The Vaues of ptr2 are:-";
    for(int i=0;i<5;i++){
        std::cout<<*ptr2[i]<<std::endl;
    }

    std::cout<<"Address of ptr1 are:-";
     for(int i=0;i<5;i++){
        std::cout<<&ptr[i]<<std::endl;
    }

    std::cout<<"Address of ptr1 are:-";
     for(int i=0;i<5;i++){
        std::cout<<&ptr2[i]<<std::endl;
    }

}