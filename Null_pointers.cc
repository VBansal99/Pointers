#include<iostream>

class Pointers{
    void normal_pointers();
    void null_pointers();
    void null_pointers_declaration();
    void nullptr_keyword();
    void dangling_pointers();
    int x={5};

//Public interface
    public:
    void runNormalPointers(){
        normal_pointers();
    }
    void runNullPointers(){
        null_pointers();
    }
    void runNullPointersDeclaration(){
        null_pointers_declaration();
    }
    void runNullptrKeyword(){
        nullptr_keyword();
    }
    void rundanglingPointers(){
        dangling_pointers();
    }
};

void Pointers::normal_pointers(){
    int *ptr={&x};
    std::cout<<"The value of the Ptr is:-"<<*ptr<<std::endl;
    std::cout<<"The Value of the x is:-"<<x<<std::endl;
    std::cout<<"The Address of the ptr is:-"<<ptr<<std::endl;
    std::cout<<"The Address of the x is:-"<<&x<<std::endl;
    std::cout<<"The Memory address of the ptr is:-"<<&ptr<<std::endl;
}

void Pointers::null_pointers(){
    int  *ptr{};
    std::cout<<"The Value of the ptr is:-"<<*ptr<<std::endl;
    std::cout<<"The Address of the ptr is:-"<<ptr<<std::endl; // it cause segmentation fault 
}

void Pointers::null_pointers_declaration(){
    int *ptr1={};
    //*ptr1=x;               //if we use this segmentation fault occurs
    ptr1=&x;
    std::cout<<"The Value of the ptr1 is:-"<<*ptr1<<std::endl;
    std::cout<<"The Address of the ptr1 is:-"<<ptr1<<std::endl;

}

void Pointers::nullptr_keyword(){
    int *ptr2 {nullptr};
    //*ptr2=x;
    //ptr2=&x;
    if(ptr2==nullptr){
        std::cout<<"It's a null pointer"<<std::endl;
    }else{
    std::cout<<"It is not a null pointer"<<std::endl;
    std::cout<<"The Value of the ptr2 is:-"<<*ptr2<<std::endl;
    std::cout<<"The Address of the ptr2 is:-"<<ptr2<<std::endl;
    }
}

void Pointers::dangling_pointers(){
    int *ptr3{};
    {
        int h{9};
        ptr3=&h;
    }
    int newValue=41;
    if(ptr3){
        std::cout<<"The value of the ptr3 is :-"<<*ptr3<<std::endl;
        std::cout<<"The Address of the ptr3 is:-"<<ptr3<<std::endl;
    }
}
int main(){
    Pointers p;
    p.runNormalPointers();
    //p.runNullPointers();
    p.runNullPointersDeclaration();
    p.runNullptrKeyword();
    p.rundanglingPointers();
    return 0;
}

