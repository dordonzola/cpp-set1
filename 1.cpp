#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int outside=0,inside=1;
    while(outside<inside || outside<0 || inside<0)
    {
    cout<<"Dlugosc boku kwadratu zewnetrznego: ";
    cin>>outside;
    cout<<"\nDlugosc boku kwadratu wewnetrznego (Mniejsza niz zewnetrznego): ";
    cin>>inside;
    cout<<"\n";
    if (inside>outside-1 || outside<=0 || inside<0 || inside%2!=outside%2 )
    {
        cout<<"\nWprowadzone dane sa bledne!\n";
    }
    }
    for (int i=0;i<(outside-inside)/2;i++)
    {
        cout<<setfill ('*') << setw (outside+1)<<"\n";
    }
    for (int i=0;i<inside;i++)
    {
        cout<<setfill ('*') << setw (((outside-inside)/2))<<"*";
        cout<<setfill (' ') << setw (inside)<<" ";
        cout<<setfill ('*') << setw ((outside-inside)/2+1)<<"\n";
    }
    for (int i=0;i<(outside-inside)/2;i++)
    {
        cout<<setfill ('*') << setw (outside+1)<<"\n";
    }




    return 0;
}

