#include <iostream>
#include <string.h>
using namespace std;

unsigned long long results[100];


unsigned long long fib(unsigned long long n)
{
    if (results[n]!=0)
    {
        return results[n];
    }

    else if (n==0)
        return 0;
    else
    {
        results[n]=fib(n-1)+fib(n-2);
        return results[n];
    }

}


int main() {
    memset(results, 0, sizeof(results));
    char answer='t';
    unsigned long long k,prev=2,maxi=1;
    results[1] = 1;

    while (answer=='t')
    {
        cout << "Numer wyrazu ciagu:";
        cin >> k;

        if (k<=maxi)
        {
            cout<<results[k];
        }
        else
        {
            cout<<fib(k)<<"\n";
        }

        cout << "Czy chcesz wyliczyc kolejne wartosci?(t/n)\n";
        cin >> answer;
        while(answer!='n' && answer!='t')
        {
            cout<<"Bledne dane!\n";
            cin>>answer;
        }
        prev=k;
        maxi=max(maxi,k);
    }

    return 0;
}

