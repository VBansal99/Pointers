#include<iostream>
void basicpointer();
void basicSecondPointer();
void arr1();
int main(){
    int myVar=25;
    int bar;
    int *foo=0;
     *foo = &foo;
     bar = myVar;
    //basicpointer();
    //basicSecondPointer();
    //arr1();
/   std::cout<<"MyVar value is:-" <<myVar<<std::endl;
//     std::cout<<"Foo Value is:-" <<&foo<<std::endl;
//     std::cout<<"Foo Value is:-" <<foo<<std::endl;
//     std::cout<<"Bar Value is:-" <<bar<<std::endl;
return 0;
}

void basicpointer(){
int firstVariable ,secondVariable;
int *myPointer;
myPointer=&firstVariable;
firstVariable=10;
myPointer=&secondVariable;
secondVariable=20;
std::cout<<"First variable value:-"<<firstVariable<<std::endl;
std::cout<<"Seccond Variable value:-"<<secondVariable<<std::endl;
std::cout<<*myPointer;
}
void basicSecondPointer(){
int firstVariable =5,secondVariable=15;
int *p1; 
int *p2;
p1=&firstVariable;
std::cout<<p1<<" "<<&p1<<" "<<firstVariable<<" "<<&firstVariable<<" "<<*p1<<" "<<std::endl;
p2=&secondVariable;
std::cout<<p2<<" "<<firstVariable<<" "<<*p2<<" "<<std::endl;
*p1=10;
std::cout<<p1<<" "<<*p1<<" "<<std::endl;
*p2=*p1;
std::cout<<p1<<" "<<*p1<<" "<<std::endl;
std::cout<<p2<<" "<<*p2<<" "<<std::endl;
p1=p2;
std::cout<<p1<<" "<<*p1<<" "<<std::endl;
std::cout<<p2<<" "<<*p2<<" "<<std::endl;
*p2=20;
std::cout<<firstVariable<<std::endl;
std::cout<<secondVariable<<std::endl;
}
void arr1(){
    int arr[5]=1;
    for(int i=0;i<5;i++)
    std::cout<<arr[i];
}