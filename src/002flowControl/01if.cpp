#include <iostream>

int main()
{
    int a;
    std::cout<<"Please enter a positive number: "<<std::endl;
    std::cin>>a;
    if (a<=0){
        std::cout<<"You didn't enter a positive number!"<<std::endl;
        std::abort;
    }
}