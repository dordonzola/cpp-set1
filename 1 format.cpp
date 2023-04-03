#include <iostream>
#include <format>


int main()
{

    int outside=0,inside=1;
    std::string line(outside, '*'), space(inside, ' ');

    while(outside<inside || outside<0 || inside<0)
    {
        std::cout<<"Dlugosc boku kwadratu zewnetrznego: ";
        std::cin>>outside;
        std::cout<<"\nDlugosc boku kwadratu wewnetrznego (Mniejsza niz zewnetrznego): ";
        std::cin>>inside;
        std::cout<<"\n";
        if (inside>outside-1 || outside<=0 || inside<0 || inside%2!=outside%2 )
        {
            std::cout<<"\nWprowadzone dane sa bledne!\n";
        }
    }

    for(int i=0;i<(outside-inside)/2;++i)
    {
        std::cout <<line<<"\n";
    }

    for (int i = 0; i <= inside; ++i)
    {
        std::cout << std::format("{:*^{}}\n", space, outside);
    }

    for(int i=0;i<(outside-inside)/2;++i)
    {
        std::cout <<line<<"\n";
    }


    return 0;
}
