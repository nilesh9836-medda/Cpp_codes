#include <iostream>

int main()
{
    int year;
    std::cout<<"Enter a year to check if it is Leap Year or Not: "<<std::endl;
    std::cin>>year;
    if (year%100 == 0)
    {
        if (year%400 == 0)
            std::cout<<year<<" is a Leap Year!!!"<<std::endl;
        else
            std::cout<<year<<" is Not a Leap Year"<<std::endl;
    }
    else
    {
        if (year%4 == 0)
            std::cout<<year<<" is a Leap Year!!!"<<std::endl;
        else
            std::cout<<year<<" is Not a Leap Year"<<std::endl;
    }
}