#include <iostream>

int main()
{
    int num;
    std::cout<<"Enter a number to check if the number is Even or Odd: "<<std::endl;
    std::cin>>num;
    if (num%2==0)
        std::cout<<num<<" is a Even Number!"<<std::endl;
    else
        std::cout<<num<<" is a Odd number!"<<std::endl;
}