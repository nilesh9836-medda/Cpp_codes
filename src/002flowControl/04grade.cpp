#include <iostream>

int main()
{
    int marks;
    std::cout<<"Enter your marks to see your grade: "<<std::endl;
    std::cin>>marks;
    if (marks == 100)
        std::cout<<"Your Grade: O"<<std::endl;
    else if (marks<100 && marks>=90)
        std::cout<<"Your Grade: E"<<std::endl;
    else if (marks<90 && marks>=80)
        std::cout<<"Your Grade: A"<<std::endl;
    else if (marks<80 && marks>=70)
        std::cout<<"Your Grade: B"<<std::endl;
    else if (marks<70 && marks>=60)
        std::cout<<"Your Grade: C"<<std::endl;
    else if (marks<60 && marks>=50)
        std::cout<<"Your Grade: D"<<std::endl;
    else
        std::cout<<"Your Grade: F"<<std::endl;
}